#include <bits/stdc++.h>
using namespace std;

int isvalid(vector<int> &arr, int n, int m, int maxAllowedPages)
{
    // note:- maxAllowedPages is mid....
    // Function to check if the current allocation is valid
    // This function will check if we can allocate books to students
    // such that no student has more than 'mid' pages assigned.
    // It will return true if valid, false otherwise.

    int students = 1;
    int pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedPages)
        {
            return false; // If a single book has more pages than allowed, allocation is not possible
        }
        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i]; // Allocate book to current student
        }
        else
        {
            students++;     // Move to next student
            pages = arr[i]; // Allocate current book to new student
        }
    }
    if (students > m)
    {
        return false; // More students needed than available
    }
    else
    {
        return true; // Valid allocation
    }
}

int allocatebooks(vector<int> &arr, int n, int m)
{
    if (n < m)
    {
        return -1; // Not enough books for each student
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int st = 0;
    int end = sum;
    int ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isvalid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
}

int main()
{

    // Problem Statement: Allocate books to students such that the maximum number of pages assigned to a student is minimized.
    // Approach: Use binary search to find the minimum possible maximum pages assigned to a student.

    // ------------------------------------------//

    // There are N books, each ith book has A[i] number of pages.

    // You have to allocate these books to M students such that the maximum number of pages assigned to a student is minimized.

    // Each book should be allocated to a student.
    // Each student has to be allocated at least one book.
    // Allotment should be in contiguous order.

    // Calculate and return that minimum possible number.
    // Return -1 if a valid allocation is not possible.

    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << allocatebooks(arr, n, m) << endl; // Call the function to allocate books and print the result
    return 0;
}

// Time Complexity: O(N * log(sum)), where N is the number of books and sum is the total number of pages.
// Space Complexity: O(1), as we are using a constant amount of space for variables
// Note: The function allocatebooks should return the answer, which is the minimum possible maximum pages assigned to a student.
// The function isvalid checks if the current allocation is valid based on the maximum allowed pages.
// The main function reads input and calls allocatebooks to get the result.