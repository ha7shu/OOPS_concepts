#include <iostream>
using namespace std;

/*
   Parameterized Constructor: A constructor that takes parameters during object creation.
     It allows the initialization of object properties with specific values provided during creation.

   The Student class showcases the use of a parameterized constructor that takes two parameters (x and y).
   The main function demonstrates the creation of an object of the Student class by passing values for x and y.
*/

class Student {
public:
    // Constructor with parameters
    Student(int x, int y)
    {
        cout << "Value of x is " << x << endl;
        cout << "Value of y is " << y << endl;
    }
};

int main()
{
    int a, b;

    // Parameters should be passed with the same data type
    Student object(a, b);
    return 0;
}
