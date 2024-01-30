#include <iostream>
using namespace std;

class Student {
private:
    int x;

public:
    Student()
    {
        x = 10;
    }
    // this function return the value of variable "x" and it has public access.
    int getX()
    {
        return x;
    }
};

int main()
{
    // created object of class
    Student object;
    // object accessing public member of class which returns the value of private member.
    object.getX();
    cout << "Value of x is " << object.getX() << endl;
    return 0;
}
