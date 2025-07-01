#include<bits/stdc++.h>
using namespace std;
int main() {

    // Problem Statement:
    // Given an array of integers, find the number that appears only once,
    // while all other numbers appear exactly twice. 
    
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i]; // XOR operation to find the unique number
    }
    cout << "The number that appears only once is: " << result << endl;
    return 0;

    // Its Complexity Analysis:
    // The time complexity of this code is O(n), where n is the number of elements in the array.
    // The space complexity is O(1) since we are using a fixed amount of space for the result variable.
    // The XOR operation is efficient for finding the unique number, as it cancels out the pairs of numbers that appear twice.
}