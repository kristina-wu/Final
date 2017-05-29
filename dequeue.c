#include<stdio.h>
#include"include/dequeue.h"
int DeQueue(sequeue_t *queue, data_t *x)  // 出队
{  
    if (NULL == queue) return -1;  
  
    if (1 == EmptySequeue(queue)) return -1; /* empty */  
  
    queue->front = (queue->front + 1) % N;  
  
    if (NULL != x) {  
        *x = queue->data[queue->front];  
    }  
  
    return 0;  
}  
