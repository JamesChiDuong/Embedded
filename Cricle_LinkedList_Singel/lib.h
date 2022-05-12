#ifndef LIB_INT
#define LIB_INT
#include <stdio.h>
struct LinkedList
{
    int data;
    struct LinkedList* next;
};
typedef struct LinkedList *node;
#endif