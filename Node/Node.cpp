//
// Created by njohnson on 3/2/21.
//
#include "iostream"
#include "Node.h"

using namespace std;


int Node::getData() const {
    return data;
}

void Node::setData(int data) {
    Node::data = data;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}
