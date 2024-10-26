#include <iostream>

class Base {
protected:
    int num1;
    int num2;

public:
    // Constructor to initialize numbers
    Base(int a, int b) : num1(a), num2(b) {}
};

class Derived : public Base {
public:
    // Constructor of derived class that calls base class constructor
    Derived(int a, int b) : Base(a, b) {}

    // Function to calculate and display the product
    void product() const {
        int prod = num1 * num2;
        std::cout << "The product of " << num1 << " and " << num2 << " is: " << prod << std::endl;
    }
};

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    Derived derived(a, b); // Create an object of Derived class
    derived.product();      // Call the product function

    return 0;
}
