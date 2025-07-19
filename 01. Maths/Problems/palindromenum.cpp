#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Palindrome number is a number that remains the same when its digits are reversed.
    int n;
    cin >> n;
    int original = n;       // Store the original number
    int reversedNumber = 0; // Variable to store the reversed number
    while (n != 0)
    {
        int digit = n % 10;                           // Get the last digit
        reversedNumber = reversedNumber * 10 + digit; // Append it to the reversed number
        n /= 10;                                      // Remove the last digit from n
    }
    if (reversedNumber == original) // Check if the reversed number is equal to the original number
    {
        cout << "Palindrome Number" << endl; // Output if it is a palindrome
    }
    else
    {
        cout << "Not a Palindrome Number" << endl; // Output if it is not a palindrome
    }
    return 0; // Return 0 to indicate successful execution
}