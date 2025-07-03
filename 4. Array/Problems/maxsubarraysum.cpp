#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Problem Statements: to find maximum sub array sum.

    // Brute Force Approch:

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];
        maxi = max(maxi, sum);
        for (int j = i + 1; j < n; j++)
        {
            sum += arr[j];
            maxi = max(maxi, sum);
        }
    }
    cout << maxi << endl;
    return 0;

    // Time Complexity is O(n**2).
    // Space Complexity is O(n).
}

int main()
{

    // Optimised way to solve this problem.

    // Kadane's Algorithm

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int currentsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        maxsum = max(currentsum, maxsum);
        if (currentsum < 0)
        {
            currentsum = 0;
        }
    }
    cout << maxsum << endl;
    return 0;

    // Time complexity is O(n).
    // Space Complexity is O(n).
}