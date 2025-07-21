#include <bits/stdc++.h>
using namespace std;
int main()
{
    // LCM (Least Common Multiple) of two numbers is the smallest number that is a multiple of both numbers.
    // The LCM can be calculated using the relationship between GCD and LCM:
    // LCM(a, b) = (a * b) / GCD(a, b)

    int a, b;
    cin >> a >> b;
    int gcd = 1; // Initialize GCD to 1
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b; // replace a with remainder of a divided by b
        else
            b = b % a; // replace b with remainder of b divided by a
    }
    if (a == 0)
    {
        gcd = b; // if a becomes 0, b is the GCD
    }
    else
    {
        gcd = a; // if b becomes 0, a is the GCD
    }

    int lcm = (a * b) / gcd;           // Calculate LCM using the relationship with GCD
    cout << "LCM is: " << lcm << endl; // Output the LCM.

    return 0;
}