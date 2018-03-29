#include "stdafx.h"
#include <iostream>
#include "Queue.h"
#include <array>

using namespace std;

unsigned a = 1;

int c;
queue Tqueue;

bool EsPalindromo(queue q);

int main() {
	while (a<2) {
		cout << "Ingresa un para para introducir la Queue: ";
		cin >> c;
		enQueue(Tqueue, c);
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

	if (EsPalindromo(Tqueue))
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

bool EsPalindromo(queue s) {

	array <int, M> arraux;
	queue TQueue;
	unsigned Long = s.size_t;

	for (size_t i = 0; i < Long; i++)
	{
		arraux.at(i) = deQueue(s);
		enQueue(TQueue, arraux.at(i));
	}
	cout << "La Queue: " << endl;
	for (size_t i = 0; i < Long; i++)
	{
		cout << "[" << arraux.at(i) << "]" << endl;
	}
	for (size_t i = 0; i < Long; i++)
	{
		if (deQueue(TQueue) != arraux.at(Long - 1))
		{
			return false;
		}
		Long--;
	}return true;
}
