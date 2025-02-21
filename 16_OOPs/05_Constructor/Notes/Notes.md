### **Lecture Notes: Copy Constructor and Deep Copy Constructor in C++**

#### **Introduction**

In object-oriented programming, copying objects correctly is crucial. In C++, the **copy constructor** is used to create a new object as a copy of an existing object. Understanding the difference between **shallow copy** and **deep copy** is important, especially when objects contain dynamic memory allocation.

---

### **1. What is a Copy Constructor?**

A **copy constructor** is a special constructor in C++ that initializes a new object as a copy of an existing object.

#### **Syntax:**

```cpp
ClassName(const ClassName &other);
```

- `ClassName` is the name of the class.
- `other` is a reference to the existing object from which the new object will be created.

---

### **2. Default Behavior: Shallow Copy**

When the copy constructor is not explicitly defined, C++ provides a **default copy constructor**. This performs a **shallow copy**, meaning that it copies the values of data members directly. 

For objects containing pointers or dynamically allocated memory, this shallow copy can be problematic because both objects will point to the same memory location, leading to unexpected behavior.

#### **Example: Default Copy Constructor (Shallow Copy)**

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    int age;
    string* name;
    
    // Parameterized constructor
    Student(int a, string n) {
        age = a;
        name = new string(n); // Dynamically allocate memory for name
    }
    
    // Default copy constructor (shallow copy)
    Student(const Student &s) {
        age = s.age; // Copy value of age
        name = s.name; // Shallow copy of pointer (both point to the same memory)
    }

    // Destructor
    ~Student() {
        delete name; // Free the memory
    }

    void display() {
        cout << "Name: " << *name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1(20, "Rajesh"); // Create object with name Rajesh
    Student s2 = s1; // Calls the default copy constructor
    
    s1.display(); // Name: Rajesh, Age: 20
    s2.display(); // Name: Rajesh, Age: 20

    // Changing s2's name (since both are pointing to the same memory)
    *s2.name = "Vikram";

    s1.display(); // Name: Vikram, Age: 20 (name changed due to shallow copy)
    s2.display(); // Name: Vikram, Age: 20

    return 0;
}
```

#### **Problem with Shallow Copy:**
- Both `s1` and `s2` point to the same memory for the `name` attribute.
- If one object is deleted, the other may be left with invalid data, causing undefined behavior when trying to access that memory.

---

### **3. What is a Deep Copy Constructor?**

A **deep copy constructor** ensures that when an object is copied, all dynamically allocated memory is properly copied as well. This prevents both objects from sharing the same memory location.

In the case of pointers, the deep copy constructor creates a new memory location for the copied object’s pointer and copies the content from the original object to the new memory.

#### **Example: Deep Copy Constructor**

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    int age;
    string* name;
    
    // Parameterized constructor
    Student(int a, string n) {
        age = a;
        name = new string(n); // Dynamically allocate memory for name
    }
    
    // Deep copy constructor
    Student(const Student &s) {
        age = s.age;
        name = new string(*s.name); // Allocate new memory and copy the content
    }

    // Destructor
    ~Student() {
        delete name; // Free the dynamically allocated memory
    }

    void display() {
        cout << "Name: " << *name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1(20, "Rajesh"); // Create object with name Rajesh
    Student s2 = s1; // Calls the deep copy constructor
    
    s1.display(); // Name: Rajesh, Age: 20
    s2.display(); // Name: Rajesh, Age: 20

    // Changing s2's name (s1 should remain unchanged)
    *s2.name = "Vikram";

    s1.display(); // Name: Rajesh, Age: 20 (s1 remains unchanged)
    s2.display(); // Name: Vikram, Age: 20

    return 0;
}
```

#### **Advantages of Deep Copy:**
- Both `s1` and `s2` now have their own memory for `name`, so modifying one object does not affect the other.
- Avoids issues like double-deletion or memory corruption.
- It's a safer and more robust approach when dealing with dynamic memory.

---

### **4. Shallow Copy vs Deep Copy:**

| **Aspect**             | **Shallow Copy**                      | **Deep Copy**                          |
|------------------------|---------------------------------------|----------------------------------------|
| **Copy of Pointers**    | Copies the pointer, not the data.     | Copies the actual data, not the pointer.|
| **Memory Allocation**   | Both objects share the same memory.   | Each object gets its own separate memory.|
| **Use Cases**           | Works for simple data types.          | Required for objects with dynamic memory.|
| **Risk**                | Can lead to memory issues (double delete, corrupted data). | No such risks. Safer in complex programs. |

---
