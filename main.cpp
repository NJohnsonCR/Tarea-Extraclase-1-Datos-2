#include <iostream>
#include "src/LinkedList/LinkedList.h"
#include "src/Collector/Collector.h"


int main() {
    LinkedList *list = new LinkedList();
    list->addData(1);
    list->addData(2);
    list->addData(3);
    list->deleteFirst();
    list->deleteFirst();
    list->addData(4);
    list->addData(5);
    return 0;
}
