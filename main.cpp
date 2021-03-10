#include <iostream>
#include "src/LinkedList/LinkedList.h"
#include "src/Collector/Collector.h"

/**
 * The main method that executes the other methods.
 * @return
 */
int main() {
    LinkedList *list = new LinkedList();
    list->addData(1);
    list->addData(2);
    list->addData(3);
    list->deleteFirst();
    list->deleteFirst();
    list->deleteFirst();
    list->addData(1);
    list->addData(2);
    return 0;
}
