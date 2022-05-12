#include "lib.h"
node CreateNode(int value)
{
    node newNode = (node)malloc(sizeof(struct DoubleLinkedList));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}
HeadandTail_node InsertHead(HeadandTail_node variable_node, int value)
{
    node newNode = CreateNode(value);
    if(variable_node.head == NULL)
    {
        variable_node.head = newNode;
        variable_node.tail = newNode;
        return variable_node;
    }
    else
    {
        variable_node.head->prev = newNode;
        newNode->next = variable_node.head;
        variable_node.head = newNode;
    }
    return variable_node;
}
HeadandTail_node InsertTail(HeadandTail_node variable_node, int value)
{
    node newNode = CreateNode(value);
    if(variable_node.head == NULL)
    {
        variable_node.head = newNode;
        variable_node.tail = newNode;
        return variable_node;
    }
    else
    {
        variable_node.tail->next = newNode;
        newNode->prev = variable_node.tail;
        variable_node.tail = newNode;
        return variable_node;
    }
}
HeadandTail_node DelAtHead(HeadandTail_node variable_node)
{
    node temp;
    if(variable_node.head == NULL)
    {
        printf("\nNothing to delete\n");
    }
    else
    {
        temp = variable_node.head;
        variable_node.head = variable_node.head->next;
        variable_node.head->prev = NULL;
        free(temp);
    }
    return variable_node;
}
HeadandTail_node DelAtTail(HeadandTail_node variable_node)
{
    node temp;
    if(variable_node.head == NULL)
    {
       printf("\nNothing to delete\n");
    }
    else
    {
        temp = variable_node.tail;
        variable_node.tail = variable_node.tail->prev;
        variable_node.tail->next = NULL;
        free(temp);
    }
    return variable_node;
}
void printfNodeTraverse(HeadandTail_node variable_node)
{
    node pNode = variable_node.head;
    printf("\nFoward: ");
    while(pNode != NULL)
    {
       printf("%5d ",pNode->data);
       pNode = pNode->next;
    }
}
void printfNodeReverse(HeadandTail_node variable_node)
{
    node pNode = variable_node.tail;
    printf("\nBackFoward: ");
    while(pNode != NULL)
    {
        printf("%5d",pNode->data);
        pNode = pNode->prev;
    }
}
HeadandTail_node Input(HeadandTail_node variable_node)
{

    int n, value;
    do
    {
        printf("\nNhap so luong phan tu n = ");
        scanf("%d",&n);
    } while (n<=0);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap gia tri can them: ");
        scanf("%d",&value);
        variable_node = InsertTail(variable_node,value);
    }
    return variable_node;
}