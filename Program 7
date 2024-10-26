#include <iostream>

class Base1 {
protected:
    int num1; // Number declared in the first base class

public:
    // Constructor to initialize num1
    Base1(int a) : num1(a) {}
};

class Base2 {
protected:
    int num2; // Number declared in the second base class

public:
    // Constructor to initialize num2
    Base2(int b) : num2(b) {}
};

class Derived : public Base1, public Base2 {
public:
    // Constructor of the derived class
    Derived(int a, int b) : Base1(a), Base2(b) {}

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

    Derived derived(a, b); // Create an object of the derived class
    derived.sum();          // Call the sum function

    return 0;
}
