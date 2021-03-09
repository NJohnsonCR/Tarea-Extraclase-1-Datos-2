//
// Created by njohnson on 3/2/21.
//

#include "LinkedList.h"
#include "iostream"

using namespace std;



LinkedList::~LinkedList() {}

/**
 * Method used for adding an element to the end of the list.
 * @param element: Type int object
 */
void LinkedList::addData(int data) {
    size_t size = 2;
    Node *temp = new Node();
    temp->setData(data);
    if (this->head == nullptr) {
        this->head = this->tail = temp;
    } else {
        this->tail->setNext(temp);
        this->tail = temp;
    }
    this->len += 1;
    cout << "Added : " << temp->getData() << " to the list on pos: " << len - 1 << "\n";
    this->printList();
}

void LinkedList::deleteFirst(){
    Node *tmp = this->head;

    if (tmp == nullptr){
        cout << "The list is empty" << endl;
    }
    else{
        this->setHead(this->head->getNext());
        //delete tmp->getNext();
        tmp->setNext(nullptr);
        this->len--;
        cout << "Deleted first node successfully " << endl;
        this->printList();
    }
}

/**
 * Method for showing the list on the console.
 */
void LinkedList::printList() const {
    if (this->head == nullptr) {
        cout << "The list is empty" << endl;
    } else {
        Node *tmp = this->head;
        for (int i = 0; i < (this->len - 1); ++i) {
            cout << tmp->getData() << " -> ";
            tmp = tmp->getNext();
        }
        cout << tmp -> getData() << endl;
    }
}

Node *LinkedList::getHead() const {
    return head;
}

void LinkedList::setHead(Node *head) {
    LinkedList::head = head;
}

Node *LinkedList::getTail() const {
    return tail;
}

void LinkedList::setTail(Node *tail) {
    LinkedList::tail = tail;
}

int LinkedList::getLen() const {
    return len;
}

void LinkedList::setLen(int len) {
    LinkedList::len = len;
}
