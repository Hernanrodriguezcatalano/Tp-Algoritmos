#include<iostream>
#include<array>

struct Node {
	int value;
	Node *next = nullptr;
};

struct Queue {
	Node *front = new Node;
	Node *rear = front;
	int nivel = 0;
};

void enQueue(Queue&, int);
int deQueue(Queue&);
int first(const Queue&);
unsigned length(const Queue&);
void vaciarQueue(Queue&);
