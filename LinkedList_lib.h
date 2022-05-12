#ifndef INIT_HET
#define INIT_HET
#include <stdio.h>
#include <stdlib.h>
struct LinkedList
 {
    int data;
    struct LinkedList *next;
 };
typedef struct LinkedList *node;

node CreateNode(int value);

node AddHead(node head, int value);

node AddTail(node head, int value);

node AddAtPosition(node head, int value, int position);

node DeleteHead(node head);

node DeleteTail(node head);

node DeleteAt(node head, int position);

int GetValue(node head, int index);

int SearchPosition(node head, int value);

node DelByVal(node head, int value);

void Traverser(node head);

node InitHead();

int LengOfHead(node head);

node Input(void);
#endif