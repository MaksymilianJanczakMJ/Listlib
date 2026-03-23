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


int add(
    list **head,
    int data
    );


int pop(
    list **head
    );


int insert(
    list **head,
    int position,
    int data
    );


int close(
    list **head
    );


int printlist(
    list *head
    );


#endif