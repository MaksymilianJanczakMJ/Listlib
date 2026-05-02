#include <stdio.h>
#include <stdlib.h>
#include "listlib.h"


int main() {
    list *head = NULL;
    int n;

    list_add(&head, '2');
    list_add(&head, '3');
    list_print(head);
    list_change(&head, 0, '4');
    list_print(head);

    return 0;
}