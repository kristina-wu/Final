#include"include/enquene.h"
int EnQueue(sequeue_t *queue, data_t x)  //入队
{  
    if (NULL == queue) return - 1;  
  
    if (1 == FullSequeue(queue)) return -1; /* full */  
  
    queue->rear = (queue->rear + 1) % N;  
    queue->data[queue->rear] = x;  
  
    return 0;  
}  
