**Merge Sort**

### 1. Introduction to Merge Sort
Merge Sort is a **divide and conquer** algorithm that splits an array into smaller subarrays, sorts them, and then merges them back together. It is widely used due to its efficiency and stability.

### 2. Algorithm Steps
1. **Divide**: Split the array into two halves until each subarray contains a single element.
2. **Conquer**: Recursively sort each subarray.
3. **Merge**: Combine the sorted subarrays to form a sorted array.

### 3. Implementation Details
#### **Merge Function**
- Takes two sorted subarrays and merges them into a single sorted array.
- Uses temporary arrays to store values before merging.
- Ensures stable sorting (maintains relative order of equal elements).

#### **Merge Sort Function**
- Recursively divides the array into two halves.
- Calls `merge()` to merge the sorted halves back together.

### 4. Code Explanation
#### **1. Base Case**
```cpp
if (start >= end)
    return;
```
- If the subarray has one or zero elements, it is already sorted.

#### **2. Finding the Middle Index**
```cpp
int mid = start + (end - start) / 2;
```
- This prevents integer overflow when calculating `mid`.

#### **3. Recursively Sorting Both Halves**
```cpp
mergeSort(arr, start, mid);
mergeSort(arr, mid + 1, end);
```
- Each half is sorted separately before merging.

#### **4. Merging the Two Sorted Halves**
```cpp
merge(arr, start, end);
```
- The `merge()` function is responsible for combining sorted halves efficiently.

### 5. Complexity Analysis
| Case         | Time Complexity |
|-------------|----------------|
| Best Case   | O(n log n) |
| Average Case| O(n log n) |
| Worst Case  | O(n log n) |

- **Space Complexity**: O(n) due to temporary arrays.
- **Stable Sorting**: Maintains the order of equal elements.
- **Not In-Place**: Requires extra space for merging.

### 6. Advantages & Disadvantages
#### **Advantages**
✅ Efficient for large datasets.
✅ Performs well for linked lists.
✅ Guarantees O(n log n) time complexity.

#### **Disadvantages**
❌ Uses extra memory (not an in-place sort).
❌ May be slower for small datasets compared to Quick Sort.

### 7. Applications
- Sorting large datasets in external storage.
- Implemented in standard libraries for efficient sorting.
- Used in applications requiring stable sorting (e.g., databases).

### 8. Note:
- Merge Sort is a stable, efficient sorting algorithm.
- It is best suited for large datasets and linked lists.
- The divide-and-conquer strategy ensures **O(n log n)** complexity.
- Uses additional space for merging, making it a **non-in-place** sorting algorithm.
