## Complete Math Concepts for Programming with Explanations and Examples

### 1. Number Theory

**a. Prime Numbers**

- A number greater than 1 that has no divisors other than 1 and itself.
- **Example:** 2, 3, 5, 7 are prime numbers.
- **Code (Check Prime):**

```cpp
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
```

**b. Sieve of Eratosthenes**

- Efficient way to generate primes up to `n`.
- **Example:** Primes till 10: 2, 3, 5, 7.

**c. GCD and LCM**

- GCD: Greatest common divisor
- LCM: Least common multiple
- **Code (GCD):**

```cpp
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
```

- **LCM Formula:** `lcm(a, b) = (a * b) / gcd(a, b)`

**d. Modular Arithmetic**

- **Modular Addition:** `(a + b) % m`
- **Modular Inverse:** `a^-1 mod m`, only if `gcd(a, m) == 1`
- **Code (Binary Exponentiation):**

```cpp
long long power(long long a, long long b, long long m) {
    long long res = 1;
    while (b > 0) {
        if (b % 2 == 1) res = (res * a) % m;
        a = (a * a) % m;
        b /= 2;
    }
    return res;
}
```

### 2. Combinatorics

**a. Factorials**

- `n! = n * (n-1) * ... * 1`
- Used in permutations and combinations.

**b. nCr Formula:**

- `nCr = n! / (r! * (n-r)!)`
- Use precomputed factorial and modular inverse for efficiency.

**c. Pascal’s Triangle**

- Each entry is the sum of the two above it.

### 3. Probability

**a. Probability = Favorable Outcomes / Total Outcomes**
**b. Conditional Probability:**

- P(A|B) = P(A and B) / P(B)
  **c. Expected Value:**
- Sum of all outcomes weighted by probability

### 4. Algebra

**a. Algebraic Identities**

- (a + b)^2 = a^2 + 2ab + b^2
- (a - b)^2 = a^2 - 2ab + b^2
- (a + b)(a - b) = a^2 - b^2

**b. Quadratic Equation**

- ax^2 + bx + c = 0
- Roots: `(-b ± sqrt(b^2 - 4ac)) / (2a)`

### 5. Bit Manipulation

**a. Operations:** AND (&), OR (|), XOR (^), NOT (\~)
**b. Left Shift (<<):** Multiplies by 2
**c. Right Shift (>>):** Divides by 2
**d. Check if n is power of 2:** `n & (n - 1) == 0`

### 6. Geometry

**a. Distance Formula:**

- `sqrt((x2 - x1)^2 + (y2 - y1)^2)`
  **b. Area of Triangle:**
- `0.5 * base * height`
  **c. Convex Hull:**
- Smallest convex polygon that encloses all points

### 7. Matrix & Linear Algebra

**a. Matrix Multiplication**
**b. Matrix Exponentiation**

- Used in fast Fibonacci calculation

### 8. Logarithms & Exponentials

**a. log(ab) = log a + log b**
**b. log(a^b) = b log a**

- Useful in complexity analysis

### 9. Sequences & Series

**a. AP Sum:** `n/2 * (2a + (n-1)d)`
**b. GP Sum:** `a(1 - r^n)/(1 - r)` if r != 1
**c. Fibonacci:**

```cpp
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
```

### 10. Graph Math

**a. Edges in Tree = Nodes - 1**
**b. Degree Sum Theorem:** Sum of degrees = 2 \* edges

### 11. Discrete Math

**a. Sets and Relations**
**b. Pigeonhole Principle:** If n items in m boxes and n > m, then at least one box contains >1 item
**c. Logic:** AND, OR, NOT, IMPLIES

### 12. Recurrence Relations

**a. T(n) = T(n-1) + T(n-2)** (Fibonacci)
**b. Master Theorem** for solving recurrence relations in complexity

---

---
