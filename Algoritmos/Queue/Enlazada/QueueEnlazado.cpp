#include "stdafx.h"
#include<iostream>
#include "QueueEnlazado.h"

using namespace std;

void enQueue(Queue& t, int y) {
	if (t.nivel == 0) {
		t.rear->value = y;
		++t.nivel;
	}
	else {
		Node *q = new Node;
		q->value = y;
		t.rear->next = q;
		t.rear = q;
		++t.nivel;
	}
}
int deQueue(Queue& t) {

		if (t.nivel != 0) {
		int valor = t.front->value;
		t.front = t.front->next;
		--t.nivel;
		return valor;
	}
	else
	{
		cout << "Queue vacia.";
	}
}

int first(const Queue& t) {
	if (t.nivel != 0) {
		return t.front->value;
	}
	else
	{
		cout << "Queue Vacia.";
	}
}
unsigned length(const Queue& t) {
	return t.nivel;
}
void vaciarQueue(Queue& t) {
	t.front = new Node;
	t.rear = t.front;
	t.nivel = 0;
}
