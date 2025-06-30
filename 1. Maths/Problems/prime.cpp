#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    cout << (isPrime(n) ? "Prime" : "Not Prime");
    return 0;
}

// prime within range

// 1. brute force approach:

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}

// 2. sieve of eratosthenes approach (optimal approach):

int main()
{
    int n;
    cin >> n;
    vector<bool> prime(n + 1, true);
    int cnt = 0;
    prime[0] = prime[1] = false; // 0 and 1 are not prime numbers.
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            cnt++;
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    return cnt;
    // The count of prime numbers up to n is stored in cnt.
}

// The Complexity of the Sieve of Eratosthenes is O(n log log n), which is much more efficient than checking each number individually for primality, especially for large values of n. The space complexity is O(n) due to the storage of the boolean array.
