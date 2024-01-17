#include <iostream>
using namespace std;

/*
   Default Constructor: A constructor that is automatically called when an object is created
    without any arguments. It initializes the object with default values.

   The main function shows the creation of objects using the default constructor and the different
   methods of initializing data members.
*/

class Student {
public:
    // Default constructor
    Student()
    {
        cout << "This is the default constructor of the Student class." << endl;
    }
};

// Using default constructor to initialize data members
class A {
public:
    int a;
    int b;

    // Method 1: Initialize values in the default constructor
    A()
    {
        a = 10;
        b = 20;
        cout << "Values of a are " << a << " and b are " << b << endl;
    }
};

class B {
private:
    int x;
    int y;

public:
    // Method 2: Initialize values using initialization list
    B()
        : x(30)
        , y(40)
    {
        cout << "Values of x are " << x << " and y are " << y << endl;
    }
};

int main()
{
    // Default constructor will be automatically initialized by the compiler when an object is created.
    Student object;

    A objectA;

    B objectB;
    return 0;
}
