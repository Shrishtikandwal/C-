#include <iostream>

class SwapNumbers {
public:
    // Parameterized constructor
    SwapNumbers(int a, int b) : num1(a), num2(b) {}

    // Function to swap the numbers
    void swap() {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Function to display the numbers
    void display() const {
        std::cout << "First number: " << num1 << std::endl;
        std::cout << "Second number: " << num2 << std::endl;
    }

private:
    int num1; // First number
    int num2; // Second number
};

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    SwapNumbers swapNumbers(a, b); // Create an object with the parameterized constructor

    std::cout << "Before swapping:" << std::endl;
    swapNumbers.display(); // Display original numbers

    swapNumbers.swap(); // Swap the numbers

    std::cout << "After swapping:" << std::endl;
    swapNumbers.display(); // Display swapped numbers

    return 0;
}
