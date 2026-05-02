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
    char data;
    struct list *prev;
    struct list *next;
} list;


int list_add(
    list **head,
    char data
    );


int list_adds(
    list **head,
    char *string
    );


int list_pop(
    list **head
    );


int list_insert(
    list **head,
    int position,
    char data
    );


int list_remove(
    list **head,
    int position
    );


int list_close(
    list **head
    );


int list_pos(
    list **head,
    int position,
    char *out
    );


int list_change(
    list **head,
    int position,
    char new_data
    );


int list_copy(
    list **head,
    list **copy
    );


int list_len(
    list **head,
    int *size_out
    );


int list_print(
    list *head
    );


#endif