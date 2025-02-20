#include<iostream>
using namespace std;

// Base class Animal
class Animal {
public:
    // Virtual function to allow dynamic dispatch
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    // Override the makeSound() method for Dog
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    // Override the makeSound() method for Cat
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    // Base class pointer pointing to derived class objects
    Animal* animal1 = new Dog();  // Dog object
    Animal* animal2 = new Cat();  // Cat object

    // Calls the overridden method based on actual object type
    animal1->makeSound();  // Dog barks
    animal2->makeSound();  // Cat meows

    // Clean up memory
    delete animal1;
    delete animal2;

    return 0;
}
