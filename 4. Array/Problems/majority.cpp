#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Problem statement:-- Return the element which appears most time in the array/vector.

    // Brute Force Approach

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        int fr = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                fr++;
        }
        if (fr > maxi)
            temp = arr[i];
        maxi = max(maxi, fr);
    }
    cout << temp << " " << maxi << endl;

    // Time complexity is O(n**2)
    // Space Complexity is O(n)
}

int main()
{

    // Better Appraoch :--

    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    int maxi = 0;
    int fr = 1;
    int temp = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] == arr[i])
            fr++;
        else
        {
            if (fr > maxi)
                temp = arr[i - 1];
            maxi = max(maxi, fr);
            fr = 1;
        }
    }
    cout << temp << " " << maxi << endl;
    return 0;

    // Time Complexity is O(nlogn).
    // Space Complexity is O(n).
}

int main()
{

    // Most Optimized approach by using moore's voting algorithm.

    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int fr = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (fr == 0)
        {
            ans = arr[i];
        }
        if (ans == arr[i])
        {
            fr++;
        }
        else
        {
            fr--;
        }
    }
    return ans;

    // Time Complexity is O(n).
    // Space Complexity is O(n).
}