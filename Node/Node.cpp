//
// Created by njohnson on 3/2/21.
//
#include "iostream"
#include "Node.h"
#include "../Collector/Collector.h"


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

void* Node::operator new(size_t size) {
    void* memoryAddress;
    Collector::getCollectorList()->printCollector();
    memoryAddress = Collector::getCollectorList()->reuseAddress();

    if (memoryAddress == nullptr){
        Node *temp = ::new Node();
        cout << "Node created with a new memory address: " << static_cast<void*>(temp) << endl;
        return temp;
    }else{
        cout << "Node created reusing memory address: " << static_cast<void*>(memoryAddress) << endl;
        return memoryAddress;
    }
}


void Node::operator delete(void *memoryAddress) {
    Collector::getCollectorList()->recycleAddress((Node*) memoryAddress);
    cout << "\nNode " << static_cast<void*>(memoryAddress) << " eliminated and added to collector " << endl;
}

