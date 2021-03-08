#include <iostream>
#include "LinkedList/LinkedList.h"

int main() {
    LinkedList *list = new LinkedList();

    //list->deleteFirst();
    list -> addData(1);
    list -> addData(2);
    list -> addData(3);
    list -> addData(4);
    list -> printList();
    list->deleteFirst();
    list -> printList();

    return 0;
}
