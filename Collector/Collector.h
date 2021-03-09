//
// Created by njohnson on 3/2/21.
//

#ifndef TAREA_EXTRACLASE_1_DATOS_2_COLLECTOR_H
#define TAREA_EXTRACLASE_1_DATOS_2_COLLECTOR_H


#include "../Node/Node.h"

class Collector {
private:
    Collector();
    Node* head;
    static Collector *collectorList;

public:
    ~Collector();

    static Collector* getCollectorList(){
        if (!collectorList)
            collectorList = new Collector;
        return collectorList;
    }

    void* reuseAddress();

    void recycleAddress(Node* node);

    Node *getHead() const;

    void setHead(Node *head);

    void printCollector();


};


#endif //TAREA_EXTRACLASE_1_DATOS_2_COLLECTOR_H
