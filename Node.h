//
// Created by ido on 17/11/16.
//

#ifndef EX1_NODE_H
#define EX1_NODE_H


class Node {
public:
    virtual bool operator==(const Node &node1) const=0;
    virtual bool operator<(const Node &node1) const=0;
};


#endif //EX1_NODE_H
