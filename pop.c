#include"include/pop.h"
int pop(linkstack h)   // 出栈
{
    int data;
    linkstack p = NULL;
    if(isempty(h))
    {
        return 0;
    }
    p = h->next;
    h->next = p->next;
    data = p->data;
    free(p);
    return data;
    
