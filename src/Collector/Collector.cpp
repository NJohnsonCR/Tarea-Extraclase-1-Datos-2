//
// Created by njohnson on 3/2/21.
//

#include "Collector.h"
#include "iostream"

using namespace std;


Collector* Collector::collectorList = NULL;

/**
 * The constructor for the collector class.
 */
Collector::Collector() {}

/**
 * The deconstructor for the collector class.
 */
Collector::~Collector() {}

/**
 * Method that creates only one instance of the collector list to manage the memory addresses of the other linked lists.
 * @return the Collector instance.
 */
Collector *Collector::getCollectorList() {
    if (!collectorList)
        collectorList = new Collector;
    return collectorList;
}
/**
 * Method that reuses a memory address stored in the collector list and deletes it, then assigns it to a node created on the linked list.
 * @return the node pointer it the list is not empty or the null pointer if its empty.
 */
void *Collector::reuseAddress() {
    if(this->head!= nullptr){
        Node* tmp = this->head;
        this->setHead(head->getNext());
        tmp->setNext(nullptr);
        len--;
        return tmp;
    }else{
        return nullptr;
    }
}

/**
 * Method that recycles a memory address created from a node in the linked list and adds it at the end of the collector list.
 * @param node the pointer that gets added to the collector list
 */
void Collector::recycleAddress(Node *node) {
    if (this->head == nullptr) {
        this->head = this->tail = node;
    } else {
        this->tail->setNext(node);
        this->tail = node;
    }
    this->len += 1;


}

/**
 * Getter for the head of the collector list.
 * @return returns the head of the list.
 */
Node *Collector::getHead() const {return head;}

/**
 * Setter for the head of the list.
 * @param head the node pointer
 */
void Collector::setHead(Node *head) {Collector::head = head;}

/**
 * Method that prints the collector list.
 */
void Collector::printCollector() {
    if (this->head == nullptr) {
        cout << "Collector List: []" << endl;
    } else {
        Node *tmp = this->head;
        cout << "Collector List: [";
        for (int i = 0; i < (this->len - 1); ++i) {
            cout << static_cast<void*>(tmp) << " -> ";
            tmp = tmp->getNext();
        }
        cout << static_cast<void*>(tmp) << "] \n\n" << endl;
    }
}

int Collector::getLen() const {
    return len;
}

void Collector::setLen(int len) {
    Collector::len = len;
}

Node *Collector::getTail() const {
    return tail;
}

void Collector::setTail(Node *tail) {
    Collector::tail = tail;
}




