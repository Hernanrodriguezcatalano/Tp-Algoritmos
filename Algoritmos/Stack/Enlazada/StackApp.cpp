#include "stdafx.h"
#include <iostream>
#include "StackEnlazado.h"
#include <array>

using namespace std;

bool EsPalindromo(Stack);

static Stack Tstack;
static int a = 0, c;
using namespace std;

int main() {
	
	while (a<2) {
		cout << "Ingresa un para para introducir al Stack: ";
		cin >> c;
		push(Tstack, c);
		cout << "1.Para introducir otro valor" << endl << "2.¿Es Palindromo?" << endl;
		cin >> a;
	}

	cout << "El Stack : "<<endl ;
	for (size_t i = 0; i < Tstack.nivel; i++)
	{
		Tstack.nivel = i;
		cout << "[" << Tstack.first->value << "]" << endl;
		Tstack.first->next;
		
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

bool EsPalindromo(Stack s) {
	const int N = 50;
	array <int,N> arraux;
	Stack staux;

	unsigned Long = s.nivel;
	
	for (size_t i = 0; i < Long; i++)
	{
		arraux[i] = s.first->value;
		s.first->next;
	}

	for (size_t i = 0; i < Long; i++)
	{
		push(staux, pop(s));
	}

	for (size_t i = 0; i < Long; i++)
	{
		if (staux.first->value != arraux[i])
		{
			return false;
		}
		staux.first->next;

	}
	return true;
}
