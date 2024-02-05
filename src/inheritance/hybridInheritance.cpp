#include <iostream>
using namespace std;

/*
    Hybrid Inheritance: A type of inheritance that combines different types of inheritance
                        (Single, Multiple, Multilevel, Hierarchical) within a program,
                        creating a complex inheritance structure known as hybrid inheritance.
*/

// Base classes
class Base1 { };
class Base2 { };

// Single Inheritance
class Derived1 : public Base1 { };

// Single Inheritance
class Derived2 : public Base2 { };

// Multiple Inheritance
class Derived3 : public Base1, public Base2 { };

// Multilevel Inheritance
class Derived4 : public Base1 { };
class Derived5 : public Derived4 { };
class Derived6 : public Derived5 { };

// Hierarchical Inheritance
class Derived7 : public Base1 { };
class Derived8 : public Base1 { };

int main()
{
    // Objects to demonstrate each type of inheritance

    // Single Inheritance
    Derived1 object1;
    Derived2 object2;

    // Multiple Inheritance
    Derived3 object3;

    // Multilevel Inheritance
    Derived6 object6;

    // Hierarchical Inheritance
    Derived7 object7;
    Derived8 object8;

    return 0;
}
