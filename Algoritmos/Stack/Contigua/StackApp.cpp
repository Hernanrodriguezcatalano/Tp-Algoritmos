#include "stdafx.h"
#include <iostream>
#include "Stack.h"

using namespace std;

unsigned a=1;

int c;
stack Tstack;

bool EsPalindromo(stack s);

int main() {
	while(a<2){
		cout << "Ingresa un para para introducir al Stack: ";
		cin >> c;
		push(Tstack,c);
		cout << "1.Para introducir otro valor.[MAX 800]" << endl << "2.Para continuar." << endl;
		cin >> a;
		if(a>0 && a<3){}
		else
		{
			while (!(a > 0 && a < 3))
			{
				cout << "Ingrese un valor valido." << endl << endl;
				cout << "1.Para introducir otro valor.[MAX 800]" << endl << "2.Para continuar." << endl;
				cin >> a;
			}
		}

	}

	cout << "El Stack: "<<endl;
	for (size_t i = 0; i < Tstack.nivel; i++)
	{
		cout << "[" << Tstack.a.at(i) << "]" << endl;
	}

	if (EsPalindromo(Tstack))
	{	
		
		cout << "Es Palindromo";
		cin >> a;
	}
	else
		{
		
		cout << "No es Palindromo";
		cin >> a;
	}
}

bool EsPalindromo(stack s) {

	array <int, N> arraux;
	stack TStack;
	unsigned Long = s.nivel;

	for (size_t i = 0; i < Long; i++)
	{
		arraux.at(i) = pop(s);
		push(TStack, arraux.at(i));
	}

	for (size_t i = 0; i < Long; i++)
	{
		if (pop(TStack) != arraux.at(i))
		{
			return false;
		}
	}return true;
}
