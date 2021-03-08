//
// Created by njohnson on 3/2/21.
//

#ifndef TAREA_EXTRACLASE_1_DATOS_2_NODE_H
#define TAREA_EXTRACLASE_1_DATOS_2_NODE_H


class Node {
private:
    int data;
    Node *next;
public:
    int getData() const;

    void setData(int data);

    Node *getNext() const;

    void setNext(Node *next);
};


#endif //TAREA_EXTRACLASE_1_DATOS_2_NODE_H
