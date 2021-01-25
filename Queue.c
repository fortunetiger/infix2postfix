#include "Queue.h"
#define SIZE 10
#define DEBUG {printf("head:%d, tail:%d\n", head, tail);}

Queue* initQueue() {
	Queue* q = (Queue*)calloc(1, sizeof(Queue));
	q->head = -1;
	q->tail = -1;
	q->count = 0;

	return q;
}

int addQ(Queue* q, int data) {

	if (!isFull(q)) {
		if (q->tail == -1) q->tail = 0;

		q->head = (q->head % SIZE) + 1;
		q->queue[q->head] = data;
		q->count++;
		return 1;
	}
	else {
		printf("isFull\n");
		return -1;
	}

}
int removeQ(Queue* q) {
	
	if (!isEmpty(q)) {
		int value = q->queue[q->tail];
		q->queue[q->tail] = 0;
		q->tail = (q->tail % SIZE) + 1;
		q->count--;

		return value;
	}
	else {
		printf("isEmpty\n");
		q->tail = q->head = -1;
		return -1;
	}
}
int isFullQ(Queue* q) {
	// return (SIZE-1)== q->head;
	return (q->count) == SIZE;
}

int isEmptyQ(Queue* q) {
	// return (q->tail != 0) && ( q->head == q->tail );
	return (q->count) == 0;
}