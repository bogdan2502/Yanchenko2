#include "Point.h"
#include <iostream>
using namespace std;

int Point::_freeID = 0;

Point::Point(const double x, const double y) :

    _x(x), _y(y), _pointID(++_freeID)
{
    cout << "Add " << *this << endl;

    return;
}

Point::~Point()
{
    cout << "Remove " << *this << endl;
    return;
}

Point::Point(const Point& a) :
    _x(a._x), _y(a._y), _pointID(++_freeID)
{
    cout << "Copy " << *this << endl;
    return;
}


const int Point::getID()const { return _pointID; }

double& Point::x() { return _x; }
double& Point::y() { return _y; }

const double& Point::x()const { return _x; }
const double& Point::y()const { return _y; }

bool operator==(const Point& a, const Point& b)
{
    return a.x() == b.x() &&
        a.y() == b.y();
}

Point& operator+=(Point& a, const Point& b)
{
    a.x() = a.x() + b.x();
    a.y() = a.y() + b.y();
    return a;
}

bool operator!=(const Point& a, const Point& b)
{
    return a.x() != b.x() &&
        a.y() != b.y();
}


Point& Point::operator=(const Point& c)
{
    _x = c._x;
    _y = c._y;
    return *this;
}

const Point operator+(const Point& a, const Point& b)
{
    return Point(a.x() + b.x(),
        a.y() + b.y());
}



ostream& operator<<(ostream& ostr, const Point& c)
{
    ostr << "ID:" << c.getID() << " Coord:" << c.x() << "," << c.y();
    return ostr;
}