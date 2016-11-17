//
// Created by ido on 15/11/16.
//

#ifndef EX1_GRID_H
#define EX1_GRID_H

#include "Point.h"
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Grid {
private:
    int width;
    int height;
    vector<vector<Point>> vectorOfVerticalVectors;
public:
    Grid(int m,int n);
    Grid(const Grid &grid);
    queue<Point> getNeighbors(Point p);
    //void markAsVisited(Point p);
    //bool hasBeenVisited(Point p);


};


#endif //EX1_GRID_H
