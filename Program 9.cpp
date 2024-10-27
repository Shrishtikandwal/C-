#include <iostream>

// Base class A
class A {
protected:
    int valueA;

public:
    A(int a) : valueA(a) {} // Constructor to initialize valueA

    void displayA() const {
        std::cout << "Value in class A: " << valueA << std::endl;
    }
};

// Derived class B
class B : public A {
protected:
    int valueB;

public:
    B(int a, int b) : A(a), valueB(b) {} // Constructor to initialize valueB

    void displayB() const {
        std::cout << "Value in class B: " << valueB << std::endl;
    }
};

// Derived class C
class C : public A {
protected:
    int valueC;

public:
    C(int a, int c) : A(a), valueC(c) {} // Constructor to initialize valueC

    void displayC() const {
        std::cout << "Value in class C: " << valueC << std::endl;
    }
};

// Derived class D
class D : public A {
protected:
    int valueD;

public:
    D(int a, int d) : A(a), valueD(d) {} // Constructor to initialize valueD

    void displayD() const {
        std::cout << "Value in class D: " << valueD << std::endl;
    }
};

// Derived class E
class E : public B {
protected:
    int valueE;

public:
    E(int a, int b, int e) : B(a, b), valueE(e) {} // Constructor to initialize valueE

    void displayE() const {
        std::cout << "Value in class E: " << valueE << std::endl;
    }
};

int main() {
    // Create objects of classes
    E objE(10, 20, 30);
    C objC(10, 40);
    D objD(10, 50);

    // Display values
    objE.displayA(); // From class A
    objE.displayB(); // From class B
    objE.displayE(); // From class E

    objC.displayA(); // From class A
    objC.displayC(); // From class C

    objD.displayA(); // From class A
    objD.displayD(); // From class D

    return 0;
}
