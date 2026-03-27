#include <stdio.h>
#include <stdlib.h>
#include "listlib.h"


int main() {
    list *head;
    int n;

    list_add(&head, 0);
    list_add(&head, 1);
    list_add(&head, 2);

    list_insert(&head, 5, 9);

    list_close(&head);

    list_insert(&head, 0, 23);
    list_insert(&head, 0, 3);
    list_insert(&head, 0, 7);
    list_add(&head, 1);

    list_print(head);

    list_pos(&head, -58, &n);
    printf("%d\n", n);

    return 0;
}