// GCD (Greatest Common Divisor) or HCF (Highest Common Factor) of two numbers is the largest number that divides both of them without leaving a remainder.
// The GCD can be calculated using the Euclidean algorithm, which is efficient and works based on the principle that the GCD of two numbers also divides their difference.
// The algorithm can be summarized as follows:
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Brute force approach:

    int a, b;
    cin >> a >> b;
    int gcd = 1; // in any case gcd will be at least 1.
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i; // update gcd if i divides both a and b.
        }
    }
    return 0;
}

int main()
{
    // Optimized approach using Euclidean algorithm:

    int a, b;
    cin >> a >> b;
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b; // replace a with remainder of a divided by b
        else
            b = b % a; // replace b with remainder of b divided by a
    }
    if (a == 0)
        cout << "GCD is: " << b << endl; // if a becomes 0, b is the GCD
    else
        cout << "GCD is: " << a << endl; // if b becomes 0, a is the GCD
    return 0;
}
// The time complexity of the Euclidean algorithm is O(log(min(a, b))), making it very efficient for large numbers.
// The brute force approach has a time complexity of O(min(a, b)), which is less efficient, especially for large values of a and b.