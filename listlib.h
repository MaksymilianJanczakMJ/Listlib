#ifndef LISTLIB_LISTLIB_H
#define LISTLIB_LISTLIB_H

/*
typedef union {
    int i;
    char c;
    float f;
    double dbl;
} list_data;
*/

typedef struct list{
    int data;
    struct list *prev;
    struct list *next;
} list;


int list_add(
    list **head,
    int data
    );


int list_pop(
    list **head
    );


int list_insert(
    list **head,
    int position,
    int data
    );


int list_remove(
    list **head,
    int position
    );


int list_close(
    list **head
    );


int list_print(
    list *head
    );


#endif