#include <iostream>
using namespace std;

/*
   An access modifier determines the visibility or access of a particular variable/function/constructor
   to the other members of the class or instance of the class, i.e., object.
*/

class Student {
    // By default, a class has private access modifier. If no modifier is specified, all data members
    // and member functions will be private.
private:
    // Ensures that data members and member functions remain accessible only to this class

public:
    // Ensures that data members and member functions are accessible everywhere in the program

protected:
    // Ensures that data members and member functions are accessible by inherited/derived classes
};

int main()
{
    return 0;
}
