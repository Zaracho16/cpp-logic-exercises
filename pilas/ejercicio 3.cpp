
/* 3) Contar elementos
	Ingresa números en una pila hasta que el usuario escriba 0.
	Después, muestra cuántos números se insertaron en total.
*/


#include <iostream>
#include <stack>

using namespace std;

int main() {
	
	stack<int> pila;
	int valorAgregado, contadorValores=0;
	
	cout<< "Para dejar de insertar datos presione 0" << endl;
	
	do {
		cout << "Inserte un valor: ";
		cin >> valorAgregado;
			
			if(valorAgregado != 0) {
				pila.push(valorAgregado);
				contadorValores++;
			}
			
	} while(valorAgregado != 0);
	
	cout << "\nPila insertada: " << endl;
	while(!pila.empty()) {
		cout << "| " << pila.top() << " |" << endl;
		pila.pop();
	}
	
	cout << "\nSe insertaron a la pila " << contadorValores << " elementos." << endl;
	
	return 0;
	
}
