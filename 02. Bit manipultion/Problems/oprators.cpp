#include <bits/stdc++.h>
using namespace std;
int main()
{

    // AND operator
    int a, b;
    cin >> a >> b;
    int andResult = a & b; // Bitwise AND
    cout << "AND Result: " << andResult << endl;

    // OR operator
    int orResult = a | b; // Bitwise OR
    cout << "OR Result: " << orResult << endl;

    // XOR operator
    int xorResult = a ^ b; // Bitwise XOR
    cout << "XOR Result: " << xorResult << endl;

    // NOT operator
    int notA = ~a; // Bitwise NOT of a
    int notB = ~b; // Bitwise NOT of b
    cout << "NOT A Result: " << notA << endl;
    cout << "NOT B Result: " << notB << endl;

    // Left Shift operator
    int leftShiftA = a << 1; // Left shift a by 1 bit
    int leftShiftB = b << 1; // Left shift b by 1 bit
    cout << "Left Shift A Result: " << leftShiftA << endl;
    cout << "Left Shift B Result: " << leftShiftB << endl;

    // Right Shift operator
    int rightShiftA = a >> 1; // Right shift a by 1 bit
    int rightShiftB = b >> 1; // Right shift b by 1 bit
    cout << "Right Shift A Result: " << rightShiftA << endl;
    cout << "Right Shift B Result: " << rightShiftB << endl;
    return 0;

    // Its Complexity Analysis:
    // The time complexity of this code is O(1) for each operation since bitwise operations are performed in constant time.
    // The space complexity is also O(1) as we are using a fixed amount of
    // space for the results of the operations.
}