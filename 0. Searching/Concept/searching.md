# 🔍 Searching in DSA – A to Z Guide

## 📌 What is Searching?

Searching is the process of finding a specific element in a collection like arrays, linked lists, trees, or graphs.

---

## 📦 Types of Searching

### 1. Linear Search

- **Description**: Check each element one by one.
- **Time Complexity**: O(n)
- **Best Case**: O(1)
- **Worst Case**: O(n)

```cpp
int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) return i;
    }
    return -1;
}
```

---

### 2. Binary Search

- **Description**: Requires sorted array. Divides search space by 2.
- **Time Complexity**: O(log n)
- **Best Case**: O(1)
- **Worst Case**: O(log n)

```cpp
int binarySearch(int arr[], int left, int right, int target) {
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
```

#### 🔹 Variants

- First and Last Occurrence
- Count Occurrences
- Lower/Upper Bound

---

### 3. Ternary Search

- **Description**: Divide array into three parts.
- **Use Case**: Unimodal functions.
- **Time Complexity**: O(log₃ n)

---

### 4. Jump Search

- **Description**: Jump ahead in √n steps.
- **Time Complexity**: O(√n)

---

### 5. Exponential Search

- **Description**: Finds range using powers of 2, then binary search.
- **Use Case**: Infinite or unbounded arrays.
- **Time Complexity**: O(log i)

---

### 6. Fibonacci Search

- **Description**: Uses Fibonacci sequence instead of mid-point.
- **Time Complexity**: O(log n)

---

### 7. Interpolation Search

- **Description**: Works best on uniformly distributed data.
- **Time Complexity**: Best O(log log n), Worst O(n)

```cpp
int interpolationSearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high && x >= arr[low] && x <= arr[high]) {
        int pos = low + ((x - arr[low]) * (high - low)) / (arr[high] - arr[low]);
        if (arr[pos] == x) return pos;
        if (arr[pos] < x) low = pos + 1;
        else high = pos - 1;
    }
    return -1;
}
```

---

## 🏗️ Searching in Data Structures

### ✅ Arrays

- Linear Search
- Binary Search (Sorted Only)

### ✅ Linked List

- Linear Search only (no random access)

### ✅ Hash Tables

- **Average Time**: O(1)
- **Worst Time**: O(n)

```cpp
unordered_map<int, int> mp;
if(mp.find(target) != mp.end()) cout << "Found!";
```

### ✅ Binary Search Tree (BST)

- **Average**: O(log n)
- **Worst**: O(n)

### ✅ Balanced BST (AVL, Red-Black Tree)

- **Time**: Always O(log n)

### ✅ Trie

- **Use Case**: Strings and prefixes
- **Time Complexity**: O(length of word)

### ✅ Graphs

- Use DFS/BFS to search nodes or paths.
- **Time**: O(V + E)

---

## 🛠️ STL Based Searching (C++)

```cpp
binary_search(arr, arr + n, x); // Returns true/false

lower_bound(arr, arr + n, x);   // First element >= x
upper_bound(arr, arr + n, x);   // First element > x
```

---

## ⏱️ Time & Space Summary

| Technique            | Time Complexity | Space | Sorted? |
| -------------------- | --------------- | ----- | ------- |
| Linear Search        | O(n)            | O(1)  | ❌      |
| Binary Search        | O(log n)        | O(1)  | ✅      |
| Jump Search          | O(√n)           | O(1)  | ✅      |
| Interpolation Search | O(log log n)    | O(1)  | ✅      |
| Exponential Search   | O(log n)        | O(1)  | ✅      |
| Hashing              | O(1) avg        | O(n)  | ❌      |
| BST                  | O(log n) / O(n) | O(1)  | ❌      |
| Trie                 | O(len)          | O(n)  | ❌      |
| Graph Search         | O(V + E)        | O(V)  | ❌      |

---

## 💡 Tips

- Use **Binary Search** only on sorted data.
- Use **Hashing** for fast key-based lookup.
- Use **Tries** for prefix-based problems.
- Graph traversal algorithms (DFS/BFS) are used for generalized search.

---

## 🧠 Practice Problems

| Problem                            | Platform |
| ---------------------------------- | -------- |
| Binary Search on Rotated Array     | LeetCode |
| Search Insert Position             | LeetCode |
| First and Last Occurrence          | GFG      |
| Search in a 2D Matrix              | LeetCode |
| Koko Eating Bananas                | LeetCode |
| Word Dictionary using Trie         | LeetCode |
| Graph Path Existence using BFS/DFS | GFG      |

---

## 📚 Summary

- Understand when and where to use each algorithm.
- Practice variations and edge cases.
- Learn both brute force and optimal approaches.
