#include "LinkedList_lib.h"
node CreateNode(int value)
{
    node temp;
    temp = (node)malloc(sizeof(struct LinkedList));
    temp->next = NULL;
    temp->data = value;
    return temp;
}
node AddHead(node head, int value)
{
    node temp = CreateNode(value);
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
    return head;
}
node AddTail(node head, int value)
{
    node temp = CreateNode(value);
    node pNode = head;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        while(pNode->next != NULL)
        {
            pNode = pNode->next;
        }
        pNode->next = temp;
    }
    return head;
}
node AddAtPosition(node head, int value, int position)
{
    node pNode = head;
    node temp = CreateNode(value);
    int k =1;
    if((position == 0)| (head == NULL))
    {
        head = AddHead(head,value);
    }
    else
    {
        while(pNode->next != NULL && k != position)
        {
            pNode = pNode ->next;
            ++k;
        }
        if(k !=position)
        {
            head = AddTail(head,value);
        }
        else
        {
            temp ->next = pNode->next;
            pNode->next = temp;
        }
    }
    return head;
}
node DeleteHead(node head)
{
    node pNode;
    if(head == NULL)
    {
        printf("Nothing to delete\n");
    }
    else
    {
        pNode = head;
        head = head->next;
        free(pNode);
    }
    return head;
}
node DeleteTail(node head)
{
    node pNode = head;
    node temp;
    if((head == NULL) || (head->next == NULL))
    {
        head = DeleteHead(head);
    }
    else
    {
        while(pNode->next->next != NULL)
        {
            pNode = pNode->next;
        }
        temp = pNode->next;
        pNode->next = NULL;
        free(temp);
    }
    return head;
}
node DeleteAt(node head, int position)
{
    node pNode = head;
    node temp;
    int k = 1;
    if((position == 0) || (head == NULL) || (head ->next == NULL))
    {
        head = DeleteHead(head);
    }
    else
    {
        while((pNode->next->next != NULL) && (k != position))
        {
            pNode = pNode->next;
            ++k;
        }
        if(k != position)
        {
            head = DeleteTail(head);
        }
        else
        {
            // release memory of node
            temp = pNode->next;
            pNode->next = pNode->next->next;
            free(temp);
        }
    }
    return head;
}
int GetValue(node head, int index)
{
    int k = 0;
    node pNode = head;
    while((pNode->next !=NULL) && (k !=index))
    {
        pNode = pNode->next;
        ++k;
    }
    return pNode ->data;
}
int SearchPosition(node head, int value)
{
    node pNode = head;
    int position = 0;
    for( pNode = head; pNode != NULL; pNode = pNode->next)
    {
        if(pNode->data == value)
        {
            return position;
        }
        ++position;
    }
    return -1;
}
node DelByVal(node head, int value)
{
    int position = SearchPosition(head,value);
    while( position != -1)
    {
        DeleteAt(head,position);
        position = SearchPosition(head,value);
    }
    return head;
}
void Traverser(node head)
{
    node pNode = head;
    for(pNode = head; pNode != NULL; pNode = pNode->next)
    {
        printf("%5d",pNode->data);
    }
}
node InitHead()
{
    node head;
    head = NULL;
    return head;
}
int LengOfHead(node head)
{
    int length = 0;
    node pNode = head;
    for(pNode = head; pNode != NULL ; pNode = pNode->next)
    {
        ++length;
    }
    return length;
}
node Input(void)
{
    node head = InitHead();
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
        head = AddTail(head,value);
    }
    return head;
}
void freeList(node head)
{
    node pNode;
    while(head != NULL)
    {
        pNode = head;

    }
}