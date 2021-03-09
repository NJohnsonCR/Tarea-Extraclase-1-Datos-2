//
// Created by njohnson on 3/2/21.
//

#include "Collector.h"
#include "iostream"

using namespace std;

Collector* Collector::collectorList = NULL;

Collector::Collector() {}

Collector::~Collector() {}

void *Collector::reuseAddress() {
    if (this->head != nullptr){
        Node* tmp = this->head;
        this->setHead(this->head->getNext());
        tmp->setNext(nullptr);
        return tmp;
    } else{
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


