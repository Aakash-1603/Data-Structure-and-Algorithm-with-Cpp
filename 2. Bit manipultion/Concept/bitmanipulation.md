## Bit Manipulation for Programming

Bit manipulation involves operating directly on the bits of binary numbers. It's efficient and widely used in competitive programming, embedded systems, and algorithm design.

---

### 🔢 Binary Representation

- Every integer is stored in binary format.
- **Example:**

  - 5 = `00000101`
  - 10 = `00001010`

---

### 🔧 Bitwise Operators

| Operator    | Symbol | Description             | Example                            |     |              |               |
| ----------- | ------ | ----------------------- | ---------------------------------- | --- | ------------ | ------------- |
| AND         | `&`    | 1 if both bits are 1    | `5 & 3 = 1` → `0101 & 0011 = 0001` |     |              |               |
| OR          | \`     | \`                      | 1 if at least one bit is 1         | \`5 | 3 = 7`→`0101 | 0011 = 0111\` |
| XOR         | `^`    | 1 if bits are different | `5 ^ 3 = 6` → `0101 ^ 0011 = 0110` |     |              |               |
| NOT         | `~`    | Inverts all bits        | `~5 = -6` (in 2's complement)      |     |              |               |
| Left Shift  | `<<`   | Shifts bits left (×2)   | `5 << 1 = 10`                      |     |              |               |
| Right Shift | `>>`   | Shifts bits right (÷2)  | `5 >> 1 = 2`                       |     |              |               |

---

### ⚙️ Bitwise Techniques

1. **Check if number is even:** `n & 1 == 0`
2. **Check if power of 2:** `n > 0 && (n & (n - 1)) == 0`
3. **Set i-th bit:** `n | (1 << i)`
4. **Clear i-th bit:** `n & ~(1 << i)`
5. **Toggle i-th bit:** `n ^ (1 << i)`
6. **Check if i-th bit is set:** `(n >> i) & 1`
7. **Count set bits (Brian Kernighan’s Algo):**

```cpp
int countSetBits(int n) {
    int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}
```

---

### 🔁 Applications

- Subset generation (bitmasking)
- Space-efficient flags and states
- Finding single elements (e.g., XOR trick)
- Arithmetic optimization (fast multiply/divide)

---

### 🧩 Practice Examples

**1. Swap using XOR:**

```cpp
void swap(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
```

**2. Find single non-repeating number:**

```cpp
int findUnique(vector<int>& arr) {
    int res = 0;
    for (int num : arr) res ^= num;
    return res;
}
```

**3. Generate all subsets using bitmask:**

```cpp
void generateSubsets(vector<int>& nums) {
    int n = nums.size();
    for (int mask = 0; mask < (1 << n); ++mask) {
        for (int i = 0; i < n; ++i)
            if (mask & (1 << i)) cout << nums[i] << " ";
        cout << endl;
    }
}


---
```
