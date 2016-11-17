//
//
//

#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(int xCoord, int yCoord): x(xCoord), y(yCoord) {
    //x = xCoord;
    //y = yCoord;
}
/*
Point::Point(Point p) {

}
*/
int Point::getX() {
    return x;
}

int Point::getY() {
    return y;
}

/*
ostream& operator << (ostream os, const Point &point) {
    return os << "(" << point.x << "," << point.y << ")";
};

friend ostream& operator << (ostream& os, const Point &point);
*/

void Point::print() {
    cout << "(" << x << "," << y << ")";
}

bool isAvailable() {
    return true;
}

bool Point::operator==(const Point &p1) const {
    return((x==p1.x)&&(y==p1.y));
}

bool Point::operator<(const Point &p1) const {
    if ((x < p1.x) || ((x == p1.x) && (y < p1.y)))
        return true;
    else
        return false;
}
