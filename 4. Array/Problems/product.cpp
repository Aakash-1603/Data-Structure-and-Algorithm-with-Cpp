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