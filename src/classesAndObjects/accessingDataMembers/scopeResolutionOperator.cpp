#include <iostream>
using namespace std;

/*
    The scope resolution operator (::) in C++ is used to qualify a name or access
    a member of a class, namespace, or global scope. It allows you to specify the
    scope to which a particular identifier belongs.
 */

class Student {
    int x;

public:
    Student()
    {
        x = 10;
    }
    int getX();
};

// Implementation of the getX member function outside the class using the scope resolution operator.
int Student::getX()
{
    return x;
}

int main()
{
    // Creating an object of the Student class.
    Student object;

    // Accessing the getX member function using the object.
    cout << "Value of x is " << object.getX() << endl;

    return 0;
}
