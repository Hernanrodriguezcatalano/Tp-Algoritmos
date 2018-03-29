#include "stdafx.h"
#include "Queue.h"
#include <cassert.h>

static Queue TQueue;

int main() {

	enQueue(TQueue, 1);
	enQueue(TQueue, 1);
	deQueue(TQueue);
	deQueue(TQueue);

	vaciarQueue(TQueue);

	deQueue(TQueue);
	assert(TQueue.nivel != 0);
	vaciarQueue(TQueue);

	first(TQueue);
	assert(TQueue.nivel != 0);
}