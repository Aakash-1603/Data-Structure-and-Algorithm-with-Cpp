#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Armstrong number is a number that is equal to the sum of its own digits raised to the power of the number of digits.
    int n;
    cin >> n;
    int original = n;
    int sum = 0;
    int digits = 0;
    while (n != 0)
    {
        digits++;
        n /= 10;
    }
    n = original; // Reset n to original value
    while (n != 0)
    {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }
    if (sum == original)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not an Armstrong Number" << endl;
    }
    return 0;
}