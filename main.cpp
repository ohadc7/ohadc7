#include <iostream>
#include <set>
#include "Point.h"
#include "Grid.h"
#include "bfsAlgorithm.h"

using namespace std;

int main() {
    cout << "***** check ex1 - Ohad and Ido: *****" << endl;

    Grid g = Grid(4,4);
    bfsAlgorithm bfs = bfsAlgorithm(g);
    stack<Point> idealPath = bfs.navigate(Point(3,2), Point(1,1));
    while (!idealPath.empty()) {
        Point pointOfIdealPath = idealPath.top();
        idealPath.pop();
        pointOfIdealPath.print();
        cout << endl;
    }


#if 0
    Point p = Point(1, 2);
    p.print();
    cout << endl;
    Point p2 = Point(1, 2);
    cout << (p==p2);
    cout << endl;
    Grid g = Grid(3,2);
    queue<Point> q = g.getNeighbors(p);
    cout << endl;
    cout << endl;
    while(!q.empty()) {
        Point p3 = q.front();
        q.pop();
        p3.print();
        cout << endl;
    }
    cout << endl;
    cout << endl;

    set<Point> points = set<Point>();
    Point p5 = Point(9, 9);
    Point p6 = Point(9, 9);
    points.insert(p5);
    cout << points.count(p6);

    queue<Point> pointsQueue = queue<Point>();
    pointsQueue.push(p2);
    pointsQueue.push(p5);
    Point result = pointsQueue.front();
    result.print();
    result = pointsQueue.front();
    result.print();
#endif
return 0;
}



#if 0
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
#endif