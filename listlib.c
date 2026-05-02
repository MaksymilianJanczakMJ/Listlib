#include <stdio.h>
#include <stdlib.h>
#include "listlib.h"


int list_add(
    list **head,
    int data
    ) {
    list *tail;
    list *new_node;

    new_node = malloc(sizeof(*new_node));
    if (new_node == NULL) {
        fprintf(stderr, "Error: could not allocate memory.\n");
        return 1;
    }

    new_node->data = data;

    if (*head == NULL) {
        new_node->prev = new_node;
        new_node->next = new_node;
        *head = new_node;
    } else {
        tail = (*head)->prev;
        new_node->next = *head;
        new_node->prev = tail;
        (*head)->prev = new_node;
        tail->next = new_node;
    }

    return 0;
}


int list_pop(
    list **head
    ) {
    list *tail;
    list *new_tail;

    if (*head == NULL) {
        return 1;
    }

    tail = (*head)->prev;
    if (tail == *head) {
        free(*head);
        *head = NULL;
    } else {
        new_tail = tail->prev;
        (*head)->prev = new_tail;
        new_tail->next = *head;
        free(tail);
    }

    return 0;
}


int list_insert(
    list **head,
    int position,
    int data
    ) {
    list *new_node;
    list *next;
    list *prev;
    int i;
    int first;
    int end;

    new_node = malloc(sizeof(*new_node));
    if (new_node == NULL) {
        fprintf(stderr, "Error: could not allocate memory.\n");
        return 1;
    }
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;

    if (*head == NULL) {
        new_node->next = new_node;
        new_node->prev = new_node;
        *head = new_node;
    }

    if (position >= 0) {
        next = *head;
        first = 1;
        end = 0;
        for (i = 0; i < position; i++) {
            if (next->next == *head && end == 0) {
                end = 1;
                if (first) {
                    first = 0;
                }
            } else {
                next = next->next;
                if (first) {
                    first = 0;
                }
                if (end) {
                    end = 0;
                    first = 1;
                }
            }
        }

        if (end) {
            next = next->next;
        }

        prev = next->prev;
        prev->next = new_node;
        new_node->prev = prev;
        next->prev = new_node;
        new_node->next = next;
    } else {
        prev = (*head)->prev;
        first = 0;
        for (i = -1; i > position; i--) {
            if (prev == *head && first == 0) {
                first = 1;
            } else {
                prev = prev->prev;

                if (first) {
                    first = 0;
                }
            }
        }

        next = prev->next;
        next->prev = new_node;
        new_node->next = next;
        prev->next = new_node;
        new_node->prev = prev;
    }

    if (first) {
        *head = new_node;
    }

    return 0;
}


int list_remove(
    list **head,
    int position
    ) {
    int i;
    list *next;
    list *current;
    list *prev;

    if (head == NULL || *head == NULL) {
        return 1;
    }

    current = *head;
    if (position >= 0) {
        for (i = 0; i < position; i++) {
            current = current->next;
        }
    } else {
        for (i = 0; i > position; i--) {
            current = current->prev;
        }
    }

    next = current->next;
    prev = current->prev;
    next->prev = prev;
    prev->next = next;

    if (current == *head) {
        *head = next;
    }

    free(current);

    return 0;
}


int list_close(
    list **head
    ) {
    list *next;
    list *current;

    if (head == NULL || *head == NULL) {
        return 1;
    }

    current = (*head)->next;

    while (current != *head) {
        next = current->next;
        free(current);
        current = next;
    }

    free(*head);
    *head = NULL;

    return 0;
}


int list_pos(
    list **head,
    int position,
    int *out
    ) {
    int i;
    list *current;

    if (head == NULL || *head == NULL) {
        return 1;
    }

    current = *head;
    if (position >= 0) {
        for (i = 0; i < position; i++) {
            current = current->next;
        }
    } else {
        for (i = 0; i > position; i--) {
            current = current->prev;
        }
    }

    *out = current->data;

    return 0;
}


int list_change(
    list **head,
    int position,
    int new_data
    ) {
    int i;
    list *current;

    if (head == NULL || *head == NULL) {
        return 1;
    }

    current = *head;
    if (position >= 0) {
        for (i = 0; i < position; i++) {
            current = current->next;
        }
    } else {
        for (i = 0; i > position; i--) {
            current = current->prev;
        }
    }

    current->data = new_data;

    return 0;
}


int list_print(
    list *head
    ) {
    list *node;

    if (head == NULL) {
        printf("[]\n");
        return 1;
    }

    node = head;
    printf("[");
    do {
        printf("%d", node->data);
        node = node->next;
    } while (node != head && printf("; "));
    printf("]\n");

    return 0;
}