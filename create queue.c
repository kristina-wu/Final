#include<stdio.h>
#include"include/create queue.h"
sequeue_t *CreateEmptySequeue()  //建立队
{  
    sequeue_t *queue;  
    queue = (sequeue_t *)malloc(sizeof(sequeue_t));  
    if (NULL == queue) return NULL;  
      
    queue->front = queue->rear = 0;  
  
    return queue;  
}  
