

// 5) Dada una matriz de dimensión 3*3 de enteros, se pide crear un
// vector cuyos elementos sean la sumatoria de cada columna menos el
// último elemento dicha columna. Imprimir el vector resultante.
// Imprimir la matriz y el vector resultante.

#include <iostream>

using namespace std;

int main () {
	
	int f=0, c=0, matriz[3][3], vector[3]={0};
	
	cout<<"Ingrese los valores para la matriz"<<endl;
	for(f=0; f<3; f++) {
		for(c=0; c<3; c++) {
			cout<<"Fila "<<f+1<<" columna "<<c+1<<": ";
			cin>>matriz[f][c];
		}
	}
	
	for(c=0; c<3; c++) {
		for(f=0; f<3; f++) {
			if(f!=2) {
				vector[c]=vector[c]+matriz[f][c];
			}
		}
	}
	
	cout<<"\nMatriz ingresada"<<endl;
	for(f=0; f<3; f++) {
		for(c=0; c<3; c++) {
			cout<<matriz[f][c]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"\nVector resultante suma"<<endl;
	for(c=0; c<3; c++) {
		cout<<vector[c]<<" ";
	}
	
	return 0;
	
}
