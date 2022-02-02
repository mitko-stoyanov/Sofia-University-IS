#include <iostream>
using namespace std;

struct Rectangle
{
    double width, height;

    void createRectangle(double _width, double _height)
    {
        width = _width;
        height = _height;
    }

    void print()
    {
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
    }

    double radius()
    {
        return sqrt(height * height + width * width) / 2;
    }

    double perimeter()
    {
        return 2 * height + 2 * width;
    }

    double area()
    {
        return width * height;
    }
};

int main()
{
    
    return 0;
}