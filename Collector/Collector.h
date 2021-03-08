//
// Created by njohnson on 3/2/21.
//

#ifndef TAREA_EXTRACLASE_1_DATOS_2_COLLECTOR_H
#define TAREA_EXTRACLASE_1_DATOS_2_COLLECTOR_H


#include "../Node/Node.h"

class Collector {
private:
    Node* head;
    static Collector *collectorList;
    Collector();
public:
    static void initCollector(){
        collectorList = new Collector();
    }

    ~Collector();

    void* reuseAddress();

    void recycleAddress(Node* node);


};


#endif //TAREA_EXTRACLASE_1_DATOS_2_COLLECTOR_H
