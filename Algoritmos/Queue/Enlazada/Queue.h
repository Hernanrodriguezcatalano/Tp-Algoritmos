#include<iostream>
#include<array>
const int M = 32767;
struct Node {
	int value;
	Node *next = nullptr;
};

struct queue {
	Node *front =new Node;
	Node *rear = front;
	int size_t = 0;
};

void enQueue(queue&, int);
int deQueue(queue&);
int first(const queue&);
unsigned length(const queue&);
void vaciarQueue(queue&);
bool IsEmpty(const queue & q);
