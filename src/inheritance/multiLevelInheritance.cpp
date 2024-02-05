#include <iostream>
using namespace std;

/*
    Multilevel Inheritance: A type of inheritance where a class inherits from another
                            class, and then another class inherits from the previously
                            derived class, forming a chain.
*/

// Base class
class Base1 {
    // Data members and member functions of Base1
};

// Derived class 1 inheriting from Base1
class Derived1 : public Base1 {
    // Data members and member functions of Derived1
};

// Derived class 2 inheriting from Derived1
class Derived2 : public Derived1 {
    // Data members and member functions of Derived2
};

// Derived class 3 inheriting from Derived2
class Derived3 : public Derived2 {
    // Data members and member functions of Derived3
};

int main()
{
    // Creating objects to showcase multilevel inheritance

    // Object representing the most derived class
    // It can directly access data members of all classes (Base1, Derived1, Derived2)
    Derived3 object3;

    // Object representing the class derived from Derived3
    // It can directly access data members of classes (Base1, Derived1)
    Derived2 object2;

    // Object representing the class derived from Derived2
    // It can directly access data members of class (Base1) only.
    Derived1 object1;

    return 0;
}
