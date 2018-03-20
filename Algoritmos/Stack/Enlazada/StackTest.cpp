#include "stdafx.h"
#include <iostream>
#include <assert.h>
#include <array>
#include "StackEnlazado.h"
#include <Windows.h>
using namespace std;

static Stack Pstack;
static Stack Tstack;
static int a=0, c;
int main(){
	
		cout << "Seleccione la funcion a testear:" << endl << "1.Push" << endl << "2.Pop" << endl << "3.Top" << endl;
		cin >> c;
		assert(c > 0 && c < 4);
		switch (c)
		{
		case 1:
			cout << "Ingrese la cantidad de elementos genericos a ingresar al Stack: ";
			unsigned N;
			cin >> N;
			assert(N > 0);
			cout << "El Stack es: "<<endl;
			while (a<N)// nivel es 0
			{
				push(Tstack, rand() % 100);
				cout <<"[" <<Tstack.first->value<<"]"<< endl;
				++a;
			}
			cin >> a;
			break;
		case 2:
			vaciarStack(Tstack);
			cout << "Intentando Popear un elemento del Stack vacio...";
			Sleep(3000);
			pop(Tstack);
		case 3:
			vaciarStack(Tstack);
			cout << "Intentando Topear una Stack vacio...";
			Sleep(3000);
			top(Tstack);
		}

}
