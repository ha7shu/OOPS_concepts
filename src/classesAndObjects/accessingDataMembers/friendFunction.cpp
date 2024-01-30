#include <iostream>
using namespace std;

/*
    A friend function is a function that is not a member of a class
    but is granted access to its private and protected members.
    It is declared using the 'friend' keyword inside the class.
 */

class Student {
    int x;
    int y;

    // Declaration of friend function.
    // It does not have access restrictions, and it takes an argument of an object of the class.
    friend void display(Student& t);

public:
    Student()
    {
        x = 10;
        y = 20;
    }
};

// The friend function takes an object of the class and can access its private members.
void display(Student& t)
{
    cout << "Value of x is " << t.x << endl;
    cout << "Value of y is " << t.y << endl;
}

int main()
{
    // Creating an object of the Student class.
    Student object;

    // The object is passed to the friend function.
    display(object);

    return 0;
}
