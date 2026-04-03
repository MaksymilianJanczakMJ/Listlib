#include <stdio.h>
#include <stdlib.h>
#include "listlib.h"


int main() {
    list *head;
    int n;

    list_add(&head, 2);
    list_add(&head, 2);
    list_add(&head, 2);
    list_add(&head, 2);

    list_print(head);


    return 0;
}