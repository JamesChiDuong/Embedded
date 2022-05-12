#include "lib.h"
HeadandTail_node var;
int main()
{
    var = Input(var);
    printfNodeReverse(var);
    printfNodeTraverse(var);
    printf("\nDelete head node\n");
    var = DelAtHead(var);
    printfNodeTraverse(var);
    system("pause");
    return 0;
}