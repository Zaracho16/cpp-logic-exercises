

// 1) Cargar e imprimir un vector de 50 elementos. Invertir el vector en otro,
// e imprimir el vector resultante.

#include <iostream>

using namespace std;

int main() {
	
	int vectorOriginal[50], vectorResultante[50], i=0;
	
	cout<<"Ingrese los valores para el vector"<<endl;
	for(i=0; i<50; i++) {
		cout<<"Valor "<<i+1<<": ";
		cin>>vectorOriginal[i];
	}
	
	for(i=0; i<50; i++) {
		vectorResultante[i]=vectorOriginal[49-i];
	}
	
	
	// -----SALIDAS-----
	cout<<"\nVector original"<<endl;
	for(i=0; i<50; i++) {
		cout<<vectorOriginal[i]<<" ";
	}
	
	cout<<"\n\nVector Invertido"<<endl;
	for(i=0; i<50; i++) {
		cout<<vectorResultante[i]<<" ";
	}
	
	return 0;
	
}
