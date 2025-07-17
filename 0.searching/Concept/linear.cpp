#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Linear search algorithm ...

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int find;
    cin >> find;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == find)
        {
            return i;
        }
    }
    return -1;
}