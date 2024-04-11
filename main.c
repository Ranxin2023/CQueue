#include "queue.h"
int main()
{
    QUEUE *q = initialize();
    push(q, 3);
    push(q, 7);
    push(q, 11);
    pop(q);
    printf("The peek of queue is %d", peek(q));
    free_queue(q);
    return 0;
}