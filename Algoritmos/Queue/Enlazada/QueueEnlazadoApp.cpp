#include "stdafx.h"
#include <iostream>
#include "QueueEnlazado.h"

using namespace std;

bool esPalindromo(Queue);

static Queue TQueue;
static int a = 0, c;
using namespace std;

int main() {

	while (a<2) {
		cout << "Ingresa un para para introducir al Stack: ";
		cin >> c;
		enQueue(TQueue, c);
		cout << "1.Para introducir otro valor" << endl << "2.¿Es Palindromo?" << endl;
		cin >> a;
	}

	if (EsPalindromo(TQueue))
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

bool EsPalindromo(Queue q) {

	const int N = 800;
	array <int, N> arraux;
	array <int, N> arraux2;

	unsigned Long = q.nivel;

	for (size_t i = 0; i < Long; i++)
	{
		arraux[i] = deQueue(q);
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
