
/*
	6) Detectar número mayor y menor
	Carga una pila con 5 números y determina, usando solo operaciones de pila, cuál es el mayor y cuál es el menor.
*/


#include <iostream>
#include <stack>

using namespace std;

int main() {
	
	int numeroIngresado, numeroMayor, numeroMenor;
	stack<int> pila;
	
	cout << "Ingrese elementos a la pila: " << endl;

	for(int i=0; i<5; i++) {
		cin >> numeroIngresado;
		pila.push(numeroIngresado);
	}
	
	numeroMayor = numeroMenor = pila.top();
	pila.pop();
	
	while(!pila.empty()) {
		if(pila.top() > numeroMayor) {
			numeroMayor = pila.top();
		} else if (pila.top() < numeroMenor) {
			numeroMenor = pila.top();
		}
		pila.pop();
	}	
	
	cout << "\nEl elemento mayor de la pila es: " << numeroMayor << endl;
	cout << "El elemento menor de la pila es: " << numeroMenor << endl;
	
	return 0;
	
}
