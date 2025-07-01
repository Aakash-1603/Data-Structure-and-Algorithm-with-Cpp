#include<bits/stdc++.h>
using namespace std;
int main() {
    
    // Problem: Swap two numbers using pointers

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swapping using pointers
    int *p1 = &a;
    int *p2 = &b;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;

    //The Time Complexity of this code is O(1) as it performs a constant number of operations regardless of the input size.
    //The Space Complexity of this code is O(1) as it uses a fixed amount of space for the variables.
    // The code swaps two numbers using pointers and prints the values before and after swapping.
}