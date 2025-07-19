#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Problem statement: Find the peak index in a mountain array.
    // A peak index is defined as an index where the element at that index is greater than its neighbors.
    // A mountain array is an array that first increases and then decreases.

    // Brute force approach:    // Iterate through the array and check if the current element is greater than its neighbors.
    //    // Time complexity: O(n), where n is the number of elements in the array.
    //    // Space complexity: O(1), as we are using a constant amount of space.

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int peakIndex = -1;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            peakIndex = i;
            break; // We can stop after finding the first peak index.
        }
    }
    cout << peakIndex << endl; // Output the peak index found.
    // If no peak index is found, peakIndex will remain -1.
}

int main()
{

    // Optimized approach: Use binary search to find the peak index.
    // Time complexity: O(log n), where n is the number of elements in the array.
    // Space complexity: O(1), as we are using a constant amount of space.

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 1;
    int end = n - 2; // Start from 1 and end at n-2 to avoid out of bounds access.

    int index = -1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            index = mid;
        }
        if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << index << endl; // Output the peak index found.
    // If no peak index is found, index will remain -1.

    return 0;
}