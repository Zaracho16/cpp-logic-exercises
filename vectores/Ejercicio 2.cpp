

// 2) Cargar un vector de 10 elementos. Calcular e imprimir el mayor y el
// menor elemento del vector.

#include <iostream>

using namespace std;

int main() {
	
	int vector[10], i=0;
	
	for(i=0; i<10; i++) {
		cout<<"Ingrese el valor "<<i+1<<" para el vector: ";
		cin>>vector[i];
	}
	
	int menorValor=vector[0];
	int mayorValor=vector[0];
	
	for(i=0; i<10; i++) {
		if(vector[i]<menorValor) {
			menorValor=vector[i];
		}
		
		if(vector[i]>mayorValor) {
			mayorValor=vector[i];
		}
	}
	
	// -----SALIDAS-----
	cout<<"\nVector ingresado"<<endl;
	for(i=0; i<10; i++) {
		cout<<vector[i]<<" ";
	}
	
	cout<<"\n\nEl menor valor del vector es el numero: "<<menorValor<<endl;
	cout<<"El mayor valor del vector es el numero: "<<mayorValor<<endl;
	
	return 0;
	
}
