# **Lecture Notes: Static Data Members & Static Member Functions in C++**  

## **Introduction to Static Members**  
In C++, **static members** are class-level variables and functions that do not belong to individual objects but to the class itself. This means:  
- Static **data members** share the same value across all objects.  
- Static **member functions** can be called without creating an object of the class.  

---

## **🔹 Static Data Members**  
A **static data member** is a variable that belongs to the class rather than to objects. It is shared among all instances of the class.  

### **✅ Characteristics of Static Data Members:**
✔ Declared inside the class using the `static` keyword.  
✔ Memory is allocated **once**, at program startup.  
✔ Shared among **all** objects of the class.  
✔ Must be **initialized outside** the class.  

### **Example: Static Data Member**
```cpp
#include<iostream>
using namespace std;

class Teacher {
    public:
        string name;  // Instance variable
        int age;      // Instance variable
        static double salary;  // Static data member (shared by all objects)

    // Constructor
    Teacher(string n, int a) { 
        name = n;
        age = a;
    }

    // Function to display details
    void getDetails() {
        cout << "Name: " << name << ", Age: " << age << ", Salary: " << salary << endl;
    }
};

// Initialize static data member outside the class
double Teacher::salary = 99;  

int main() {
    Teacher t1("Raj", 30);  
    Teacher t2("Vraj", 25);

    t1.getDetails();
    t2.getDetails();

    return 0;
}
```
### **📝 Explanation:**
- `salary` is declared **static**, meaning it is shared among all `Teacher` objects.  
- `Teacher::salary = 99;` initializes the static data member.  
- No matter how many objects are created, `salary` remains **shared**.  

---

## **🔹 Static Member Functions**  
A **static member function** is a function that belongs to the class and is **not tied to any object**.  

### **✅ Characteristics of Static Member Functions:**
✔ Declared inside the class using the `static` keyword.  
✔ Can only access **static data members** (not instance variables).  
✔ Can be called using the **class name** (no need to create an object).  

### **Example: Static Member Function**
```cpp
#include<iostream>
using namespace std;

class Teacher {
    public:
        static double salary;  // Static data member

    // Static function to display salary
    static void getDetails() {
        cout << "Salary: " << salary << endl;
    }
};

// Initialize static data member
double Teacher::salary = 99;

int main() {
    // Call static function without an object
    Teacher::getDetails();  

    return 0;
}
```
### **📝 Explanation:**
- `getDetails()` is a **static function**, so it can be called directly using `Teacher::getDetails()`.  
- It can only access **static members** (`salary`).  
- No need to create an object of `Teacher` to call `getDetails()`.  

---

## **Key Differences:**
| Feature              | Static Data Member | Static Member Function |
|----------------------|-------------------|------------------------|
| Memory Allocation   | Stored once in class memory | Does not require an object |
| Access              | Shared among all objects | Can only access static members |
| Call Method         | `ClassName::Variable` | `ClassName::Function()` |
| Object Dependency   | No, belongs to class | No, belongs to class |

---

## **📚 Note:**
- **Static Data Members:** Shared variables that are **declared inside** the class and **initialized outside** the class.  
- **Static Member Functions:** Functions that can access **only static members** and are called using the **class name**.  

---

## **🎯 Real-Life Example:**
Imagine a **school system** where all teachers have a **common base salary**. Instead of storing a separate salary for each teacher, we can use a **static variable** for salary and a **static function** to access it.  

```cpp
class School {
    public:
        static double baseSalary;
    
        static void showSalary() {
            cout << "All teachers have a base salary of: " << baseSalary << endl;
        }
};

double School::baseSalary = 50000;

int main() {
    School::showSalary();  // Calling static function
}
```
Here, `baseSalary` is **shared** by all teachers and can be accessed **without an object**.  

---

## **🔍 Interview Questions**
1️⃣ What is a **static data member** in C++?  
2️⃣ How does a **static member function** differ from a normal function?  
3️⃣ Why do we need to initialize static variables outside the class?  
4️⃣ Can a static function access non-static variables? Why or why not?  

---
