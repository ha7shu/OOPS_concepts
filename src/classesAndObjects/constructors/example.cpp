#include <iostream>
#include <string>
using namespace std;

/*
   Here, we have a class named Student with a Default Constructor, Parameterized Constructor,
   Copy Constructor, Display Function, and Destructor. The main function demonstrates the
   initialization of objects using these constructors.
*/

class Student {
public:
    string name;
    int roll;
    int age;

    // Default Constructor
    Student()
        : name("")
        , roll(0)
        , age(0)
    {
        cout << "Default Constructor initialized successfully" << endl;
    }

    // Parameterized Constructor with Initialization List
    Student(string n, int r, int a)
        : name(n)
        , roll(r)
        , age(a)
    {
        cout << endl
             << "Parameterized Constructor initialized successfully" << endl;
    }

    // Copy Constructor with Initialization List and const parameter
    Student(const Student& t)
        : name(t.name)
        , roll(t.roll)
        , age(t.age)
    {
        cout << endl
             << "Copy Constructor initialized successfully" << endl;
    }

    // Display Function
    void display() const
    {
        cout << "Name of Student is : " << name << endl;
        cout << "Roll number is : " << roll << endl;
        cout << "Age is : " << age << endl;
    }

    // Destructor
    // in this program , you will find three messages printed by destructor as
    // every time a object goes out of scope it is called and main function have three objects.
    ~Student()
    {
        cout << "Destructor initialized successfully" << endl;
    }
};

int main()
{
    // Object Initialization using Default Constructor
    Student object1;
    object1.display();

    // Object Initialization using Parameterized Constructor
    Student object2("John", 1001, 19);
    object2.display();

    // Object Initialization using Copy Constructor
    Student object3 = object2;
    object3.display();

    return 0;
}
