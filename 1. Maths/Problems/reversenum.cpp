#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int reversedNumber = 0;
    while (n != 0)
    {
        int digit = n % 10;                           // Get the last digit
        reversedNumber = reversedNumber * 10 + digit; // Append it to the reversed number
        n /= 10;                                      // Remove the last digit from n
    }
    cout << "Reversed Number: " << reversedNumber << endl; // Output the reversed number
    return 0;
}