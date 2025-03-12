# Lecture Notes: C++ STL Stack

## Introduction to Stack in C++

In C++, a stack is a container adaptor, which is part of the Standard Template Library (STL). It follows the **LIFO (Last In First Out)** principle, meaning the last element pushed onto the stack will be the first one to be popped off. This makes it similar to a stack of plates, where you add and remove plates from the top of the stack.

### Key Characteristics of Stack:

1. **LIFO (Last In First Out):** The last element inserted is the first one removed.
2. **Push and Pop Operations:** You can add (push) elements and remove (pop) elements from the stack.
3. **Top Access:** You can only access the top element of the stack.
4. **Size and Empty Check:** You can check if the stack is empty and the number of elements in the stack.

---

### Stack Operations

- **push(value):** Adds an element to the top of the stack.
- **pop():** Removes the top element of the stack.
- **top():** Returns the top element of the stack without removing it.
- **size():** Returns the number of elements in the stack.
- **empty():** Checks if the stack is empty (returns `true` if empty, `false` otherwise).
- **swap(stack):** Swaps the contents of two stacks.

---

### Example 1: Basic Stack Operations

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;  // Creating a stack of integers

    // Push elements onto the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);

    // Accessing top element
    cout << "Top Element in stack : " << st.top() << endl;

    // Accessing size of the stack
    cout << "Size of stack : " << st.size() << endl;

    // Checking if stack is empty
    cout << "stack is empty : " << (st.empty() ? "Yes" : "No") << endl;

    // Display all elements in the stack
    cout << "Elements in stack: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();  // Pop the top element
    }
    cout << endl;

    return 0;
}
```

### Output:

```
Top Element in stack : 80
Size of stack : 8
stack is empty : No
Elements in stack: 80 70 60 50 40 30 20 10
```

In the above example:

- We push multiple elements into the stack.
- We access the top element using `st.top()`.
- We check the size of the stack using `st.size()`.
- We check whether the stack is empty using `st.empty()`.
- Finally, we print all the elements in the stack by popping them one by one until the stack is empty.

---

### Example 2: Swapping Two Stacks

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st1, st2;

    // Push elements onto stack 1
    st1.push(10);
    st1.push(20);
    st1.push(30);
    st1.push(40);
    st1.push(50);
    st1.push(60);
    st1.push(70);
    st1.push(80);

    // Push elements onto stack 2
    st2.push(1000);
    st2.push(2000);
    st2.push(3000);

    // Accessing and displaying elements in stack 1
    cout << "Top Element in stack 1 : " << st1.top() << endl;
    cout << "Size of stack 1 : " << st1.size() << endl;
    cout << "stack 1 is empty : " << (st1.empty() ? "Yes" : "No") << endl;

    // Swap the contents of stack 1 and stack 2
    st1.swap(st2);

    // Display all elements in stack 1
    cout << "First stack after swap: ";
    while (!st1.empty()) {
        cout << st1.top() << " ";
        st1.pop();
    }
    cout << endl;

    // Display all elements in stack 2
    cout << "Second stack after swap: ";
    while (!st2.empty()) {
        cout << st2.top() << " ";
        st2.pop();
    }
    cout << endl;

    return 0;
}
```

### Output:

```
Top Element in stack 1 : 80
Size of stack 1 : 8
stack 1 is empty : No
First stack after swap: 3000 2000 1000
Second stack after swap: 80 70 60 50 40 30 20 10
```

In the above example:

- We have two stacks `st1` and `st2`.
- After pushing elements to both stacks, we display the top element, size, and whether the stack is empty.
- We use the `swap()` function to swap the contents of `st1` and `st2`.
- Finally, we print the elements of both stacks after the swap, demonstrating how the contents of the stacks were exchanged.

---

### Common Stack Operations in C++

- **Push Elements:** Use `st.push(value)` to add elements.
- **Pop Elements:** Use `st.pop()` to remove the top element.
- **Top Element:** Use `st.top()` to access the top element without removing it.
- **Size of Stack:** Use `st.size()` to get the number of elements in the stack.
- **Check if Empty:** Use `st.empty()` to check if the stack is empty (returns a boolean).

---

### Note:

- A stack in C++ follows the **LIFO** principle.
- The **push()**, **pop()**, **top()**, **size()**, **empty()**, and **swap()** methods are used for manipulating stacks.
- **push()** adds elements, **pop()** removes elements, **top()** returns the top element, **size()** gives the number of elements, **empty()** checks if the stack is empty, and **swap()** swaps two stacks.

---
