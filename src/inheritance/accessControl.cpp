#include <iostream>
using namespace std;

/*
    Inheritance :
    Inheritance is a mechanism in C++ that allows a class (derived or child class)
    to inherit properties and behaviors from another class (base or parent class).
    It promotes code reusability and establishes a relationship between classes.

    Access to data members :
    There are three ways of inheriting a class and data members access depends on it.
    In case of private and protected, derived class objects cannot directly access data members of base class.
    In public, derived class objects can only directly access public data members of base class.
*/

// Base class
class Base {
public:
    int x;

private:
    int y;

protected:
    int z;
};

// Class inheriting publicly from Base
class Derived1 : public Base {
    // x is public
    // y is inaccessible
    // z is protected
};

// Class inheriting privately from Base
class Derived2 : private Base {
    // x is private
    // y is inaccessible
    // z is protected
};

// Class inheriting protectedly from Base
class Derived3 : protected Base {
    // x is protected
    // y is inaccessible
    // z is protected
};

int main()
{
    // Accessing x directly as it is public in Derived1
    Derived1 object1;

    // Members of Base are not directly accessible in Derived2
    Derived2 object2;

    // Members of Base are not directly accessible in Derived3
    Derived3 object3;

    return 0;
}
