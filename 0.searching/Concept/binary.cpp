#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Binary search algorithm ...
    // it always work on sorted order elements.

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        // mid = start + (end-start)/2 -> it is used to ecape from any overflow condition.

        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

// Recursive Binary Search....

int bs(int arr[], int target, int start, int end)
{
    int mid = start + (end - start) / 2;
    if (target > arr[mid])
    {
        return bs(arr, target, mid + 1, end);
    }
    else if (target < arr[mid])
    {
        return bs(arr, target, start, mid - 1);
    }
    else
    {
        return mid;
    }
}