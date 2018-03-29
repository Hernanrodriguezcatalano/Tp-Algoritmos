#include "stdafx.h"
#include "Queue.h"
#include<iostream>

using namespace std;

void enQueue(queue& t, int y) {
	if (t.size_t < M) {
		t.b.at(t.rear) = y;
		++t.size_t;
		++t.rear;
	}
	else
	{
		cout << "Queue lleno.";
	}
}

int deQueue(queue& t) {
	if (t.size_t > 0) {
		--t.size_t;
		++t.front;
		return t.b.at(t.front - 1);
	}
	else
	{
		cout << "Queue vacio.";
	}
}

int first(const queue& t) {
	if (t.size_t != 0) {
		return t.b.at(t.front);
	}
	else
	{
		cout << "Queue vacio.";
	}
}

unsigned length(const queue& t) {
	return t.size_t;
}

void vaciarQueue(queue& t) {
	t.size_t = 0;
}
