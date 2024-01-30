#include <iostream>
using namespace std;

/*
    'this' pointer is a special pointer that points to the object for which
    a member function is called. It's a keyword that can only be used within
    the scope of a class, particularly within member functions.
 */

class Student {
private:
    int x;

public:
    Student()
    {
        x = 10;
    }

    void display()
    {
        // Accessing class member 'x' using 'this' pointer.
        std::cout << "Value of x: " << this->x << std::endl;
    }
};

int main()
{
    // Creating an object of the Student class.
    Student object;

    // Calling the display member function to showcase the use of 'this' pointer.
    object.display();

    return 0;
}
