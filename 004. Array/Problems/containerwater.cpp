#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Problem statement:---  there are different heights of containers in the array we have to find that between which 2 conatiners the water stores the most.

    // Brute force approach ....

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
        int Totalwater = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                Totalwater = arr[j] * (j - i);
                maxi = max(maxi, Totalwater);
            }
            else
            {
                Totalwater = arr[i] * (j - i);
                maxi = max(maxi, Totalwater);
            }
        }
    }
    return maxi;

    // Time Complexity is O(n**2).
    // Space Complexity is O(n).
}

int main()
{

    // Optimised approach by using 2 pointer method.

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 0;
    int end = n - 1;
    int maxi = 0;
    while (start < end)
    {
        int Totalwater = 0;
        if (arr[start] < arr[end])
        {
            Totalwater = arr[start] * (end - start);
            maxi = max(maxi, Totalwater);
            start++;
        }
        else
        {
            Totalwater = arr[end] * (end - start);
            maxi = max(maxi, Totalwater);
            end--;
        }
    }
    return maxi;
}