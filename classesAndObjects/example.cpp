#include <iostream>
using namespace std;
/*
    Here, we have two classes to show how access modifiers work. The first class uses functions
    to handle its data, and the second one allows direct access to its data.
    This helps us see how access rules control what parts of a class can be seen
    or modified. Take a look to better understand how access modifiers function.
*/
class MemberFunction {
private:
    int x;

public:
    int y;

protected:
    int z;

public:
    void getX(int value)
    {
        x = value;
    }

    void getZ(int value)
    {
        z = value;
    }

    void display()
    {
        cout << "Accessing data memebrs using member function " << endl
             << " x: " << x << endl
             << " y: " << y << endl
             << " z: " << z << endl;
    }
};

class ObjectAccess {
public:
    int a;

private:
    int b;

protected:
    int c;

public:
    void display()
    {
        cout << "Accessing data members directly using object " << endl
             << " a: " << a << endl
             // Below code will provide garbage value or zero depending on compiler
             // as no value is passed to 'b' and 'c' by object.
             << " b: " << b << endl
             << " c: " << c << endl;
    }
};

int main()
{
    MemberFunction obj1;
    obj1.getX(10);
    obj1.y = 20;
    obj1.getZ(30);
    obj1.display();

    ObjectAccess obj2;
    obj2.a = 40;
    // Private member and protected member cannot be accessed directly by object outside the class
    /*
       Uncomment the code and if you attempt to use private and protected data members of a class through direct
       object access, you will encounter an error.
       obj2.c = 60;
       obj2.b = 50;
    */
    obj2.display();

    return 0;
}
