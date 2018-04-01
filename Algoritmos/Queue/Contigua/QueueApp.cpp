#include "stdafx.h"
#include <iostream>
#include "Queue.h"
#include <array>

using namespace std;

int main() {

	unsigned a = 1;
	int c;
	
	queue q;
	bool EsPalindromo(queue q);
	
	while (a<2) {
		cout << "Ingresa un para para introducir la Queue: ";
		cin >> c;
		enQueue(q, c);
		cout << "1.Para introducir otro valor.[Max 800]" << endl << "2.Para continuar." << endl;
		cin >> a;
		if (a>0 && a<3) {}
		else
		{
			while (!(a > 0 && a < 3))
			{
				cout << "Ingrese un valor valido." << endl << endl;
				cout << "1.Para introducir otro valor.[Max 800]" << endl << "2.Para continuar." << endl;
				cin >> a;
			}
		}

	}

	if (EsPalindromo(q))
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

bool EsPalindromo(queue q) {

	array <int, M> arraux;
	queue Q;
	unsigned Long = q.size_t;

	for (size_t i = 0; i < Long; i++)
	{
		arraux.at(i) = deQueue(q);
		enQueue(Q, arraux.at(i));
	}
	cout << "La Queue: " << endl;
	for (size_t i = 0; i < Long; i++)
	{
		cout << "[" << arraux.at(i) << "]" << endl;
	}
	for (size_t i = 0; i < Long; i++)
	{
		if (deQueue(Q) != arraux.at(Long - 1))
		{
			return false;
		}
		Long--;
	}return true;
}
