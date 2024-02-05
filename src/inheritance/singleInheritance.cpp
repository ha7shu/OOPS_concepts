#include <iostream>
using namespace std;

/*
   Single Inheritance: A type of inheritance where a class (derived class) inherits members
                       from only one other class (base class).
*/

// Base class
class Base {
    // Data members and member functions of the base class
};

// Derived class publicly inheriting from Base class
class Derived : public Base {
    // Data members and member functions of the derived class
    // Base class data members are accessible (public and protected) here
};

int main()
{
    // Object of the Derived class, which can access both Derived and Base class members
    Derived object;
    return 0;
}
