#include "lib.h"
static node __CreateNode(int value);
static node __CreateNode(int value)
{
    node newNode = (node)malloc(sizeof(struct LinkedList));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
node InsertAtHead(node tail, int value)
{
    node newNode = __CreateNode(value);
    if(tail == NULL)
    {
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
       // newNode->next =
    }
}

