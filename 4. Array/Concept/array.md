## Arrays in Programming: Full Concepts and Algorithms

Arrays are a fundamental data structure that stores elements in contiguous memory locations. They're essential in programming for storing and accessing collections of data efficiently.

---

### 📌 What is an Array?

An array is a collection of items stored at contiguous memory locations.

```cpp
int arr[5] = {1, 2, 3, 4, 5};
```

### ✅ Key Properties

- Fixed size
- Random access (O(1))
- Indexing starts from 0

---

### 📖 Array Operations

1. **Traversal:** Iterate through all elements
2. **Insertion:** Insert at a position (shifting required)
3. **Deletion:** Remove from a position (shifting required)
4. **Search:** Linear or Binary Search
5. **Update:** Change the value at a specific index

---

### 🔄 Common Algorithms on Arrays

#### 1. **Find Maximum and Minimum**

```cpp
int max = arr[0];
for (int i = 1; i < n; i++)
    if (arr[i] > max) max = arr[i];
```

#### 2. **Reverse an Array**

```cpp
void reverse(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) swap(arr[start++], arr[end--]);
}
```

#### 3. **Left/Right Rotate Array**

```cpp
void rotateLeft(int arr[], int n) {
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
    arr[n - 1] = temp;
}
```

#### 4. **Find Duplicate Elements**

- Using nested loop or hashing

#### 5. **Kadane’s Algorithm (Max Subarray Sum)**

```cpp
int kadane(int arr[], int n) {
    int maxSum = arr[0], curr = arr[0];
    for (int i = 1; i < n; i++) {
        curr = max(arr[i], curr + arr[i]);
        maxSum = max(maxSum, curr);
    }
    return maxSum;
}
```

---

### 🔍 Searching Algorithms

- **Linear Search:** O(n)
- **Binary Search (sorted):** O(log n)

```cpp
int binarySearch(int arr[], int l, int r, int key) {
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}
```

---

### 📊 Sorting Algorithms

- **Bubble Sort:** O(n^2)
- **Selection Sort:** O(n^2)
- **Insertion Sort:** O(n^2)
- **Merge Sort:** O(n log n)
- **Quick Sort:** O(n log n) on average

---

### 🧠 Advanced Problems

- Subarray with given sum
- Maximum product subarray
- Longest consecutive sequence
- Count inversions using merge sort
- Sliding window maximum

---
