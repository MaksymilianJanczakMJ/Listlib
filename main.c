#include <stdio.h>
#include <stdlib.h>
#include "listlib.h"


int main() {
    list *head = NULL;
    list *tmp;
    int i;

    add(&head, 0);
    add(&head, 1);
    add(&head, 2);

    insert(&head, 5, 9);

    close(&head);

    add(&head, 0);
    //add(&head, 1);

    insert(&head, 3, 10);

    printlist(head);

    return 0;
}