#include <iostream>
using namespace std;

/*
   Copy constructor= A constructor that creates a new object by copying the values of an existing
    object. It is called when an object is initialized with another object.

   The main function shows the initialization of objects using both the Default Constructor and the
   Copy Constructor, highlighting the concepts of object creation and copying.
*/

class Student {
public:
    // Default Constructor
    Student()
    {
        cout << "Default Constructor initialized successfully" << endl;
    }

    // Copy Constructor
    Student(const Student& other)
    {
        cout << "Copy Constructor initialized successfully" << endl;
    }
};

int main()
{
    // Object Initialization using Default Constructor
    Student object1;

    // Object Initialization using Copy Constructor
    Student object2 = object1;
    // Student object2(object1);

    // Both initialization methods are fine to use
    return 0;
}
