#include "stdafx.h"
#include "Stack.h"
#include<iostream>

using namespace std;


void push(stack& s, int x) {
	if (s.nivel < N) {
		s.a.at(s.nivel) = x;
		++s.nivel;
	}
	else
	{
		cout << "Stack lleno";
	}
}

int pop(stack& s) {
	if (s.nivel > 0)
	{
		--s.nivel;
	}
	else
	{
		cout << "Stack Vacio";
	}
	return s.a.at(s.nivel);

}

int top(const stack& s) {
	if (s.nivel > 0)
		return s.a.at(s.nivel - 1);
	else
	{
		cout << "Stack Vacio";
		return 0;
	}

}

unsigned length(const stack& s) {
	return s.nivel;
}

void vaciarStack(stack& s) {
	s.nivel = 0;
}
