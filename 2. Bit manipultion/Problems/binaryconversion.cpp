#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Problem Statement:
    // Given a decimal number, convert it to its binary representation.


    int n;
    cin >> n;
    string ans = "";

    while (n > 0)
    {
        if (n % 2 == 0)
        {
            ans += '0';
        }
        else
        {
            ans += '1';
        }
        n /= 2;
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;

    // Its Complexity Analysis:
    // The time complexity of this code is O(log n), where n is the input number.
    // The space complexity is O(log n) as well, due to the storage of the binary representation in a string.
}

int main(){
    
    // Problem Statement:
    // Given a binary number as a string, convert it to its decimal representation.

    string binary;
    cin >> binary; 
    int decimal = 0;
    int base = 1; // Initialize base value to 1 (2^0)
    int len = binary.length();
    for (int i = len - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base; // Add the value of the current bit
        }
        base *= 2; // Update base to the next power of 2
    }
    cout << decimal << endl;
    return 0;

    // Its Complexity Analysis:
    // The time complexity of this code is O(n), where n is the length of the binary string.
    // The space complexity is O(1) since we are using a fixed amount of space.
}
