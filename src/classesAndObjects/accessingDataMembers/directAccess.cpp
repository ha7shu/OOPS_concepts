#include <iostream>
using namespace std;

class Student {
public:
    int x;
};

int main()
{
    // created object of the class.
    Student object;
    // Object accessing public member of class.
    // (direct access of private and protected members is not allowed.)
    object.x = 20;

    cout << "Value of x is " << object.x << endl;
    return 0;
}
