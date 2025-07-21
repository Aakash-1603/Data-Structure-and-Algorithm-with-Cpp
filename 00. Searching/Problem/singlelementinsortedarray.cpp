#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Problem statement: Find the single element in a sorted array where every other element appears twice.

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Brute force approach: Iterate through the array and check for the single element.
    // Time complexity: O(n), where n is the number of elements in the array.
    // Space complexity: O(1), as we are using a constant amount of space.
    int singleElement = -1;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 && arr[i] != arr[i + 1])
        {
            singleElement = arr[i];
            break;
        }
        else if (i == n - 1 && arr[i] != arr[i - 1])
        {
            singleElement = arr[i];
            break;
        }
        else if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
        {
            singleElement = arr[i];
            break;
        }
    }
    cout << singleElement << endl; // Output the single element found.
}

int main()
{

    // Optimized approach: Use binary search to find the single element.
    // Time complexity: O(log n), where n is the number of elements in the array.
    // Space complexity: O(1), as we are using a constant amount of space.

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = n - 1;
    int singleElement = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid == 0 && arr[mid] != arr[mid + 1])
        {
            singleElement = arr[mid];
            break;
        }
        else if (mid == n - 1 && arr[mid] != arr[mid - 1])
        {
            singleElement = arr[mid];
            break;
        }
        else
        {
            if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
            {
                singleElement = arr[mid];
                break;
            }
            else if ((mid % 2 == 0 && arr[mid] == arr[mid - 1]) || (mid % 2 == 0 && arr[mid] == arr[mid + 1]))
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    cout << singleElement << endl; // Output the single element found.
    // If no single element is found, singleElement will remain -1.
    return 0;
}