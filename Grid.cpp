//
// Created by ido on 15/11/16.
//

#include "Grid.h"

using namespace std;

Grid::Grid(int m, int n) {
    //vectorOfVerticalVectors = vector<vector<Point>>();
    width = m;
    height = n;
    for (int i = 0; i < width; i++) {
        vector<Point> verticalVectorOfPoints = vector<Point>();
        for (int j = 0; j < height; j++) {
            Point p = Point(i, j);
            verticalVectorOfPoints.push_back(p);
        }
        vectorOfVerticalVectors.push_back(verticalVectorOfPoints);
    }
};

Grid::Grid(const Grid &grid) {
    width = grid.width;
    height = grid.height;
    vectorOfVerticalVectors = grid.vectorOfVerticalVectors;
}


queue<Point> Grid::getNeighbors(Point p) {
    int x = p.getX();
    int y = p.getY();

    queue<Point> neighbors = queue<Point>();
    if ((x >= width) || (y >= height))
        return neighbors;
    //in the future, we have to change it to push the points in the grid (and not new points)
    if (x > 0)
        neighbors.push(Point(x - 1, y));
    if (y + 1 < height)
        neighbors.push(Point(x, y + 1));
    if (x + 1 < width)
        neighbors.push(Point(x + 1, y));
    if (y > 0)
        neighbors.push(Point(x, y - 1));
    return neighbors;
}


/*
void Grid::markAsVisited(Point p) {

};
 */

/*
bool Grid::hasBeenVisited(Point p) {

};
*/