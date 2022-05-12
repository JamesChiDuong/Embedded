#ifndef LIBRARY_INIT
#define LIBRARY_INIT
#include <stdio.h>
#include <stdlib.h>

struct DoubleLinkedList
{
    int data;
    struct DoubleLinkedList* next;
    struct DoubleLinkedList* prev;
};
typedef struct DoubleLinkedList *node;
struct Node
{
    node head;
    node tail;
};
typedef struct Node HeadandTail_node;

node CreateNode(int value);

HeadandTail_node InsertHead(HeadandTail_node variable_node, int value);

HeadandTail_node InsertTail(HeadandTail_node variable_node, int value);

HeadandTail_node DelAtHead(HeadandTail_node variable_node);

HeadandTail_node DelAtTail(HeadandTail_node variable_node);

void printfNodeTraverse(HeadandTail_node variable_node);

void printfNodeReverse(HeadandTail_node variable_node);

HeadandTail_node Input(HeadandTail_node variable_node);

#endif