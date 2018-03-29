#include "stdafx.h"
#include <cassert>
#include "Stack.h"

stack Tstack;

int main(){
	
		push(Tstack, 1);
		push(Tstack, 2);
		push(Tstack, 3);
		push(Tstack, 4);
		assert(Tstack.nivel < N);
		assert(Tstack.nivel > 0);

		top(Tstack);

		vaciarStack(Tstack);

		push(Tstack, 5);
		push(Tstack, 6);
		push(Tstack, 7);
		push(Tstack, 8);
		assert(Tstack.nivel < N);
		assert(Tstack.nivel > 0);

		top(Tstack);

		pop(Tstack);
		pop(Tstack);
		pop(Tstack);
		assert(Tstack.nivel > 0);
		assert(Tstack.nivel < N);	
		
		top(Tstack);

		pop(Tstack);
		assert(Tstack.nivel < N);
}
