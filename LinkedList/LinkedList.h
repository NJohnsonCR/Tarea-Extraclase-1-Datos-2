//
// Created by njohnson on 3/2/21.
//

#ifndef TAREA_EXTRACLASE_1_DATOS_2_LINKEDLIST_H
#define TAREA_EXTRACLASE_1_DATOS_2_LINKEDLIST_H


#include "../Node/Node.h"

class LinkedList {
private:
    Node *head;
    Node *tail;
    int len;
public:
    ~LinkedList();

    Node *getHead() const;

    void setHead(Node *head);

    Node *getTail() const;

    void setTail(Node *tail);

    int getLen() const;

    void setLen(int len);

    void addData(int data);

    void deleteFirst();

    void printList() const;

};


#endif //TAREA_EXTRACLASE_1_DATOS_2_LINKEDLIST_H
