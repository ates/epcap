#include <stdlib.h>

struct node {
    u_char *data;
    unsigned int size;
    struct node *next;
};

void push(struct node **list, u_char *data, unsigned int size);
void freelist(struct node *list);
