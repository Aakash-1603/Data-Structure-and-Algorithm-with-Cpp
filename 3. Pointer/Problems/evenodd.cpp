#include<bits/stdc++.h>
using namespace std;
int main() {

    // Problem: Count the number of even and odd using pointers.

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int *ptr = arr;
    int evenCount = 0, oddCount = 0;
    for(int i = 0; i < n; i++) {
        if(*(ptr + i) % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << "Number of even elements: " << evenCount << endl;
    cout << "Number of odd elements: " << oddCount << endl;
    return 0;


    // The Time Complexity of this code is O(n) as it iterates through the array once.
    // The Space Complexity of this code is O(1) as it uses a fixed amount of space for the pointers and counters.
    // The code counts the number of even and odd elements in an array using pointers and print the counts.
}