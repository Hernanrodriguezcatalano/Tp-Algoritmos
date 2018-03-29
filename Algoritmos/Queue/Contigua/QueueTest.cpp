#include "stdafx.h"
#include <cassert>
#include "Queue.h"

static queue Tqueue;

int main() {

	for (size_t i = 0; i <= M; i++)
	{
		enQueue(Tqueue, 1);
	}
	assert(Tqueue.size_t < M);

	vaciarQueue(Tqueue);
	
	deQueue(Tqueue);
	assert(Tqueue.size_t > 0);
	
	vaciarQueue(Tqueue);
	
	first(Tqueue);
	assert(Tqueue.size_t > 0);
}
