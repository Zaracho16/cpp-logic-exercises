
// 2) Insertar y mostrar elementos
// Crea un programa que permita al usuario ingresar 5 números y los guarde en una pila. 
// Luego, muestra los elementos en el orden en que se van desapilando.

#include <iostream>
#include <stack>

using namespace std;

int main() {
	
	stack<int> pila;
	int valorAgregado;
	
	cout << "Ingrese un valor para la pila: ";
	cin >> valorAgregado;
	pila.push(valorAgregado);
	
	for(int i=0; i<4; i++) {
		cout << "Ingrese otro valor para la pila: ";
		cin >> valorAgregado;
		pila.push(valorAgregado);
	}
	
	cout << "\nPila insertada: " << endl;
	while(!pila.empty()) {	
		cout << "|" << pila.top() << "|" << endl;
		pila.pop();
	}
	
	return 0;
	
}
