#include "stdafx.h"
#include <cassert>
#include "Queue.h"

int main() {

	queue q;

	enQueue(q, 1);
	assert(first(q) == 1);
	enQueue(q, 2);
	assert(first(q) == 1);
	enQueue(q, 3);
	assert(first(q) == 1);
	enQueue(q, 4);
	assert(first(q) == 1);

	deQueue(q);
	assert(first(q) == 2);
	deQueue(q);
	assert(first(q) == 3);
	deQueue(q);
	assert(first(q) == 4);


	assert(!(IsEmpty(q)));
	deQueue(q);
	assert(IsEmpty(q));
}
