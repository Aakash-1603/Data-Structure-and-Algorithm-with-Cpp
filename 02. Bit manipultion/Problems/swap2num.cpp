#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Swap two numbers with help of XOR operator.

    int a, b;
    cin >> a >> b;
    cout << "Before Swap: a = " << a << ", b = " << b << endl;
    a = a ^ b; // Step 1: a now holds the XOR of a and b
    b = a ^ b; // Step 2: b now holds the original value of a
    a = a ^ b; // Step 3: a now holds the original value of b
    cout << "After Swap: a = " << a << ", b = " << b << endl;
    return 0;

    // Its Complexity Analysis:
    // The time complexity of this code is O(1) since it performs a fixed number
    // The space complexity is also O(1) as it uses a constant amount of space for the variables.

    // Note: The XOR of same number is 0, and the XOR of a number with 0 is the number itself.
}