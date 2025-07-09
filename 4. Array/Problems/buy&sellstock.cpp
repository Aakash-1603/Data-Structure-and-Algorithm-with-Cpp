#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Problem Statement :- Stock buy and sell nd generate the maximum profit.

    // brute froce approach .

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            maxi = max(maxi, (arr[j] - arr[i]));
        }
    }
    return maxi;

    // Time complexity is O(n**2).
    // Space complexity is O(n).
}

int main()
{

    // optimized approach...

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxProfit = 0;
    int bestBuy = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > bestBuy)
        {
            maxProfit = max(maxProfit, arr[i] - bestBuy);
        }
        bestBuy = min(bestBuy, arr[i]);
    }

    return maxProfit;

    // Time complexity is O(n).
    // Space complexity is O(n).
}