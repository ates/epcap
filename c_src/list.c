#include <stdlib.h>
#include "list.h"

void push(struct node **list, u_char *data, unsigned int size)
{
    struct node *el = malloc(sizeof(struct node));

    el->data = data;
    el->size = size;
    el->next = *list;
    *list = el;
}

unsigned int length(struct node *list)
{
    unsigned int count = 0;
    struct node *current = list;

    while(current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

void freelist(struct node *list)
{
    struct node *tmp;

    while(list)
    {
        tmp = list->next;
        free(list);
        list = tmp;
    }
}
