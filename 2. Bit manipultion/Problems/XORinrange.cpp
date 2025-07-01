#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Problem Statement:
    //  Find the XOR of all numbers in a given range [l, r].

    // Brute Force Approach:

    // Iterate through each number in the range and compute the XOR.

    int l, r;
    cin >> l >> r;
    int xorResult = 0;
    for (int i = l; i <= r; i++)
    {
        xorResult ^= i; // XOR operation to find the result
    }
    cout << "The XOR of all numbers in the range [" << l << ", " << r << "] is: " << xorResult << endl;

    // Its Complexity Analysis:
    // The time complexity of this code is O(n), where n is the number of elements in the range [l, r].
    // The space complexity is O(1) since we are using a fixed amount of space for the xorResult variable.

    return 0;
}

int main()
{
    // Problem Statement:
    //  Find the XOR of all numbers in a given range [l, r] using a more efficient approach.

    // Optimized Approach:

    // Use the property of XOR to compute the result in constant time.
    // The XOR of all numbers from 0 to n can be computed using a pattern based
    // on the value of n % 4:

    int n;
    cin >> n;
    int xorToN;
    if (n % 4 == 0)
    {
        xorToN = n; // If n % 4 == 0, XOR from 0 to n is n
    }
    else if (n % 4 == 1)
    {
        xorToN = 1; // If n % 4 == 1, XOR from 0 to n is 1
    }
    else if (n % 4 == 2)
    {
        xorToN = n + 1; // If n % 4 == 2, XOR from 0 to n is n + 1
    }
    else
    {
        xorToN = 0; // If n % 4 == 3, XOR from 0 to n is 0
    }
    // To find the XOR from l to r, we can use the property:
    // XOR(l to r) = XOR(0 to r) ^ XOR(0 to
    // l-1)
    int l;
    cin >> l;
    int xorToLMinus1;
    if ((l - 1) % 4 == 0)
    {
        xorToLMinus1 = l - 1; // If (l-1) % 4 == 0, XOR from 0 to l-1 is l-1
    }
    else if ((l - 1) % 4 == 1)
    {
        xorToLMinus1 = 1; // If (l-1) % 4 == 1, XOR from 0 to l-1 is 1
    }
    else if ((l - 1) % 4 == 2)
    {
        xorToLMinus1 = l; // If (l-1) % 4 == 2, XOR from 0 to l-1 is l
    }
    else
    {
        xorToLMinus1 = 0; // If (l-1) % 4 == 3, XOR from 0 to l-1 is 0
    }
    int xorResult = xorToN ^ xorToLMinus1; // XOR from l to r
    cout << "The XOR of all numbers in the range [" << l << ", " << n << "] is: " << xorResult << endl;

    // Its Complexity Analysis:
    // The time complexity of this code is O(1) since we compute the result in
    // The space complexity is O(1) as well, using a fixed amount of space for the variables.

    return 0;
}