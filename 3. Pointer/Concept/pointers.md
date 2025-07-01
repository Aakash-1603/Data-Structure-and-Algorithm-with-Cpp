## Pointers in Programming: Full Concept with Examples

Pointers are variables that store the memory address of another variable. They are powerful tools in C/C++ for memory management, data structures, and system-level programming.

---

### 📌 What is a Pointer?

A pointer holds the address of a variable.

```cpp
int a = 10;
int* ptr = &a; // ptr stores the address of a
```

### 📍 Declaration and Initialization

```cpp
int* p;     // pointer to int
float* f;   // pointer to float
p = &a;     // stores address of a in p
```

### 📎 Dereferencing a Pointer

Accessing the value at the address using `*`.

```cpp
cout << *ptr;  // prints 10 (value of a)
```

---

### 📖 Pointer Operators

| Operator | Meaning              |
| -------- | -------------------- |
| `*`      | Dereference operator |
| `&`      | Address-of operator  |

---

### 📌 Types of Pointers

1. **Null Pointer:** points to nothing → `int* p = nullptr;`
2. **Void Pointer:** general-purpose pointer → `void* ptr;`
3. **Dangling Pointer:** points to deleted/freed memory
4. **Wild Pointer:** uninitialized pointer
5. **Double Pointer:** pointer to another pointer → `int** ptr2;`

---

### 💡 Pointer Arithmetic

```cpp
int arr[] = {1, 2, 3};
int* p = arr;
p++;  // points to next element
```

Supported: `++, --, +, -, ==, !=`

---

### 📘 Example

```cpp
#include<iostream>
using namespace std;

int main() {
    int a = 5;
    int* ptr = &a;

    cout << "Address of a: " << ptr << endl;
    cout << "Value of a: " << *ptr << endl;

    return 0;
}
```

---

### 🔁 Pointers and Arrays

```cpp
int arr[3] = {10, 20, 30};
int* p = arr;
cout << *(p + 1);  // prints 20
```

---

### 📚 Pointers with Functions

1. **Call by Reference using Pointers:**

```cpp
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
```

2. **Passing Arrays:**

```cpp
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
```

---

### 🧩 Common Interview Questions

- Reverse array using pointers
- Pointer vs Array difference
- Pointer to function
- Use of `const` with pointers

---
