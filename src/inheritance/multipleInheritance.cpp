#include <iostream>
using namespace std;

/*
   Multiple Inheritance: A type of inheritance where a class (derived class) inherits
                         members from more than one base class.
*/

// Base class 1
class Base1 {
    // Data members and member functions of Base1
};

// Base class 2
class Base2 {
    // Data members and member functions of Base2
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2 {
    // Data members and member functions of Derived
};

int main()
{
    // Object of the Derived class, inheriting from both Base1 and Base2
    Derived object;
    return 0;
}
