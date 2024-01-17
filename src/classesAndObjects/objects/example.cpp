#include <iostream>
#include <string>
using namespace std;

/*
   Here, we have three classes to showcase different functionalities.
   Class A has a single object.
   Class B manages an array of objects.
   Class C has multiple objects, and each object has a string attribute.
   The main function demonstrates the usage of objects of each class.
*/

class A {
public:
    void display()
    {
        cout << "Class A object." << endl;
    }
};

class B {
private:
    int num;

public:
    void print()
    {
        cout << "Printing from Class B with number: " << num << endl;
    }

    void setNumber(int number)
    {
        num = number;
    }
};

class C {
private:
    string str;

public:
    void show()
    {
        cout << "Printing from Class C with string: " << str << endl;
    }

    void setString(string s)
    {
        str = s;
    }
};

int main()
{
    // Object of Class A
    A objectA;
    objectA.display();
    cout << endl;

    // Array of objects of Class B
    B objectB[10];

    // Initializing and printing values from objects of Class B
    for (int i = 0; i < 10; ++i) {
        objectB[i].setNumber(i + 1);
    }
    for (int i = 0; i < 10; ++i) {
        objectB[i].print();
    }
    cout << endl;

    // Objects of Class C
    C objectC1;
    C objectC2;
    C objectC3;

    // Setting different string values for each object
    objectC1.setString("Object 1 String");
    objectC2.setString("Object 2 String");
    objectC3.setString("Object 3 String");

    // Displaying objects of Class C
    objectC1.show();
    objectC2.show();
    objectC3.show();

    return 0;
}
