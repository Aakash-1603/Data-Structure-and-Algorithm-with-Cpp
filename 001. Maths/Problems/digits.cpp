#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        int digit = n % 10;
        cout << digit << " ";
        n = n / 10;
    }

    // direct way to print count of digits in an number is.
    cout << log10(n) + 1 << endl;
    return 0;
}

// The complexity of this code is O(log n) for counting the digits, as it involves repeatedly dividing the number by 10 until it becomes 0. The space complexity is O(1) since we are using a constant amount of space for variables.
// The time complexity for printing the digits is O(d) where d is the number of digits in the number, as we are iterating through each digit once. The overall complexity remains O(log n) since the number of digits d is proportional to log10(n).
// The space complexity for printing the digits is also O(1) since we are not using any additional data structures that grow with the input size. The output is printed directly to the console without storing it in a data structure.