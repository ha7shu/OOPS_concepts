#include <iostream>
using namespace std;
/*
   A nested class is declared and defined inside another class.
   Nested classes have access to the members of the enclosing class.
*/

class OuterClass {
public:
    // This class is accessible only within the scope of OuterClass.
    class NestedClass {
    public:
        // Member function of the nested class
        void display()
        {
            cout << "NestedClass display method" << endl;
        }
    };
    // Function to demonstrate the nested class
    void useNestedClass()
    {
        // Creating an object of the nested class
        NestedClass nestedObj;
        nestedObj.display();
    }
};

int main()
{
    // Creating an object of the outer class
    OuterClass outerObj;
    outerObj.useNestedClass();

    // NestedClass is not accessible here
    return 0;
}
