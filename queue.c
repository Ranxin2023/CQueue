
#include "queue.h"
QUEUE *initialize()
{
    QUEUE *q = malloc(sizeof(QUEUE));
    q->size = 0;
    q->head = malloc(sizeof(NODE));
    q->head->next = NULL;
    q->tail = q->head;

    return q;
}
void push(QUEUE *q, int val)
{
    q->tail->next = malloc(sizeof(NODE));
    q->tail->next->val = val;
    q->tail = q->tail->next;
    q->size += 1;
}

int peek(QUEUE *q)
{
    if (q->size == 0)
    {
        perror("the queue is empty");
        exit(1);
    }
    return q->head->next->val;
}
void pop(QUEUE *q)
{
    if (q->size == 0)
    {
        return;
    }
    NODE *head_next_next = q->head->next->next;
    NODE *old_node = q->head->next;
    q->head->next = head_next_next;
    free(old_node);
}
void free_queue(QUEUE *q)
{
    NODE *current = q->head;
    NODE *next_node = NULL;
    while (current != NULL)
    {
        next_node = current->next;
        free(current->next);
        current = next_node;
    }
    free(q);
}
