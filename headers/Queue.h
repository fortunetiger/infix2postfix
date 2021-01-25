#pragma once
#ifndef QUEUE
#define QUEUE

#define SIZE 10
typedef struct Queue {
	int queue[SIZE];
	int head;
	int tail;
	int count;
}Queue;

int addQ(Queue*, int);
int removeQ(Queue*);
int isFullQ(Queue*);
int isEmptyQ(Queue*);
Queue* initQueue();


#endif // !QUEUE
