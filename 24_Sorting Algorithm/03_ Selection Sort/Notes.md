### **Selection Sort in C++**
---

### **What is Selection Sort?**

Selection Sort is an in-place, comparison-based sorting algorithm. It works by repeatedly selecting the smallest (or largest, depending on the desired order) element from the unsorted part of the array and swapping it with the element at the current position.

### **Steps of Selection Sort:**
1. Start with the first element of the array.
2. Find the smallest element in the unsorted part of the array.
3. Swap the smallest element found with the current element.
4. Move to the next element and repeat the process until the entire array is sorted.

---

### **Code Breakdown:**

```cpp
#include<iostream>
using namespace std;
```

- **`#include <iostream>`**: This is necessary for input and output. We're using `cout` to print the sorted array.
- **`using namespace std;`**: This avoids the need to prefix `std::` before standard library functions like `cout`.

---

#### **Selection Sort Function**

```cpp
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        int smallest = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallest]) {
                smallest = j;
            }
        }

        swap(arr[i], arr[smallest]);
    }
}
```

##### **Step-by-Step Explanation:**

1. **Outer Loop:**
   ```cpp
   for (int i = 0; i < n; i++)
   ```
   - This loop iterates through each element of the array. The variable `i` represents the current index of the element being considered for sorting.
   - Initially, we assume that the element at index `i` is the smallest in the unsorted portion of the array.
   
2. **Finding the Smallest Element:**
   ```cpp
   int smallest = i;
   for (int j = i + 1; j < n; j++)
   {
       if (arr[j] < arr[smallest]) {
           smallest = j;
       }
   }
   ```
   - **`smallest = i;`**: We start by assuming that the element at index `i` is the smallest.
   - The inner loop starts from `i+1` and compares each element with the current smallest.
   - **`if (arr[j] < arr[smallest])`**: If an element smaller than the current smallest is found, we update `smallest` to be the index of that element.

3. **Swapping the Elements:**
   ```cpp
   swap(arr[i], arr[smallest]);
   ```
   - After finding the smallest element in the unsorted part of the array, we swap it with the element at index `i`. This places the smallest element at its correct position.
   - This process continues until the entire array is sorted.

---

#### **Main Function**

```cpp
int main()
{
    int n = 5;
    int arr[n] = {64, 25, 12, 22, 11};  // Example array

    selectionSort(arr, n);  // Call the sorting function

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Print each element of the array
    }

    return 0;
}
```

##### **Explanation:**
1. **Define the Array:**
   - `int arr[n] = {64, 25, 12, 22, 11};` initializes the array with 5 elements: `{64, 25, 12, 22, 11}`.
   
2. **Call the Selection Sort Function:**
   - **`selectionSort(arr, n);`**: This line calls the `selectionSort` function to sort the array.

3. **Print the Sorted Array:**
   - The `for` loop iterates through the array and prints each element after the array has been sorted by the Selection Sort algorithm.

---

### **How Selection Sort Works (Step-by-Step)**

Let’s step through the algorithm with the input array `{64, 25, 12, 22, 11}`.

#### **Initial Array:**
- `{64, 25, 12, 22, 11}`

#### **Step 1: i = 0**
- **Assume the smallest element is at index `0`** (value 64).
- Compare `64` with `25`, `12`, `22`, and `11`. The smallest value is `11` at index `4`.
- Swap `64` with `11`.
- Array after Step 1: `{11, 25, 12, 22, 64}`

#### **Step 2: i = 1**
- **Assume the smallest element is at index `1`** (value 25).
- Compare `25` with `12`, `22`, and `64`. The smallest value is `12` at index `2`.
- Swap `25` with `12`.
- Array after Step 2: `{11, 12, 25, 22, 64}`

#### **Step 3: i = 2**
- **Assume the smallest element is at index `2`** (value 25).
- Compare `25` with `22` and `64`. The smallest value is `22` at index `3`.
- Swap `25` with `22`.
- Array after Step 3: `{11, 12, 22, 25, 64}`

#### **Step 4: i = 3**
- **Assume the smallest element is at index `3`** (value 25).
- Compare `25` with `64`. The smallest value is `25` itself, so no swap is needed.
- Array remains: `{11, 12, 22, 25, 64}`

#### **Step 5: i = 4**
- The element at index `4` is already in its correct position.
- Array remains: `{11, 12, 22, 25, 64}`

---

### **Sorted Array:**
- `{11, 12, 22, 25, 64}`

---

### **Time Complexity:**

- **Best Case**: O(n²) — Even if the array is sorted, the algorithm still compares every element with every other element.
- **Worst Case**: O(n²) — The array is in reverse order, requiring maximum comparisons and swaps.
- **Average Case**: O(n²) — On average, Selection Sort requires `n²` comparisons and `n` swaps.

### **Space Complexity:**

- **Space Complexity**: O(1) — Selection Sort is an **in-place** sorting algorithm, meaning it doesn’t require additional memory for sorting the array.

---
