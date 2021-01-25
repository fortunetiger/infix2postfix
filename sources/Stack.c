#include "Stack.h"

Stack* initStack(){

	Stack *s = (Stack*)calloc(1, sizeof(Stack));
	s->top = -1;

	return s;
}

int push(Stack* s, int data) {

	if (!isFull(s)) {
		s->top = (s->top + 1);
		s->stack[s->top] = data;
		return 1;
	}
	else {
		printf("isFull\n");
		return -1;
	}
}

int pop(Stack* s) {

	if (!isEmpty(s)) {

		int value = s->stack[s->top];
		s->stack[s->top] = 0;
		s->top = (s->top - 1);
		
		return value;
	}
	else {

		printf("isEmpty\n");
		s->top = -1;
		return -1;
	}
}

int top(Stack* s) {
	if (!isEmpty) return s->stack[s->top];
	else return -1;
}

int isFull(Stack* s) {
	return (SIZE - 1) == s->top;
}

int isEmpty(Stack* s) {
	return s->top == -1;
}
