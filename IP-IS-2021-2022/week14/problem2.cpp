#include <iostream>
using namespace std;

struct Point
{
    double x, y;

    void createPoint(double _x, double _y)
    {
        do
        {
            cout << "Enter coordinates for x: ";
            cin >> _x;
        } while (_x < 1 || _x > 100);
        x = _x;

        do
        {
            cout << "Enter coordinates for y: ";
            cin >> _y;
        } while (_y < 1 || _y > 100);
        y = _y;
    }

    void print()
    {
        cout << "Point: (" << x << ',' << y << ")" << endl;
    }
};

bool onLine(const Point &p1, const Point &p2)
{
    return p1.x == p2.x || p1.y == p2.y;
}

double getDistance(const Point &p1, const Point &p2)
{
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

void isRectangle(const Point &p1, const Point &p2, const Point &p3, const Point &p4)
{
    bool rectangle = onLine(p1, p2) && onLine(p3, p4) && onLine(p1, p4) && onLine(p2, p3) && !onLine(p1, p3) && !onLine(p2, p4);

    if (rectangle)
    {
        double top = getDistance(p1, p2);
        double bottom = getDistance(p3, p4);
        double left = getDistance(p1, p4);
        double right = getDistance(p2, p3);

        if (top == bottom && left == right)
        {
            if (top == left)
            {
                cout << "Square" << endl;
            }
            else
            {
                cout << "Rectangle" << endl;
            }
        }
        else
        {
            cout << "Other" << endl;
        }
    }
    cout << "Other" << endl;
}


int main()
{
    
    return 0;
}