
/* 2) Crea una función void duplicar(int* n) que reciba un puntero.
La función debe duplicar el valor de la variable a la que apunta. */

#include <iostream>

using namespace std;

void duplicar(int* n) {
	*n = *n * 2;
}

int main() {
	
	int num = 15;
	duplicar(&num);
	cout << "Valor duplicado de la variable: " << num;
	
	return 0;
	
}
