#include<bits/stdc++.h>
using namespace std;
int main() {
    
    // Problem Statement:
    // Check if the ith bit of a number is set (1) or not (0).

    int n, i;
    cin >> n >> i;
    // Check if the ith bit is set
    if (n & (1 << i)) {
        cout << "The " << i << "th bit is set (1)." << endl;
    } else {
        cout << "The " << i << "th bit is not set (0)." << endl;
    }
} 