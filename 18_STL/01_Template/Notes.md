## **Lecture Notes: Understanding Templates in C++**

### **1. Introduction to Templates**

In C++, a **template** is a feature that allows us to write generic or reusable code. Instead of writing separate functions or classes for different data types, we can use templates to work with any data type. Templates allow us to write flexible, efficient, and reusable code.

### **2. Types of Templates in C++**

There are two main types of templates in C++:
- **Function Templates**
- **Class Templates**

Let's look at both in detail.

---

### **3. Function Templates**

A **function template** is a blueprint for creating functions that can operate on different data types. It allows us to define a function without specifying the data type.

#### **Syntax of Function Template**

```cpp
template <typename T>    // 'typename' tells the compiler that T will be a data type
T function_name(T parameter1, T parameter2) {
    // Function body
}
```

Here:
- `typename T` means that `T` is a placeholder for any data type (like `int`, `float`, `double`, etc.)
- `T function_name()` is the function signature where `T` is used as the data type for the parameters and return value.

#### **Example: Function Template for Addition**

```cpp
#include <iostream>
using namespace std;

template <typename T>   // Template for any data type
T addition(T x, T y) {
    return x + y;  // Adds x and y of any data type
}

int main() {
    cout << addition(10, 20) << endl;      // Uses integers
    cout << addition(10.5, 20.8) << endl;  // Uses floating point numbers
}
```

**Output:**
```
30
31.3
```

---

### **4. Multiple Type Function Templates**

You can use multiple types in a single function template. This allows you to define a function that can accept and process more than one type.

#### **Example: Function Template with Multiple Data Types**

```cpp
#include <iostream>
using namespace std;

template <typename T1, typename T2, typename T3>
void display(T1 x, T2 name, T3 value) {
    cout << "Integer: " << x << endl;
    cout << "String: " << name << endl;
    cout << "Double: " << value << endl;
}

int main() {
    display(10, "Pawan", 25.5);  // Different data types in one function
}
```

**Output:**
```
Integer: 10
String: Pawan
Double: 25.5
```

---

### **5. Class Templates**

A **class template** is similar to a function template. It allows you to create a class that can handle any data type. This is helpful when you want to create generic data structures like arrays, stacks, or linked lists.

#### **Syntax of Class Template**

```cpp
template <typename T>  // 'T' can be any data type
class ClassName {
    T data;  // Member variable of type T
public:
    void setData(T value) {
        data = value;  // Set the value
    }
    T getData() {
        return data;  // Return the value
    }
};
```

#### **Example: Class Template for a Student**

```cpp
#include <iostream>
using namespace std;

template <typename T1, typename T2>  // Template for name (T1) and age (T2)
class Student {
    T1 name;
    T2 age;

public:
    Student(T1 n, T2 a) {  // Constructor to initialize data
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Creating a Student object with string for name and int for age
    Student<string, int> student1("Pawan", 25);
    student1.display();
}
```

**Output:**
```
Name: Pawan
Age: 25
```

---

### **6. Template Specialization**

Sometimes, you may want a template to behave differently for a specific data type. **Template specialization** allows you to provide a custom implementation for a specific data type.

#### **Syntax for Template Specialization**

```cpp
template <typename T>
class ClassName {
    // General template code
};

template <>
class ClassName<int> {  // Specialization for int type
    // Custom code for int type
};
```

#### **Example: Template Specialization for `int` Type**

```cpp
#include <iostream>
using namespace std;

template <typename T>
class Display {
public:
    void show() {
        cout << "This is a generic template!" << endl;
    }
};

// Specialization for int type
template <>
class Display<int> {
public:
    void show() {
        cout << "This is an integer template!" << endl;
    }
};

int main() {
    Display<double> d1;  // General template
    d1.show();            // Output: This is a generic template!

    Display<int> d2;     // Specialized template for int
    d2.show();            // Output: This is an integer template!
}
```

**Output:**
```
This is a generic template!
This is an integer template!
```

---

### **7. Benefits of Using Templates**

- **Code Reusability**: You can write a single function or class that works for different data types, reducing code duplication.
- **Type Safety**: Templates ensure that the correct type is used during function calls or object creation.
- **Efficiency**: Templates are evaluated at compile-time, making them faster than using other approaches like `void*` or `generic` types in other languages.

---

### **8. Common Mistakes with Templates**

- **Missing Template Argument**: Always provide the correct types when using templates.
- **Incorrect Template Specialization**: Ensure you specialize only for a specific data type, not the general case.

---

### **9. Note:**

- **Templates** are used to write **generic code** that works with different data types.
- **Function Templates** allow you to define functions for any type.
- **Class Templates** let you create classes that handle various types.
- Template **specialization** allows you to define custom behavior for specific data types.
  
By using templates, you can make your C++ code more flexible, reusable, and efficient.

---
