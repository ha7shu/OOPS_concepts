#include <iostream>
using namespace std;

/*
    A friend class is a class that is granted access to the private and
    protected members of another class.
    Similar to friend functions, it is declared using the 'friend' keyword inside the class.
 */

class Student {
private:
    int x;

protected:
    int y;

public:
    Student()
    {
        x = 10;
        y = 20;
    }

    // Declaration of a friend class.
    friend class friendStudent;
};

class friendStudent {
public:
    // Behaves the same as a friend function.
    // It can access the private and protected members of the Student class.
    void display(Student& t)
    {
        cout << "Value of x is " << t.x << endl;
        cout << "Value of y is " << t.y << endl;
    }
};

int main()
{
    // Creating an object of the Student class.
    Student object;

    // Creating an object of the friendStudent class.
    friendStudent object1;

    // passing Student class object to data member of friendStudent class.
    object1.display(object);

    return 0;
}
