#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
/**
 * struct list -singly linked list
 * @str: string
 * @len: length of the string
 * @next: points to the next node
 *
 * Description : singly linked list
 */
typedef struct list {
    char *str;
    unsigned int len;
    struct list *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif
