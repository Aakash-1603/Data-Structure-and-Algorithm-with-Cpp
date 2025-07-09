#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Problem staement :-- calculate the power of the given number with its given exponent.

    // most optimised approach is to take the binary of the exponent and in binary multiply when there is 1.

    int n;
    cin >> n;
    int exponent;
    cin >> exponent;

    int ans = 1;

    int bf;
    cin >> bf; // Binary form.

    {
        // handel negative edge cases.

        if (exponent < 0)
        {
            n = 1 / n;
            bf = -bf;
        }
    }

    while (bf > 0)
    {
        if (bf % 2 == 1)
        {
            ans *= n;
        }
        n *= n;
        bf /= 2;
    }
    return ans;

    // time complexity is O(logn).
}