#include "stdafx.h"
#include <iostream>
#include "Stack.h"

using namespace std;

static unsigned a=1;
static int c;
static stack Tstack;

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
			cout << "Ingrese un valor valido.";
		}

	}

	cout << "El Stack: "<<endl;
	for (size_t i = 0; i < Tstack.i; i++)
	{
		cout << "[" << Tstack.a[i] << "]" << endl;
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
	
	stack staux;
	unsigned Long = s.i;

	for (size_t i = 0; i < Long; i++)
	{
		staux.a[i] = pop(s);
	}
	for (size_t i = 0; i < Long; i++)
	{
		if (s.a[i] != staux.a[i])
		{
			return false;
		}
	}
	return true;
}
