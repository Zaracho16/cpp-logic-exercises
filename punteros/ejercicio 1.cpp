
/*  1) Declara una variable int llamada num y as�gnale un valor.
	Declara un puntero int* que apunte a num.
	Imprime:
		- el valor de num
		- la direcci�n de num
		- el valor del puntero
		- el valor al que apunta el puntero */
		
#include <iostream>

using namespace std;

int main() {
	
	int num = 20;
	int* direccion = &num;
	
	cout << "Valor de num: " << num << endl;
	cout << "Direccion de num: " << &num << endl;
	cout << "Valor del puntero: " << direccion << endl;
	cout << "Valor al que apunta el puntero: " << *direccion << endl;
	
	return 0;
	
}
