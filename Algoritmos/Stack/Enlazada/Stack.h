#include<iostream>

const int N = 32767;
struct Nodo {
	int value;
	Nodo *next = nullptr;
};

struct stack {
	Nodo *first = nullptr;
	unsigned nivel = 0;
};

void push(stack&, int);
int pop(stack&);
int top(const stack&);
unsigned length(const stack&);
void vaciarStack(stack&);
