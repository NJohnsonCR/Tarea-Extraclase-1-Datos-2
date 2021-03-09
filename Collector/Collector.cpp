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
    if(this->head!= nullptr){
        Node* aux = this->head;
        this->setHead(head->getNext());
        aux->setNext(nullptr);
        return aux;
    }else{
        return nullptr;
    }
}

void Collector::recycleAddress(Node *node) {
    node->setNext(this->getHead());
    this->setHead(node);

}

Node *Collector::getHead() const {return head;}

void Collector::setHead(Node *head) {Collector::head = head;}

void Collector::printCollector() {
    Node *aux = head;
    if (this->head == nullptr){
        cout << "\nCollector no tiene espacios en memoria disponibles\n\n";
    }else{
        cout << "\nLas direcciones de memoria presentes en Collector son: " << endl;
        while(aux!= nullptr) {
            cout << static_cast<void*>(aux) << "\n";
            aux = aux->getNext();
        }
    }
}




