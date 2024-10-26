#include <iostream>

class Base {
protected:
    int num1; // First number
    int num2; // Second number

public:
    // Constructor to initialize numbers
    Base(int a, int b) : num1(a), num2(b) {}
};

class Derived1 : public Base {
public:
    // Constructor of the first derived class
    Derived1(int a, int b) : Base(a, b) {}

    // Function to display the first number
    void displayFirst() const {
        std::cout << "First number: " << num1 << std::endl;
    }
};

class Derived2 : public Base {
public:
    // Constructor of the second derived class
    Derived2(int a, int b) : Base(a, b) {}

    // Function to display the second number
    void displaySecond() const {
        std::cout << "Second number: " << num2 << std::endl;
    }
};

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    Derived1 derived1(a, b); // Create an object of the first derived class
    Derived2 derived2(a, b); // Create an object of the second derived class

    derived1.displayFirst();  // Call the function to display the first number
    derived2.displaySecond();  // Call the function to display the second number

    return 0;
}
