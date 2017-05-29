#include<stdio.h>
#include"include/create stack.h"
linkstack create()   // 建立栈
{
    linkstack h;
    if((h = (linkstack)malloc(sizeof(linknode)))==NULL)
    {
        perror("malloc");
        return NULL;
    }
    h->next = NULL;
    return h;
}
