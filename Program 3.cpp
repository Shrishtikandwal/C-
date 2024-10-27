#include <iostream>

class ArraySum {
public:
    // Constructor to initialize the array with given size
    ArraySum(int size) : size(size) {
        arr = new int[size];
    }

    // Copy constructor
    ArraySum(const ArraySum& other) : size(other.size) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }
    }

    // Destructor to clean up dynamically allocated memory
    ~ArraySum() {
        delete[] arr;
    }

    // Function to input array elements
    void inputElements() {
        std::cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; ++i) {
            std::cin >> arr[i];
        }
    }

    // Function to calculate and return the sum of positive numbers
    int sumOfPositive() const {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
        return sum;
    }

private:
    int* arr; // Pointer to dynamically allocated array
    int size; // Size of the array
};

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    ArraySum original(size); // Create original object
    original.inputElements(); // Input elements into the original object

    ArraySum copy = original; // Use copy constructor to create a copy

    std::cout << "Sum of positive numbers: " << copy.sumOfPositive() << std::endl;

    return 0;
}
