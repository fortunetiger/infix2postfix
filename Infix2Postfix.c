#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Stack.h"
#include "Queue.h"

#define ADD 43
#define SUB 45
#define MUL 42
#define DIV 47

Queue* infix2postfix();
int priority(char);
int cal(int, int, char);
int calculate(Queue*);

int main() {	// main function(the start point of program)

	Stack* postfix = infix2postfix();
	printf("결과는 %d 입니다\n\n", calculate(postfix));

	return 0; // end of program
}

Queue* infix2postfix() {

	char input[50];
	Stack *operatorStack = initStack();
	Queue* outputQueue = initQueue();

	printf("Infix 형식의 계산식을 입력하세요: ");
	scanf_s("%[^\n]s", input, 50);

	for (int i = 0; i < 50; i++) {

		char temp = input[i];

		if (temp == '\0') break;
		else if(temp == ' ') continue;
		else {
			if (isdigit(temp)) {
				addQ(outputQueue, temp);
			}
			else {
				if (priority(temp) < priority(top(operatorStack))) {
					push(operatorStack, temp);
				}
				else {
					while (!isEmpty(operatorStack)) {
						addQ(outputQueue, pop(operatorStack));
					}
					push(operatorStack, temp);
				}
			}
		}
	}

	while (!isEmpty(operatorStack)) {
		addQ(outputQueue, pop(operatorStack));
	}
	
	free(operatorStack);

	getchar();

	return outputQueue;
}

int priority(char op) {

	switch((int)op) {

		case ADD :
		case SUB :
			return 0;
		
		case MUL :
		case DIV :
			return 1;
		
		default:
			return -1;
	}
}

int calculate(Queue* postfix) {
	
	Stack* result = initStack();
	
	printf("Postfix 형식은 ");
	while(!isEmptyQ(postfix)) {
		int temp = removeQ(postfix);
		printf("%c ", temp);

		if (isdigit(temp)) {
			push(result, (int)temp - '0');
		}
		else{
			int b = pop(result);
			int a = pop(result);
			push(result, cal(a, b, temp));
		}
	}
	int answer = pop(result);
	printf("\n");

	free(result);
	free(postfix);

	return answer;
}

int cal(int a, int b, char op) {

	switch ((int)op) {
	case ADD: return a + b;
	case SUB: return a - b;
	case MUL: return a * b;
	case DIV: if (b != 0) return a / b;
			else return -1;
	default:
		return -1;
	}
}