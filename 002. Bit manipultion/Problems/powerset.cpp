#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Problem Statement:
    // Powerset of a set
    // A powerset is the set of all subsets of a set, including the empty set

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<vector<int>> powerset;
    int totalSubsets = 1 << n; // 2^n subsets
    for (int i = 0; i < totalSubsets; i++)
    {
        vector<int> subset;
        for (int j = 0; j < n; j++)
        {
            // Check if the jth bit of i is set
            if (i & (1 << j))
            {
                subset.push_back(arr[j]);
            }
        }
        powerset.push_back(subset);
    }

    // Print the powerset
    cout << "{ ";
    for (const auto &subset : powerset)
    {
        cout << "{ ";
        for (const auto &elem : subset)
        {
            cout << elem << " ";
        }
        cout << "} ";
    }
    cout << "}" << endl;
    return 0;

    // Its Complexity Analysis:
    // The time complexity of this code is O(2^n * n), where n is the number of elements in the input set.
    // This is because we generate 2^n subsets, and for each subset, we may need to iterate through n elements to check which ones are included.
    // The space complexity is O(2^n * n) as well, since we store all subsets in a vector of vectors.
    // Note: The powerset includes the empty set and the set itself as subsets.
}