# infix2postfix

2020-2 프로그램디자인 겨울방학실습

QnA : songinseo0910@duksung.ac.kr

## 기말시험 대체 Term 프로젝트

### 문제 1
중위표현식(infix notation)으로 주어지는 연산식을 후위표현식(postfix notation)으로 변환하고, 후위표현식을 기반으로 연산하는 PostfixCalculator를 C 언어로 구현하고자 한다. 다음 실행과 같이 되도록 구현하시오.

```
Infix 형식의 계산식을 입력하세요: 3 + 2 – 4 = ENTER
Postfix 형식은 3 2 + 4 - 
결과는 1 입니다
```
*조건-1* 숫자는 한자리수 이며 숫자와 연산자를 포함하는 모든 식은 공백문자로 띄어쓰기를 한다

*조건-2* stack과 queue는 은 1차원 배열을 사용한다

*조건-3* 중위표현식은 키보드 입력을 통해 받고 후위표현식의 결과는 queue로 출력하고, queue에 있는 후위표현식을 기반으로 연산을 한다

*조건-4* 다음과 같이 3개의 소스 파일을 작성하여 구현한다.
- Infix2Postfix.c, Stack.c 그리고 Queue.c 이다.
- 소스파일 Stack.c는 스택과 관련된 모든 함수 및 변수를 포함한다. 함수 이름은 push(), pop(), isFull(), isEmpty()로 한다. 변수 이름은 여러분이 정한다.
- 소스파일 Queue,c는 큐와 관련된 모든 함수와 변수를 포함하며 함수 이름은 addQ(), removeQ(), isFullQ(), isEmptyQ()로 하고 변수 이름은 여러분이 정한다.
- 소스파일 Infix2Postfix.c 는 main() 함수와 그 외 나머지 필요한 함수 및 변수들을 포함

### 문제 2
문제 1을 숫자 자리수의 길이에 관계없이 그리고 괄호를 포함하는 중위식에 대해서 동작하도록 프로그램 하시오.
```
Infix 형식의 계산식을 입력하세요: 34 + (23 – 41) = ENTER
Postfix 형식은 34 23 41 - + 
결과는 16입니다
```

### [sources](https://github.com/fortunetiger/infix2postfix/tree/master/sources)
- [Infix2postfix.c](https://github.com/fortunetiger/infix2postfix/blob/master/sources/Infix2Postfix.c)
- [Queue.c](https://github.com/fortunetiger/infix2postfix/blob/master/sources/Queue.c)
- [Stack.c](https://github.com/fortunetiger/infix2postfix/blob/master/sources/Stack.c)

### [headers](https://github.com/fortunetiger/infix2postfix/tree/master/headers)
- [Queue.h](https://github.com/fortunetiger/infix2postfix/blob/master/headers/Queue.h)
- [Stack.h](https://github.com/fortunetiger/infix2postfix/blob/master/headers/Stack.h)
