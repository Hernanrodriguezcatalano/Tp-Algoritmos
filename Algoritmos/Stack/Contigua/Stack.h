#include<iostream>
#include<array>

const int N = 800;

struct stack {
	std::array<int, N> a;
	unsigned nivel = 0;
};

void push(stack&, int);
int pop(stack&);
int top(const stack&);
unsigned length(const stack&);
void vaciarStack(stack&);
bool IsEmpty(const stack & s);
