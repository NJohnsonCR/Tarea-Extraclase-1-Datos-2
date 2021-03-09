#include <iostream>
#include "LinkedList/LinkedList.h"
#include "Collector/Collector.h"

int main() {
    LinkedList *list = new LinkedList();
    list -> addData(1);
    list -> addData(2);
    list -> addData(3);
    list -> addData(4);
    //list->deleteFirst();
    //list->deleteFirst();

    return 0;
}
