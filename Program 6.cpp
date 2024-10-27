#include <iostream>

class Base {
protected:
    int num1; // Number declared in the base class

public:
    // Constructor to initialize num1
    Base(int a) : num1(a) {}
};

class Derived1 : public Base {
protected:
    int num2; // Number declared in the first derived class

public:
    // Constructor of the first derived class
    Derived1(int a, int b) : Base(a), num2(b) {}
};

class Derived2 : public Derived1 {
public:
    // Constructor of the second derived class
    Derived2(int a, int b) : Derived1(a, b) {}

    // Function to calculate and display the sum of num1 and num2
    void sum() const {
        int total = num1 + num2;
        std::cout << "The sum of " << num1 << " and " << num2 << " is: " << total << std::endl;
    }
};

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    Derived2 derived(a, b); // Create an object of the second derived class
    derived.sum();           // Call the sum function

    return 0;
}
