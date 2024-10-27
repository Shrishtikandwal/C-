#include <iostream>

class NaturalNumbers {
public:
    // Default constructor
    NaturalNumbers() : n(0) {}

    // Function to set the value of n
    void setN(int num) {
        n = num;
    }

    // Function to calculate and return the sum of first n natural numbers
    int sum() const {
        return (n * (n + 1)) / 2;
    }

private:
    int n; // To hold the value of n
};

int main() {
    NaturalNumbers numbers; // Create an object of NaturalNumbers

    int n;
    std::cout << "Enter a natural number: ";
    std::cin >> n;

    numbers.setN(n); // Set the value of n
    std::cout << "The sum of the first " << n << " natural numbers is: " << numbers.sum() << std::endl;

    return 0;
}
