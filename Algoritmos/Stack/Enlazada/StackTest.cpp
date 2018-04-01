#include "stdafx.h"
#include <cassert>
#include "Stack.h"


int main() {

	stack s;
	assert(IsEmpty(s));
	push(s, 1);
	assert(top(s) == 1);
	push(s, 2);
	assert(top(s) == 2);
	push(s, 3);
	assert(top(s) == 3);
	push(s, 4);
	assert(top(s) == 4);

	vaciarStack(s);

	push(s, 5);
	assert(top(s) == 5);
	push(s, 6);
	assert(top(s) == 6);
	push(s, 7);
	assert(top(s) == 7);
	push(s, 8);
	assert(top(s) == 8);

	pop(s);
	pop(s);
	pop(s);
	assert(top(s) == 5);

	assert(!(IsEmpty(s)));
	pop(s);
	assert(IsEmpty(s));
}
