### **Insertion Sort in C++**
---

### **What is Insertion Sort?**

Insertion Sort is a simple sorting algorithm that builds the final sorted array one element at a time. It’s much like sorting playing cards in your hands:
- You start with one card.
- Then, each new card is inserted into the sorted hand at its correct position.

### **Code Explanation**

#### 1. **Include Libraries and Use Namespace**

```cpp
#include <iostream>
using namespace std;
```

- **`#include <iostream>`**: This line includes the input-output library so that we can use `cout` to print the sorted array.
- **`using namespace std;`**: This makes it easier to write code because we can directly use things like `cout` and `endl` without prefixing them with `std::`.

---

#### 2. **Insertion Sort Function**

```cpp
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)  // Start from index 1
    {
        int current = arr[i];  // Element to insert in sorted part
        int previous = i - 1;  // Last sorted element
        
        // Move elements greater than current to the right
        while (previous >= 0 && arr[previous] > current)
        {
            arr[previous + 1] = arr[previous];  // Shift element to the right
            previous--;  // Move to the left
        }
        
        arr[previous + 1] = current;  // Place current element in the right position
    }
}
```

Let’s break down the `insertionSort` function:

1. **Input Parameters**:
   - `arr[]`: The array to be sorted.
   - `n`: The size of the array.

2. **Outer Loop**:
   - The loop starts at index 1 because we assume the first element (`arr[0]`) is already sorted.
   - For each index `i`, we need to insert the element `arr[i]` into the sorted part of the array (`arr[0..i-1]`).

3. **Inner Loop**:
   - The inner loop compares the `current` element with elements in the sorted part of the array.
   - If the sorted element (`arr[previous]`) is greater than the `current`, we shift the sorted element to the right.

4. **Insert the Element**:
   - After shifting the greater elements, we place the `current` element in the correct position in the sorted part.

---

#### 3. **Main Function**

```cpp
int main()
{
    int n = 6;
    int arr[n] = {12, 34, 6, 78, 89, 90};  // Example array

    insertionSort(arr, n);  // Call the sorting function

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";  // Print each element of the array
    }
    cout << endl;

    return 0;
}
```

Here’s what happens in the `main` function:

1. **Define the Array**:
   - **`int arr[n] = {12, 34, 6, 78, 89, 90};`**: We define an array with 6 elements to be sorted.

2. **Call the Sorting Function**:
   - **`insertionSort(arr, n);`**: This calls the `insertionSort` function, which sorts the array.

3. **Print the Sorted Array**:
   - The `for` loop prints each element of the sorted array.

---

### **How Insertion Sort Works (Step-by-Step)**

Let’s walk through the sorting process using the array `{12, 34, 6, 78, 89, 90}`.

1. **Initial Array**: `{12, 34, 6, 78, 89, 90}`

#### **Step 1: i = 1**
- **current = 34**
- Compare `34` with `arr[0]` (12). Since `34 > 12`, no change is made.
- Array remains: `{12, 34, 6, 78, 89, 90}`

#### **Step 2: i = 2**
- **current = 6**
- Compare `6` with `arr[1]` (34). Since `6 < 34`, shift 34 to the right.
- Compare `6` with `arr[0]` (12). Since `6 < 12`, shift 12 to the right.
- Insert `6` in position 0.
- Array becomes: `{6, 12, 34, 78, 89, 90}`

#### **Step 3: i = 3**
- **current = 78**
- Compare `78` with `arr[2]` (34). Since `78 > 34`, no change is made.
- Array remains: `{6, 12, 34, 78, 89, 90}`

#### **Step 4: i = 4**
- **current = 89**
- Compare `89` with `arr[3]` (78). Since `89 > 78`, no change is made.
- Array remains: `{6, 12, 34, 78, 89, 90}`

#### **Step 5: i = 5**
- **current = 90**
- Compare `90` with `arr[4]` (89). Since `90 > 89`, no change is made.
- Array remains: `{6, 12, 34, 78, 89, 90}`

---

### **Final Sorted Array**: `{6, 12, 34, 78, 89, 90}`

---

### **Complexity Analysis**

- **Time Complexity**:
  - **Best Case**: O(n) — The array is already sorted, and no shifting is needed.
  - **Worst Case**: O(n²) — If the array is sorted in reverse order, we need to shift every element each time.

- **Space Complexity**: O(1) — Insertion Sort is an in-place algorithm, so it uses constant extra space.

---
