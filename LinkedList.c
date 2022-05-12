#include "LinkedList_lib.h"

/*================================================= */
int main()
{
    printf("\n==Tao 1 danh sach lien ket==");
    node head = Input();
    Traverser(head);
    printf("\n==Them 1 phan tu vao linked list==");
    head = AddAtPosition(head,100,3);
    Traverser(head);
    printf("\n==Delete 1 phan tu\n");
    head = DeleteAt(head,2);
    Traverser(head);
    printf("\nDelete tail\n");
    //head = DeleteHead(head);
    head = DeleteTail(head);
    Traverser(head);
    system("pause");
                
    return 0;
}
