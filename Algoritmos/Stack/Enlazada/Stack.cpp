#include "stdafx.h"
#include "StackEnlazado.h"
#include<iostream>
#include<cassert>

void push(Stack& s, int x) {
	Nodo *p = new Nodo;
	p->value = x;
	p->next = s.first;
	s.first = p;
	++s.nivel;
}
int pop(Stack& s) {

	assert(s.nivel != 0); 
		Nodo *p = s.first;
		s.first = s.first->next;
		--s.nivel;
		return p->value;
}

int top(const Stack& s) {
	assert(s.nivel != 0);
		return s.first->value;
}

unsigned length(const Stack& s) {
	return s.nivel;
}

void vaciarStack(Stack& s) {
	s.first = nullptr;
	s.nivel = 0;
}


bool EsPalindromo(Stack s) {
	
	assert(s.nivel != NULL);
	
	Stack staux;
	Stack staux2;
	unsigned Long = s.nivel;
	staux = s;
	
	for (size_t i = 0; i < Long ; i++)
	{
		push(staux2, pop(s));
	}
	
	for (size_t i = 0; i < Long; i++)
	{
		if (staux.first->value != staux2.first->value)
		{return false;}
		
		staux.first->next;
		staux2.first->next;
	}
	return true;
