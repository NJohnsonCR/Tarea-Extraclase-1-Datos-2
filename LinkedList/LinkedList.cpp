//
// Created by njohnson on 3/2/21.
//

#include "LinkedList.h"
#include "iostream"

using namespace std;

/**
 * Method used for adding an element to the end of the list.
 * @param element: Type int object
 */
void LinkedList::addData(int data) {
    Node *temp;
    temp = (new Node());
    temp->setData(data);
    if (this->head == nullptr) {
        this->head = this->tail = temp;
    } else {
        this->tail->setNext(temp);
        this->tail = temp;
    }
    this->len += 1;
    cout << "Added : " << temp->getData() << " to the list on pos: " << len - 1 << "\n";
}

/**
 * Method for showing the list on the console.
 */
void LinkedList::printList() const {
    if (this->head == nullptr) {
        cout << "[]";
    } else {
        cout << "[ ";
        Node *tmp = this->head;
        for (int i = 0; i < (this->len - 1); ++i) {
            cout << tmp->getData() << ", ";
            tmp = tmp->getNext();
        }
        cout << tmp->getData() << " ]";
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
