# **📘 Lecture Notes: Destructor in C++**

## 🔹 **Introduction to Constructors and Destructors**
In **Object-Oriented Programming (OOP)**, constructors and destructors play a crucial role in managing object lifecycle.

- **Constructor**: A special member function that initializes an object when it is created.
- **Destructor**: A special member function that gets called when an object is destroyed.

### **Why Do We Need a Destructor?**
- To **release resources** allocated to an object.
- To **prevent memory leaks** in programs that use **dynamic memory allocation**.
- To **ensure cleanup operations** (e.g., closing files, releasing network connections).

---

## 🔹 **Understanding Constructors**
A **constructor** is a special function that:
1. Has the **same name** as the class.
2. **Does not return** any value.
3. Is called **automatically** when an object is created.

### **Types of Constructors**
| Type               | Description |
|--------------------|------------|
| **Default Constructor** | No parameters, initializes default values. |
| **Parameterized Constructor** | Takes arguments to initialize an object with specific values. |
| **Copy Constructor** | Creates a copy of an existing object. |

📌 **Example of a Default Constructor:**
```cpp
#include<iostream>
using namespace std;

class Teacher {
public:
    Teacher() {   // Default Constructor
        cout << "Constructor Called..." << endl;
    }
};

int main() {
    Teacher t1;  // Constructor is called automatically
}
```
📝 **Key Points:**
- The constructor runs when `t1` is created.
- No parameters are passed.
- The message `"Constructor Called..."` is displayed.

---

## 🔹 **Understanding Destructors**
A **destructor** is a special function that:
1. Has the **same name** as the class but **with a tilde (~) prefix**.
2. **Does not return** any value.
3. **Is called automatically** when an object goes out of scope.
4. Cannot be overloaded.

📌 **Example of a Destructor:**
```cpp
#include<iostream>
using namespace std;

class Teacher {
public:
    Teacher() {   // Constructor
        cout << "Constructor Called..." << endl;
    }

    ~Teacher() {  // Destructor
        cout << "Destructor Called..." << endl;
    }
};

int main() {
    Teacher t1;  // Constructor will run when object is created
}  // Destructor will run automatically when 't1' goes out of scope
```

📝 **Key Points:**
- The constructor is called **when an object is created**.
- The destructor is called **when the object goes out of scope**.
- The destructor **cleans up resources** before the program ends.

---

## 🔹 **Destructor in Action with Multiple Objects**
If we create multiple objects in a program, their **destructors are called in reverse order of their creation**.

📌 **Example with Multiple Objects:**
```cpp
#include<iostream>
using namespace std;

class Teacher {
public:
    Teacher() {
        cout << "Constructor Called..." << endl;
    }

    ~Teacher() {
        cout << "Destructor Called..." << endl;
    }
};

int main() {
    Teacher t1, t2, t3;
}  
```
### 🔍 **Expected Output:**
```
Constructor Called...
Constructor Called...
Constructor Called...
Destructor Called...
Destructor Called...
Destructor Called...
```
📝 **Key Concept:**
- The last created object is **destroyed first** (LIFO order).

---

## 🔹 **Dynamic Memory Allocation and Destructor**
If we allocate memory dynamically using the `new` keyword inside a class, we **must free it** inside the destructor.

📌 **Example: Dynamic Memory Allocation**
```cpp
#include<iostream>
using namespace std;

class Teacher {
public:
    int* ptr;  // Pointer to dynamically allocated memory

    Teacher(int x) {  
        ptr = new int;   // Allocating memory dynamically
        *ptr = x;
        cout << "Constructor Called, Memory Allocated!" << endl;
    }

    ~Teacher() {  
        delete ptr;  // Freeing allocated memory
        cout << "Destructor Called, Memory Released!" << endl;
    }

    void getDetails() {
        cout << "Stored Value: " << *ptr << endl;
    }
};

int main() {
    Teacher t(10);  // Constructor is called
    t.getDetails();  // Display stored value
}  // Destructor will be called automatically
```

### 🔍 **Expected Output:**
```
Constructor Called, Memory Allocated!
Stored Value: 10
Destructor Called, Memory Released!
```

📝 **Key Takeaways:**
- The constructor allocates memory dynamically.
- The destructor ensures **proper memory cleanup**.
- If we don't use a destructor, it may lead to **memory leaks**.

---

## 🔹 **Destructor with an Array of Objects**
When we create an **array of objects**, destructors are called for each object when the array goes out of scope.

📌 **Example: Destructor in Arrays**
```cpp
#include<iostream>
using namespace std;

class Teacher {
public:
    Teacher() {
        cout << "Constructor Called..." << endl;
    }

    ~Teacher() {
        cout << "Destructor Called..." << endl;
    }
};

int main() {
    Teacher arr[3];  // Creating an array of objects
}  // Destructors will be called for each object in the array
```

### 🔍 **Expected Output:**
```
Constructor Called...
Constructor Called...
Constructor Called...
Destructor Called...
Destructor Called...
Destructor Called...
```
📝 **Key Concept:**
- The constructor runs **3 times** (once per object).
- The destructor runs **3 times** in **reverse order**.

---

## 🔹 **Common Mistakes and Best Practices**
| Mistake ❌ | Solution ✅ |
|------------|------------|
| Forgetting to define a destructor when using `new`. | Always free memory using `delete` inside the destructor. |
| Using `delete` on an already deleted pointer. | Set pointers to `nullptr` after deleting them. |
| Forgetting to declare the destructor as `virtual` in a base class (for inheritance). | Use `virtual ~Destructor()` to ensure proper cleanup in derived classes. |

---

## 🔹 **Interview Questions**
1. **What is the purpose of a destructor in C++?**
2. **Can we overload a destructor? Why or why not?**
3. **What happens if we don’t define a destructor in a class that allocates memory dynamically?**
4. **How do destructors behave when inheritance is involved?**
5. **What is the difference between `delete` and `delete[]` in destructors?**

---

## 🔹 **Note:**
- **A constructor** initializes an object **when it is created**.
- **A destructor** cleans up resources **when an object is destroyed**.
- **Destructors are important** for **memory management** and **resource cleanup**.
- **For dynamic memory allocation**, **always free memory** inside the destructor.
- **Destructors are called automatically**, following **LIFO (Last-In-First-Out) order**.

---
