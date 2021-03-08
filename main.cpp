#include <iostream>
#include "LinkedList/LinkedList.h"

int main() {
    LinkedList *list = new LinkedList();

    list -> addData(1);
    list -> addData(2);
    list -> addData(3);

    list -> printList();

    return 0;
}
