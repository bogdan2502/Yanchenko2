#include "Segment.h"

#include <iostream>


using namespace std;

int main() {
    Point x(0, 1);
    Point y(1, 10);
    Point z(-5, 5);



    Segment s, s1(x, y), s2(y, x), s3(z, y), s4(x, z);
    cout << s << endl;

    cout << endl;

    cout << "Length = " << s.length() << endl;
    cout << endl;
    cout << y << endl;
    cout << "Distance = " << s.distance(y) << endl;
    cout << endl;
}
