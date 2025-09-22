
/* 5) Crea un array de 5 enteros.
	  Escribe una funci�n void multiplicarPorDos(int* arr, int size) que reciba un puntero al array y su tama�o.
	  La funci�n debe multiplicar todos los elementos por 2 usando el puntero.
	  En main(), imprime el array antes y despu�s de llamar a la funci�n. */
	  
#include <iostream>

using namespace std;

void multiplicarPorDos(int* arr, int size) {
	for(int i=0; i<size; i++) {
		arr[i] = arr[i] * 2;
	}
}

void imprimirArray(int* arr, int size) {
	for(int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	
	int vec[5] = { 2, 4, 6, 8, 10 };
	const int size = 5;
	
	cout << "Vector ingresado: ";
	imprimirArray(vec, size);
	
	multiplicarPorDos(vec, size);

	cout << "Vector multiplicado por dos: ";
	imprimirArray(vec, size);
	
	return 0;
	
}
