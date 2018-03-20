#include "stdafx.h"
#include <cassert>
#include <iostream>
#include "StackContiguo.h"

using namespace std;

static stack Tstack;

int main(){

		for (size_t i = 0; i <= N; i++)
		{
			push(Tstack, 1);
		}
		assert(Tstack.i < N);
		
		vaciarStack(Tstack);
		
		pop(Tstack);
		assert(Tstack.i > 0);

		vaciarStack(Tstack);
		
		top(Tstack);
		assert(Tstack.i > 0);
}