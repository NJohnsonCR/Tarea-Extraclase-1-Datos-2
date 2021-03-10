//
// Created by njohnson on 3/2/21.
//
#include "iostream"
#include "Node.h"
#include "../Collector/Collector.h"


using namespace std;


/**
 * @brief The overloaded new method connected with the collector class, creates a new node with a new memory address or reuses one in the collector list.
 * @param size the parameter needed for the overloaded method.
 * @return a void pointer where the memory address is added or a null memory address.
 */
void* Node::operator new(size_t size) {

    void* memoryAddress;
    Collector::getCollectorList()->printCollector();
    memoryAddress = Collector::getCollectorList()->reuseAddress();

    if (memoryAddress == nullptr){
        Node *temp = ::new Node();
        cout << "Node created with a new memory address -> " << static_cast<void*>(temp) << endl;
        return temp;
    }else{
        cout << "Node created reusing memory address -> " << static_cast<void*>(memoryAddress) << endl;
        return memoryAddress;
    }

}
/**
 * @brief The overloaded deleter operator connected with the Collector class, eliminates a node and adds it to the collector class.
 * @param memoryAddress
 */
void Node::operator delete(void *memoryAddress) {
    Collector::getCollectorList()->recycleAddress((Node*) memoryAddress);
    cout << "Node " << static_cast<void*>(memoryAddress) << " eliminated and added to collector " << endl;
    Collector::getCollectorList()->printCollector();
}

int Node::getData() const {return data;}

void Node::setData(int data) {Node::data = data;}

Node *Node::getNext() const {return next;}

void Node::setNext(Node *next) {Node::next = next;}