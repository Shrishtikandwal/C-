#include <iostream>

class SumCalculator {
public:
    // Constructor for integers
    SumCalculator(int a, int b) {
        std::cout << "Sum of integers: " << (a + b) << std::endl;
    }

    // Constructor for floats
    SumCalculator(float a, float b) {
        std::cout << "Sum of floats: " << (a + b) << std::endl;
    }

    // Constructor for characters
    SumCalculator(char a, char b) {
        std::cout << "Sum of characters (ASCII): " << (static_cast<int>(a) + static_cast<int>(b)) << std::endl;
    }
};

int main() {
    int int1, int2;
    float float1, float2;
    char char1, char2;

    std::cout << "Enter two integers: ";
    std::cin >> int1 >> int2;
    SumCalculator sumInt(int1, int2); // Calls the integer constructor

    std::cout << "Enter two floats: ";
    std::cin >> float1 >> float2;
    SumCalculator sumFloat(float1, float2); // Calls the float constructor

    std::cout << "Enter two characters: ";
    std::cin >> char1 >> char2;
    SumCalculator sumChar(char1, char2); // Calls the character constructor

    return 0;
}
