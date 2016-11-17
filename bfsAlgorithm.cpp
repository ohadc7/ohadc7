//
// Created by ido on 15/11/16.
//

#include <map>
#include "bfsAlgorithm.h"

bfsAlgorithm::bfsAlgorithm(const Grid &theGrid) {
    grid = Grid(theGrid);
}

stack<Node> bfsAlgorithm::navigate(Node start, Node end) {
    stack<Node> path = stack<Node>();
    bool pathHasBeenFound = false;
    queue<Node> NodesToLookForNeighbors = queue<Node>();
    set<Node> visitedNodes = set<Node>();
    map<Node, Node> parentOfNode = map<Node, Node>();
    map<Node, int> distanceOfNode = map<Node, int>();

    //we have to delete the next line:
    parentOfNode.insert(pair<Node,Node>(start, start));
    distanceOfNode.insert(pair<Node,int>(start, 0));
    NodesToLookForNeighbors.push(start);

    while(!NodesToLookForNeighbors.empty()) {
        Node current = NodesToLookForNeighbors.front();
        NodesToLookForNeighbors.pop();
        int currentDistance = distanceOfNode.at(current);

        queue<Node> currentNeighbors = grid.getNeighbors(current);
        while (!currentNeighbors.empty()) {
            Node neighbor = currentNeighbors.front();
            currentNeighbors.pop();
            bool theNeighborHasBeenVisited = (visitedNodes.find(neighbor) != visitedNodes.end());
            if (!theNeighborHasBeenVisited) {
                visitedNodes.insert(neighbor);
                parentOfNode.insert(pair<Node,Node>(neighbor, current));
                distanceOfNode.insert(pair<Node,int>(neighbor, currentDistance + 1));
                NodesToLookForNeighbors.push(neighbor);
            }

            if (neighbor == end) {
                pathHasBeenFound = true;
                path.push(neighbor);
                Node previousNodeOfPath = neighbor;
                do {
                    previousNodeOfPath = parentOfNode.at(previousNodeOfPath);
                    path.push(previousNodeOfPath);
                } while (!(previousNodeOfPath == start));
                break;
            }
        }
        if (pathHasBeenFound)
            break;
    }
    return path;

}


