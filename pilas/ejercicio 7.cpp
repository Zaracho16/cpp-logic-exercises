
/*
	7) Eliminar todos los elementos pares
	Llena la pila con 6 números enteros. Luego elimina todos los elementos pares y
	muestra los impares que quedan en la pila.
*/


#include <iostream>
#include <stack>

using namespace std;

int main() {
	
	stack<int> pila;
	int numeroIngresado;
	
	cout << "Ingrese elementos a la pila: " << endl;
	
	for(int i=0; i<6; i++) {
		cin >> numeroIngresado;
		pila.push(numeroIngresado);
	}
	
	stack<int> pilaImpares;
	
	while(!pila.empty()) {
		if(pila.top() % 2 != 0) {
			pilaImpares.push(pila.top());
		}
		pila.pop();
	}
	
	cout << "Pila sin elementos pares: " << endl;
	while(!pilaImpares.empty()) {
		cout <<"| " << pilaImpares.top() << " |" << endl;
		pilaImpares.pop();
	}
	
	return  0;
	
}
