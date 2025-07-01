#include<bits/stdc++.h>
using namespace std;
int main(){

    // Problem: print the element with there addresses.

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int *ptr = arr;
    cout << "Elements and their addresses:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Element: " << *(ptr + i) << ", Address: " << (ptr + i) << endl;
    }
    return 0;


    // The Time Complexity of this code is O(n) as it iterates through the array once.
    // The Space Complexity of this code is O(1) as it uses a fixed amount of space for the pointer.
    // The code prints the elements of an array along with their addresses using pointers.
}