#include <stdio.h>
#include <stdlib.h>
#include "listlib.h"


int main() {
    list *head = NULL;
    int n;

    list_adds(&head, "234");
    list_print(head);
    list_len(&head, &n);
    printf("%d\n", n);
    list_adds(&head, "abcd1234");
    list_print(head);

    return 0;
}