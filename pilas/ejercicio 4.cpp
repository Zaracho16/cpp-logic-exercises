
/*
	4) Invertir una palabra
	El usuario ingresa una palabra y el programa debe usar una pila para imprimirla al revés.
*/

#include <iostream>
#include <stack>

using namespace std;

int main() {
	
	stack<char> pila;
	string palabraIngresada;
	
	cout << "Ingrese una palabra: ";
	cin >> palabraIngresada;
	
	for(int i=0; i<palabraIngresada.size(); i++) {
		pila.push(palabraIngresada[i]);
	} 
	
	while(!pila.empty()) {
		cout << pila.top();
		pila.pop();
	}
	
	return 0;
	
}
