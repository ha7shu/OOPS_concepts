#include <iostream>
using namespace std;

/*
        Function overriding occurs when a derived class provides a specific implementation for
        a function that is already defined in its base class. It enables a derived class
        to provide a specialized implementation of a function inherited from its base class.
*/

// Base class representing a generic shape
class shape {
public:
    // function for calculating the area
    double calculateArea()
    {
        return 0.0;
    }
};

class rectangle : public shape {
private:
    double length;
    double width;

public:
    rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    // calculateArea function for rectangles
    double calculateArea()
    {
        return length * width;
    }
};

// Derived class representing a triangle, inheriting from the base class 'shape'
class triangle : public shape {
private:
    double base;
    double height;

public:
    triangle(double b, double h)
    {
        base = b;
        height = h;
    }

    // calculateArea function for triangles
    double calculateArea()
    {
        return 0.5 * base * height;
    }
};

int main()
{
    // Create instances of shapes and calculate their areas
    rectangle rectangleObject(5.0, 3.0);
    triangle triangleObject(4.0, 6.0);

    // Calculate and display the areas
    cout << "Area of Rectangle: " << rectangleObject.calculateArea() << endl;
    cout << "Area of Triangle: " << triangleObject.calculateArea() << endl;

    return 0;
}
