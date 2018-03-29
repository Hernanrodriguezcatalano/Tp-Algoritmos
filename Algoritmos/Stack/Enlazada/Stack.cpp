#include "stdafx.h"
#include "Stack.h"
#include<iostream>

void push(stack& s, int x) {
	Nodo *p = new Nodo;
	p->value = x;
	p->next = s.first;
	s.first = p;
	++s.nivel;
}
int pop(stack& s) {
	if (s.nivel != 0) {
		Nodo *p = s.first;
		s.first = s.first->next;
		--s.nivel;
		return p->value;
	}
	std::cout << "Stack vacio!";
}

int top(const stack& s) {
	if (s.nivel != 0) {
		return s.first->value;
	}
	std::cout << "Stack vacio!";
}

unsigned length(const stack& s) {
	return s.nivel;
}

void vaciarStack(stack& s) {
	s.first = nullptr;
	s.nivel = 0;
}
