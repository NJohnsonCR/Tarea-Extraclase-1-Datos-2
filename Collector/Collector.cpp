//
// Created by njohnson on 3/2/21.
//

#include "Collector.h"
Collector::Collector() {}

Collector::~Collector() {}

void *Collector::reuseAddress() {
    return nullptr;
}

void Collector::recycleAddress(Node *node) {

}
