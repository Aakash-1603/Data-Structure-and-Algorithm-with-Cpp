#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Problem Statement:
    // Toggle the ith bit of a number.
    int n, i;
    cin >> n >> i;
    // Toggle the ith bit using XOR operator
    n = n ^ (1 << i);
    cout << "After toggling the " << i << "th bit, the number is: " << n << endl;
    return 0;

    // Its Complexity Analysis:
    // The time complexity of this code is O(1) since it performs a fixed number
    // The space complexity is also O(1) as it uses a constant amount of space for the variables.
}