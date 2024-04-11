#ifndef QUEUE_H
#define QUEUE_H
#include "stdio.h"
#include "stdlib.h"
typedef struct _NODE
{
    int val;
    struct _NODE *next;

} NODE;
typedef struct _QUEUE
{

    size_t size;
    NODE *head;
    NODE *tail;
} QUEUE;
QUEUE *initialize();
void push(QUEUE *q, int val);
int peek(QUEUE *q);
void pop(QUEUE *q);
void free_queue(QUEUE *q);
#endif