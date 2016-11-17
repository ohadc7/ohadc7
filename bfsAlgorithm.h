//
// Created by ido on 15/11/16.
//

#ifndef EX1_BFS_H
#define EX1_BFS_H

using  namespace std;

#include <queue>
#include <set>
#include <stack>
#include "Point.h"
#include "Grid.h"

/*
struct Node {
    Point bfsTreeNode;
    Point parent;
};
 */

class bfsAlgorithm {
private:
    Grid grid = Grid(1,1);
    set<Point> visitedNodes;
public:
    bfsAlgorithm(const Grid &theGrid);
    stack<Point> navigate(Point start, Point end);
};


#endif //EX1_BFS_H
