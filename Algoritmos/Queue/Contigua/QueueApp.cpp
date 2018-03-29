#include "stdafx.h"
#include <iostream>
#include "Queue.h"

using namespace std;
static unsigned a;
static int c;
static queue Tqueue;

bool EsPalindromo(queue);
int main() {

	while (a=1) {
		cout << "Ingresa un para para introducir a la Queue: ";
		cin >> c;
		enQueue(Tqueue, c);
		cout << "1.Para introducir otro valor.[MAX 800]" << endl << "2.¿Es Palindromo?." << endl;
		cin >> a;
		while (a<1 && a>2){
			cout << "Ingrese un valor valido";
			cout << "1.Para introducir otro valor.[MAX 800]" << endl << "2.¿Es Palindromo?." << endl;
			cin >> a;
		}
	}

	cout << "La Queue: " << endl;
	for (size_t i = 0; i < Tqueue.size_t; i++)
	{
		cout << "[" << Tqueue.b[i] << "]"<<endl;
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

bool EsPalindromo(queue t) {
	queue qaux;
	int Long = t.size_t;
	
	for (size_t i = 0; i < Long; i++)
	{
		enQueue(qaux, deQueue(t));

	}

	for (size_t i = 0; i < Long; i++)
	{

		if (t.b[i] != qaux.b[Long - 1])
		{
			cout << "error en: " << i<<endl;
			return false;
		}
		--Long;
	}
	return true;
}
