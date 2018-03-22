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

	const int N = 800;
	int i = 0;
	array <int, N> arraux;
	array <int, N> arraux2;

	unsigned Long = s.nivel;

	for (size_t i = 0; i < Long; i++)
	{
		arraux[i] = pop(s);
		cout << "arraux: " << arraux[i] << endl;
	}

	for (size_t i = 0; i < Long; i++)
	{
		arraux2[i] = arraux[i];
		cout << "arraux2: " << arraux2[i] << endl;
	}

	for (size_t i = 0; i < Long ; i++)
	{
		if (arraux[i] != arraux2[Long - 1])
		{
			cout << "Error en :" << i << endl;
			return false;
		}
		Long--;
	}
	return true;
}
