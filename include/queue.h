#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

#define MAX_LEN 100
#define QUEUE_EMPTY -1
#define QUEUE_FULL -2

typedef struct {
} queue;

queue* queue_init();

int queue_size(queue * q);

int queue_push(queue* q, int value);

int queue_pop(queue* q, int* value);

#endif //QUEUE_QUEUE_H
