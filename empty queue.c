#include<stdio.h>
#include"include/empty queue.h"
int EmptySequeue(sequeue_t *queue)  // 判断队是否为空
{  
    if (NULL == queue)   
        return -1;  
  
    return (queue->front == queue->rear ? 1 : 0);  
}  
