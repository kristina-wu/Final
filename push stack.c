#include"include/push stack.h"
int push(linkstack h,int data)  // 入栈
{
    linkstack p;
    if((p = (linkstack)malloc(sizeof(linknode)))==NULL)
    {
        perror("malloc");
        return -1;
    }
    p->data = data;
    p->next = h->next;
    h->next = p;
    return 0;
}
