#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Problem: Reverse an array using pointers

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Reversing the array using pointers
    int *start = arr;
    int *end = arr + n - 1;

    while (start < end)
    {
        swap(*start, *end);
        start++;
        end--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

    // The Time Complexity of this code is O(n) as it iterates through the array once.
    // The Space Complexity of this code is O(1) as it uses a fixed amount of space for pointers.
}