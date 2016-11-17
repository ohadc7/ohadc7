//
//
//

#ifndef EX1_POINT_H
#define EX1_POINT_H


#include "Node.h"

class Point: public Node {
private:
    int x;
    int y;
public:
    Point(int x, int y);
//    Point(Point p);
    int getX();
    int getY();
    void print();
    bool operator==(const Point &p1) const;
    bool operator<(const Point &p1) const;
};


#endif //EX1_POINT_H
