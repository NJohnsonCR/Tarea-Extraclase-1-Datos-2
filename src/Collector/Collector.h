//
// Created by njohnson on 3/2/21.
//

#ifndef TAREA_EXTRACLASE_1_DATOS_2_COLLECTOR_H
#define TAREA_EXTRACLASE_1_DATOS_2_COLLECTOR_H


#include "../Node/Node.h"

class Collector {
private:
    Collector();
    static Collector *collectorList;
    Node *head;
    Node *tail;
    int len;

public:
    ~Collector();

    static Collector* getCollectorList();

    void* reuseAddress();

    void recycleAddress(Node* node);

    Node *getHead() const;

    void setHead(Node *head);

    Node *getTail() const;

    void setTail(Node *tail);

    void printCollector();

    int getLen() const;

    void setLen(int len);


};


#endif //TAREA_EXTRACLASE_1_DATOS_2_COLLECTOR_H
