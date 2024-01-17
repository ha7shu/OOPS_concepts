#include <iostream>
using namespace std;

/*
   A local class is defined inside a function or a block of code.
   Local classes have local scope, meaning they are only accessible
   within the function or block where they are defined.
*/

void someFunction()
{
    // Definition of a local class named LocalClass
    class LocalClass {
    public:
        // Member function of the local class
        void display()
        {
            cout << "LocalClass display method" << endl;
        }
    };

    // Creating an object of the local class
    LocalClass localObj;
    localObj.display();
}

int main()
{
    // LocalClass is not accessible here
    someFunction();
    return 0;
}
