#pragma once
#ifndef STACK
#define STACK

#define SIZE 10
typedef struct Stack {
	int stack[SIZE];
	int top;
}Stack;

Stack* initStack();
int push(Stack*, int);
int pop(Stack*);
int top(Stack*);
int isFull(Stack*);
int isEmpty(Stack*);

#endif // !STACK
