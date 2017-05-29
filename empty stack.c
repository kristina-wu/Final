#include"include/empty stack.h"
int isempty(linkstack h)  // 判断栈是否为空
{
    if(h->next==NULL)
    {
        printf("is empty\n");
        return 1;
    }
    return 0;

}
