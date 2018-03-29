#include "stdafx.h"
#include <cassert>
#include "Queue.h"

queue TQueue;

int main() {
	enQueue(TQueue, 1);
	enQueue(TQueue, 2);
	enQueue(TQueue, 3);
	enQueue(TQueue, 4);
	assert(TQueue.size_t < M);
	assert(TQueue.size_t > 0);

	first(TQueue);

	vaciarQueue(TQueue);

	enQueue(TQueue, 5);
	enQueue(TQueue, 6);
	enQueue(TQueue, 7);
	enQueue(TQueue, 8);
	assert(TQueue.size_t < M);
	assert(TQueue.size_t > 0);

	first(TQueue);

	deQueue(TQueue);
	deQueue(TQueue);
	deQueue(TQueue);
	assert(TQueue.size_t < M);
	assert(TQueue.size_t > 0);

	first(TQueue);

	deQueue(TQueue);
	assert(TQueue.size_t < M);
}
