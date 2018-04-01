#include "stdafx.h"
#include <iostream>
#include "Queue.h"

using namespace std;

void enQueue(queue& t, int y) {
	Node *q = new Node;
	if (t.size_t == 0) {
		t.rear->value = y;
		++t.size_t;
	}
	else {
		q->value = y;
		t.rear->next = q;
		t.rear = q;
		++t.size_t;
	}
}


int deQueue(queue& t) {
	if (t.size_t != 0) {
		int valor = t.front->value;
		t.front = t.front->next;
		--t.size_t;
		return valor;
	}
	else
	{
		std::cout << "Queue Vacio.";
		return 0;
	}

}

int first(const queue& t) {
	if (t.size_t != 0) {
		return t.front->value;
	}
	else
	{
		std::cout << "Queue Vacio.";
		return 0;
	}

}

unsigned length(const queue& t) {
	return t.size_t;
}

void vaciarQueue(queue& t) {
	t.front = new Node;
	t.rear = t.front;
	t.size_t = 0;
}

bool IsEmpty(const queue & q){
	return q.front ==nullptr;
}
