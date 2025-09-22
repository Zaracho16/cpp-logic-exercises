
/* 4) Declara un array de enteros con los valores que quieras.
	  Crea un puntero que apunte al primer elemento del array.
	  Usando el puntero, recorre el array y calcula la suma de todos los elementos.
	  Imprime la suma al final.
*/

#include <iostream>

using namespace std;

int main() {
	
	int vec[5] = { 1, 2, 3, 4, 5 };
	int* puntero = vec;
	int sumaVector = 0;
	
	for(int i=0; i<5; i++) {
		sumaVector += *puntero;
		puntero++;
	}
	
	cout<<"La suma de los elementos del vector es: " << sumaVector;
	
	return 0;
	
}
