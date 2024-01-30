#include <iostream>
using namespace std;

class Student {
public:
    int x;

    // Constructor initializes the value of x.
    Student()
    {
        x = 10;
    }
};

int main()
{
    // Creating an object of the Student class.
    Student object;

    // Declaring a pointer to a Student object.
    Student* ptr;

    // Assigning the address of the object to the pointer.
    ptr = &object;

    // Accessing the member variable x using the pointer.
    cout << "Value of x is " << ptr->x << endl;

    return 0;
}
