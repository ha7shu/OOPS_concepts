#include <iostream>
using namespace std;

/*
   Here, we have a class named Student with a constructor and a destructor.
   The main function demonstrates the automatic invocation of the destructor when the object goes out of scope.
*/

class Student {
public:
    // Constructor
    Student()
    {
        cout << "Constructor called" << endl;
    }

    // Destructor is used to deallocate the memory allocated when initialising the object.
    // It is denoted with ~(tilde) sign in front of class name
    // it is also called automatically by compiler ONLY if it defined in the class.
    ~Student()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    // Creating an object of class Student
    Student object;

    // Destructor will be automatically called when the object goes out of scope
    return 0;
}
