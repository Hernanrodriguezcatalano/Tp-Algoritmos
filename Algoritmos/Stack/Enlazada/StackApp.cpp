#include "stdafx.h"
#include <iostream>
#include "Stack.h"
#include <array>

using namespace std;

int main() {

	bool EsPalindromo(stack s);
	unsigned a = 1;
	int c;

	stack s;

	while (a<2) {
		cout << "Ingresa un para para introducir al Stack: ";
		cin >> c;
		push(s, c);
		cout << "1.Para introducir otro valor.[Max 800]" << endl << "2.Para continuar." << endl;
		cin >> a;
		if (a>0 && a<3) {}
		else
		{
			while (!(a > 0 && a < 3))
			{
				cout << "Ingrese un valor valido.[Max 800]" << endl << endl;
				cout << "1.Para introducir otro valor.[Max 800]" << endl << "2.Para continuar." << endl;
				cin >> a;
			}
		}

	}

	if (EsPalindromo(s))
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
	stack aux;
	unsigned Long = s.nivel;

	for (size_t i = 0; i < Long; i++)
	{
		arraux.at(i) = pop(s);
		push(aux, arraux.at(i));
	}
	cout << "El Stack: " << endl;
	for (size_t i = 0; i < Long; i++)
	{
		cout << "[" << arraux.at(Long - i - 1) << "]" << endl;
	}
	for (size_t i = 0; i < Long; i++)
	{
		if (pop(aux) != arraux.at(i))
		{
			return false;
		}
	}return true;
}
