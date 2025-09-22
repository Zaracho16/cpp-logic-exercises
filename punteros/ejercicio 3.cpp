
/* 3) Declara un array de 5 enteros con los valores que quieras.
	  Usa un puntero para recorrer e imprimir todos los elementos del array. */

#include <iostream> 

using namespace std;

int main() {
	
	int vec[5] = { 10, 20, 30, 40, 50};
	int* p = vec;
	
	for(int i=0; i<5; i++) {
		cout << *(p) << " "; 
		p++;
	}
	
	return 0;
	
}
