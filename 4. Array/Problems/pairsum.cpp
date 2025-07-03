// Problem Statements:-

// pair sum

#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Brute-Force Approach.

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int targetsum;
    cin >> targetsum;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];
        if (sum == targetsum)
        {
            cout << i << endl;
            return 0;
        }
        for (int j = i + 1; j < n; j++)
        {
            sum += arr[j];
            if (sum == targetsum)
            {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    return 0;
}

int main()
{

    // optimized approach:--

    // Using 2 pointer method

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int targetsum;
    cin >> targetsum;
    int start = 0;
    int end = n - 1;
    int pairsum = 0;
    while (start < end)
    {
        pairsum = arr[start] + arr[end];
        if (pairsum > targetsum)
        {
            end--;
        }
        else if (pairsum < targetsum)
        {
            start++;
        }
        else
        {
            cout << start << " " << end << endl;
            return 0;
        }
    }
    return 0;
}