//
// Created by njohnson on 3/2/21.
//

#include "LinkedList.h"
#include "iostream"

using namespace std;



LinkedList::~LinkedList() {}

/**
 * Method used for adding data at the end of the list.
 * @param data the integer that gets added to the list
 */
void LinkedList::addData(int data) {
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
/**
 * Method used for deleting the first node of the list.
 */
void LinkedList::deleteFirst(){
    Node *tmp = this->head;

    if (tmp == nullptr){
        cout << "The list is empty" << endl;
    }
    else{
        int printData = this->getHead()->getData();
        this->setHead(this->head->getNext());
        tmp->setNext(nullptr);
        delete tmp;
        this->len--;
        cout << "Deleted node "<< "containing " << printData << " successfully" << endl;
    }
    this->printList();
}

/**
 * Method used for printing the linked list.
 */
void LinkedList::printList() const {
    if (this->head == nullptr) {
        cout << "Linked List: []" << endl;
    } else {
        Node *tmp = this->head;
        cout << "Linked List: [";
        for (int i = 0; i < (this->len - 1); ++i) {
            cout << tmp->getData() << " -> ";
            tmp = tmp->getNext();
        }
        cout << tmp -> getData() << "] \n\n" ;
    }
}
/**
 * Getter for the node head of the linked list.
 * @return the head of the list.
 */
Node *LinkedList::getHead() const {
    return head;
}
/**
 * Setter for the head of the linked list.
 * @param head
 */
void LinkedList::setHead(Node *head) {
    LinkedList::head = head;
}
/**
 * Getter for the tail of the list.
 * @return returns the tail of the list.
 */
Node *LinkedList::getTail() const {
    return tail;
}
/**
 * Setter of the tail of the list.
 * @param tail the node pointer.
 */
void LinkedList::setTail(Node *tail) {
    LinkedList::tail = tail;
}
/**
 * Getter for the len of the list.
 * @return the length of the linked list.
 */
int LinkedList::getLen() const {
    return len;
}
/**
 * Setter for the length of the list.
 * @param len an integer
 */
void LinkedList::setLen(int len) {
    LinkedList::len = len;
}
