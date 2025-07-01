#include<bits/stdc++.h>
using namespace std;
int main() {
    
    // Problem Statement:
    // Given a binary number as a string, find its one's complement.
    
    string binary;
    cin >> binary; 
    string complement = "";
    
    for (char bit : binary) {
        if (bit == '0') {
            complement += '1'; // Flip 0 to 1
        } else {
            complement += '0'; // Flip 1 to 0
        }
    }
    
    cout << complement << endl;
    
    return 0;

    // Its Complexity Analysis:
    // The time complexity of this code is O(n), where n is the length of the binary string.
    // The space complexity is O(n) due to the storage of the complement string.
}


int main(){
    // Problem Statement:
    // Given a binary number as a string, find its two's complement.
    
    string binary;
    cin >> binary; 
    int n = binary.length();
    
    // Step 1: Find the one's complement
    string onesComplement = "";
    for (char bit : binary) {
        if (bit == '0') {
            onesComplement += '1'; // Flip 0 to 1
        } else {
            onesComplement += '0'; // Flip 1 to 0
        }
    }
    
    // Step 2: Add 1 to the one's complement
    string twosComplement = onesComplement;
    int carry = 1; // Start with carry of 1 for addition
    
    for (int i = n - 1; i >= 0; i--) {
        if (twosComplement[i] == '1' && carry == 1) {
            twosComplement[i] = '0'; // 1 + 1 = 0 with carry
        } else if (twosComplement[i] == '0' && carry == 1) {
            twosComplement[i] = '1'; // 0 + 1 = 1, no carry
            carry = 0; // No more carry
        }
        // If carry is already 0, we do nothing
    }
    
    if (carry == 1) {
        twosComplement = '1' + twosComplement; // If there's still a carry, prepend '1'
    }
    
    cout << twosComplement << endl;
    
    return 0;

    // Its Complexity Analysis:
    // The time complexity of this code is O(n), where n is the length of the binary string.
    // The space complexity is O(n) due to the storage of the two's complement string.
}

