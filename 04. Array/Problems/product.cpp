#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Probblem Statement :-- find the product of the array except self.

    // Brute force Approach.

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                product *= arr[j];
            }
        }
        res.push_back(product);
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;

    // Time Complexity is O(n**2).
    // Space Complexity is O(n).
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // calculate the product of complete array.

    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }

    // place the product at each index of its own

    for (int i = 0; i < n; i++)
    {
        arr[i] = product / arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;

    // but this code fails at 0 value present in array.
}

int main()
{

    // optimal solution:---

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> prefix;
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * arr[i];
    }
    vector<int> suffix;
    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * arr[i];
    }
    for (int i = 0; i < prefix.size(); i++)
    {
        cout << prefix[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < suffix.size(); i++)
    {
        cout << suffix[i] << " ";
    }
    cout << endl;
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            res.push_back(suffix[i + 1]);
        }
        else if (i == n - 1)
        {
            res.push_back(prefix[n - 2]);
        }
        else
        {
            res.push_back(prefix[i - 1] * suffix[i + 1]);
        }
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;

    // Time complexity is O(n).
    // Space complexity is O(n).

    // if you also want to remove the prefix and suffix array space from the code you can directly put the result of pultipliction into the res arry.
}