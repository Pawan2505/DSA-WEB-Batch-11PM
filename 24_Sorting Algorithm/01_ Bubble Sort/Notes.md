### **Bubble Sort in C++**

---

#### **1. Introduction to Sorting Algorithms**

Sorting is one of the most fundamental operations in computer science and is often used to organize data in a particular order, such as ascending or descending. Sorting algorithms are designed to solve this problem efficiently.

**Bubble Sort** is one of the simplest sorting algorithms. Though not efficient for large datasets, it is often used for educational purposes due to its simplicity.

---

#### **2. What is Bubble Sort?**

**Bubble Sort** is a comparison-based sorting algorithm. It works by repeatedly stepping through the list, comparing adjacent elements, and swapping them if they are in the wrong order. This process continues until no more swaps are required.

The algorithm gets its name from the way smaller elements "bubble up" to the top of the list.

---

#### **3. Topics Covered**

By the end of this note, you should be able to:
1. Understand how the **Bubble Sort** algorithm works.
2. Implement **Bubble Sort** in C++.
3. Analyze the **time complexity** and **space complexity** of the algorithm.
4. Understand the step-by-step breakdown of Bubble Sort with a concrete example.

---

#### **4. Properties of Bubble Sort**

- **Time Complexity**:
  - **Best Case (O(n))**: When the array is already sorted.
  - **Average Case (O(n²))**: In most cases, the algorithm performs poorly on large arrays.
  - **Worst Case (O(n²))**: When the array is sorted in reverse order, the algorithm makes the maximum number of comparisons and swaps.
  
- **Space Complexity**: **O(1)**, since it sorts the array in-place and doesn't require additional memory for another array.
  
- **Stable Sort**: Bubble Sort is a stable algorithm, meaning it preserves the relative order of equal elements.

---

#### **5. How Bubble Sort Works**

Bubble Sort works by comparing each pair of adjacent elements in the array and swapping them if necessary. After each pass through the array, the largest unsorted element "bubbles up" to its correct position. The algorithm continues until no more swaps are needed.

##### **Algorithm Breakdown**:
1. **Outer Loop**: The outer loop iterates through the array. After each pass, the largest unsorted element is placed in its correct position.
2. **Inner Loop**: The inner loop compares adjacent elements. If the elements are in the wrong order, they are swapped.
3. **Termination**: The algorithm terminates when no more swaps are needed, indicating that the array is sorted.

---

#### **6. C++ Implementation of Bubble Sort**

Here is the C++ code for **Bubble Sort**:

```cpp
#include <iostream> 
using namespace std; 

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n)
{
    // Outer loop to control the number of passes
    for (int i = 0; i < n - 1; i++) {

        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // If the current element is greater than the next, swap them
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);  // Swap elements using built-in swap function
            }
        }
    }
}

// Main function to run the program
int main()
{
    int n = 6;  // Size of the array

    // Initializing an unsorted array
    int arr[n] = {5, 6, 2, 10, 7, 4};

    // Output the original unsorted array
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the bubbleSort function to sort the array
    bubbleSort(arr, n);

    // Output the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
```

##### **Code Explanation:**

1. **Function Definition:**
   - `bubbleSort(int arr[], int n)`: This function sorts the array `arr[]` of size `n` using the Bubble Sort algorithm.
   
2. **Outer Loop:**
   - The outer loop runs `n-1` times, ensuring that each element is placed in its correct position.

3. **Inner Loop:**
   - Compares adjacent elements and swaps them if they are in the wrong order. The number of comparisons decreases as the largest elements "bubble" to the end of the array.

4. **Swap Function:**
   - `swap(arr[j], arr[j + 1])`: This built-in function swaps two elements in the array.

5. **Main Function:**
   - Initializes an array `arr[]` with 6 unsorted elements.
   - Prints the original unsorted array.
   - Calls the `bubbleSort()` function to sort the array.
   - Prints the sorted array.

---

#### **7. Pass-by-Pass Breakdown of Bubble Sort**

To better understand the sorting process, let's walk through each **pass** of Bubble Sort with the initial array `{5, 6, 2, 10, 7, 4}`.

---

#### **Initial Array:**
```
{5, 6, 2, 10, 7, 4}
```

---

#### **Pass 1:**
- **Outer Loop (i = 0)**: First pass through the array.

**Comparisons & Swaps in Pass 1:**
1. **Compare 5 and 6**: No swap needed (`5 < 6`).
   - Array remains: `{5, 6, 2, 10, 7, 4}`
   
2. **Compare 6 and 2**: Swap because `6 > 2`.
   - Array becomes: `{5, 2, 6, 10, 7, 4}`

3. **Compare 6 and 10**: No swap needed (`6 < 10`).
   - Array remains: `{5, 2, 6, 10, 7, 4}`

4. **Compare 10 and 7**: Swap because `10 > 7`.
   - Array becomes: `{5, 2, 6, 7, 10, 4}`

5. **Compare 10 and 4**: Swap because `10 > 4`.
   - Array becomes: `{5, 2, 6, 7, 4, 10}`

**End of Pass 1**:
- After the first pass, the largest element (`10`) is in its correct position at the end of the array.
- Array after Pass 1: `{5, 2, 6, 7, 4, 10}`

---

#### **Pass 2:**
- **Outer Loop (i = 1)**: Second pass through the array.

**Comparisons & Swaps in Pass 2:**
1. **Compare 5 and 2**: Swap because `5 > 2`.
   - Array becomes: `{2, 5, 6, 7, 4, 10}`

2. **Compare 5 and 6**: No swap needed (`5 < 6`).
   - Array remains: `{2, 5, 6, 7, 4, 10}`

3. **Compare 6 and 7**: No swap needed (`6 < 7`).
   - Array remains: `{2, 5, 6, 7, 4, 10}`

4. **Compare 7 and 4**: Swap because `7 > 4`.
   - Array becomes: `{2, 5, 6, 4, 7, 10}`

**End of Pass 2**:
- After the second pass, the second largest element (`7`) is in its correct position.
- Array after Pass 2: `{2, 5, 6, 4, 7, 10}`

---

#### **Pass 3:**
- **Outer Loop (i = 2)**: Third pass through the array.

**Comparisons & Swaps in Pass 3:**
1. **Compare 2 and 5**: No swap needed (`2 < 5`).
   - Array remains: `{2, 5, 6, 4, 7, 10}`

2. **Compare 5 and 6**: No swap needed (`5 < 6`).
   - Array remains: `{2, 5, 6, 4, 7, 10}`

3. **Compare 6 and 4**: Swap because `6 > 4`.
   - Array becomes: `{2, 5, 4, 6, 7, 10}`

**End of Pass 3**:
- After the third pass, the third largest element (`6`) is in its correct position.
- Array after Pass 3: `{2, 5, 4, 6, 7, 10}`

---

#### **Pass 4:**
- **Outer Loop (i = 3)**: Fourth pass through the array.

**Comparisons & Swaps in Pass 4:**
1. **Compare 2 and 5**: No swap needed (`2 < 5`).
   - Array remains: `{2, 5, 4, 6, 7, 10}`

2. **Compare 5 and 4**: Swap because `5 > 4`.
   - Array becomes: `{2, 4, 5, 6, 7, 10}`

**End of Pass 4**:
- After the fourth pass, the fourth largest element (`5`) is in its correct position.
- Array after Pass 4: `{2, 4, 5, 6, 7, 10}`

---

#### **Pass 5:**
- **Outer Loop (i = 4)**: Fifth pass through the array.

**Comparisons

 & Swaps in Pass 5:**
1. **Compare 2 and 4**: No swap needed (`2 < 4`).
   - Array remains: `{2, 4, 5, 6, 7, 10}`

**End of Pass 5**:
- After the fifth pass, the fifth largest element (`4`) is in its correct position.
- Array after Pass 5: `{2, 4, 5, 6, 7, 10}`

---

#### **Final Sorted Array:**
```
{2, 4, 5, 6, 7, 10}
```

---

#### 8. Note:

- **Bubble Sort** is a simple comparison-based sorting algorithm.
- It works by repeatedly comparing adjacent elements and swapping them if needed.
- The largest unsorted element bubbles up to the correct position after each pass.
- **Time Complexity**: **O(n²)** in the worst and average cases, but **O(n)** in the best case when the array is already sorted.
- **Space Complexity**: **O(1)**, as it sorts the array in place.

---
