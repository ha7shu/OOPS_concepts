#include <iostream>
using namespace std;

/*
    Hierarchical Inheritance: A type of inheritance where multiple classes inherit from a single base class.
*/

// Base class
class Base {
    // Data members and member functions of Base
};

// Derived class 1 inheriting from Base
class Derived1 : public Base {
    // Data members and member functions of Derived1
};

// Derived class 2 inheriting from Base
class Derived2 : public Base {
    // Data members and member functions of Derived2
};

int main()
{
    // Creating objects to showcase hierarchical inheritance
    // both classes inherits same properties from base class

    // Object of a class derived from the common base class
    Derived1 object1;

    // Object of another class also derived from the same base class
    Derived2 object2;

    return 0;
}
