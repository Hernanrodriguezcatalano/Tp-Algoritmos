#include "stdafx.h"
#include <cassert.h>
#include "Stack.h"

static Stack Tstack;

	int main(){		
			push(Tstack, 1);
			push(Tstack, 2);
			pop(Tstack);
			pop(Tstack);
			
			vaciarStack(Tstack);
			
			pop(Tstack);
			assert(Tstack.nivel != 0);
			vaciarStack(Tstack);
		
			top(Tstack);
			assert(Tstack.nivel != 0);
}
