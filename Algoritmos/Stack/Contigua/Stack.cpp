#include "stdafx.h"
#include "Stack.h"
#include<iostream>

using namespace std;


void push(stack& s, int x) {
	if (s.i < N) {
		s.a.at(s.i) = x;
		++s.i;
	}
	else 
	{
		cout << "Stack lleno";
	}
}

int pop(stack& s) {
	if(s.i > 0)
	{
		--s.i;
	}
	else
	{
		cout << "Stack Vacio";
	}
	return s.a.at(s.i);
	
}

int top(const stack& s) {
	if(s.i > 0)
		return s.a.at(s.i - 1);
	else
	{
		cout << "Stack Vacio";
	}

}

unsigned length(const stack& s) {
	return s.i;
}

void vaciarStack(stack& s) {
	s.i = 0;
}
