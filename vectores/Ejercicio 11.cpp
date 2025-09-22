// Diseñar un algoritmo que imprima la cantidad de elementos impares que se encuentran debajo
// de la diagonal secundaria de una matriz de dimensión 4*4


#include <iostream>

using namespace std;

int main() {
	
	int matriz[4][4];
	int f=0, c=0, n=4, contadorImpares=0;
	
	for(f=0;f<4;f++) {
		for(c=0;c<4;c++) {
			cout<<"Ingrese el valor de la fila "<<f+1<<", columna "<<c+1<< ": ";
			cin>>matriz[f][c];
		}
	}
	
	for(f=0;f<4;f++) {
		for(c=0;c<4;c++) {
			if(f+c>n-1) {
				if(matriz[f][c]%2!=0) {
					contadorImpares++;
				}
			}
			
		}
	}
	
	cout<<"\nMatriz ingresada: "<<endl;
	
	for(f=0;f<4;f++) {
		for(c=0;c<4;c++) {
			cout<<matriz[f][c];
			cout<<"  ";
		}
		cout<<"\n";	
	}
	
	cout<<"\nCantidad de elementos impares que se encuentran debajo de la diagonal secundaria: "<<contadorImpares;
	
	return 0;
	
}
