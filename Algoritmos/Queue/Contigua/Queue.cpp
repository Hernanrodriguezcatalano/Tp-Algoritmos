#include "stdafx.h"
#include "Queue.h"
#include<iostream>

using namespace std;

void enQueue(queue& t, int y) {
	if (t.size_t < M) {
		t.b.at(t.rear) = y;
		++t.size_t;
		t.rear = (t.rear + 1) % M;

	}
	else {
		std::cout << "Queue Lleno.";
	}
}

int deQueue(queue& t) {
	if (t.size_t > 0) {
		--t.size_t;
		t.front = (t.front + 1) % M;
		return t.b.at((800 + t.front - 1) % M);
	}
	else {
		std::cout << "Queue Vacio";
		return 0;
	}
}

int first(const queue& t) {
	if (t.size_t != 0) {
		return t.b.at(t.front);
	}
	else {
		std::cout << "Queue Vacio";
		return 0;
	}
}


unsigned length(const queue& t) {
	return t.size_t;
}

void vaciarQueue(queue& t) {
	t.size_t = 0;
}
