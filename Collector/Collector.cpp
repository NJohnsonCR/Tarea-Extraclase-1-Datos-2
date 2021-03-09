//
// Created by njohnson on 3/2/21.
//

#include "Collector.h"
#include "iostream"

using namespace std;


Collector* Collector::collectorList = NULL;


Collector::Collector() {}

Collector::~Collector() {}

Collector *Collector::getCollectorList() {
    if (!collectorList)
        collectorList = new Collector;
    return collectorList;
}

void *Collector::reuseAddress() {
    Node *tmp = this->head;

    if (tmp == nullptr){
        return nullptr;
    }
    else{
        this->setHead(this->head->getNext());
        tmp->setNext(nullptr);
        this->len--;
        cout << "Deleted first node of collector list successfully " << endl;
        this->printCollector();
        return tmp;
    }

}

void Collector::recycleAddress(Node *node) {
    if (this->head == nullptr) {
        this->head = this->tail = node;
    } else {
        this->tail->setNext(node);
        this->tail = node;
    }
    this->len += 1;
    cout << "Added : " << node->getData() << " to the list on pos: " << len - 1 << "\n";
    this->printCollector();

}

Node *Collector::getHead() const {return head;}

void Collector::setHead(Node *head) {Collector::head = head;}

void Collector::printCollector() {
    if (this->head == nullptr) {
        cout << "The collector does not contain elements" << endl;
    } else {
        Node *tmp = this->head;
        for (int i = 0; i < (this->len - 1); ++i) {
            cout << tmp->getData() << " -> ";
            tmp = tmp->getNext();
        }
        cout << tmp -> getData() << endl;
    }
}

void Collector::setCollectorList(Collector *collectorList) {Collector::collectorList = collectorList;}

Node *Collector::getTail() const {return tail;}

void Collector::setTail(Node *tail) {Collector::tail = tail;}


