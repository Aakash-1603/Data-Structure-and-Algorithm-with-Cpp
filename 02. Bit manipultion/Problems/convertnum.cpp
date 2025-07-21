#include <bits/stdc++.h>
using namespace std;
int main()
{

    // problem Statement:
    // Mininmum bits flips to convert a number a to b.
    int a, b;
    cin >> a >> b;
    int xorResult = a ^ b; // XOR to find differing bits
    int count = 0;
    while (xorResult > 0)
    {
        count += (xorResult & 1); // Count the number of set bits
        xorResult >>= 1;          // Right shift to check the next bit
    }
    cout << "Minimum bits flips to convert " << a << " to " << b << " is: " << count << endl;
    return 0;

    // Its Complexity Analysis:
    // The time complexity of this code is O(log n), where n is the maximum of a and b.
    // The space complexity is O(1) since we are using a fixed amount of space for the variables.
    // The XOR operation is efficient for finding differing bits, and counting set bits is done in
}