// Cargar un matriz de orden 3*5. Determinar e imprimir la suma elementos pares que se encuentran 
// en las columnas impares y la suma de los elementos POR COLUMNA

#include <iostream>

using namespace std;

int main() {
	
	int matriz[3][5], sumaParesEnColumnasImpares=0, f=0, c=0;
	int sumaElementosPares=0, sumaPorColumna[5]={0};
	
	for(f=0; f<3; f++) {
		for(c=0; c<5; c++) {
			cout<<"Ingrese el valor de la "<<f+1<<" fila y "<<c+1<<" columna: ";
			cin>>matriz[f][c];
		}
	}
	
	for(f=0; f<3; f++) {
		for(c=0; c<5; c++) {
			if(c%2==0) {
				if(matriz[f][c]%2==0) {
					sumaElementosPares+=matriz[f][c];
				}
			}
			sumaPorColumna[c]+=matriz[f][c];
		}
	}
	
	cout<<"\nMatriz ingresada: "<<endl;
	for(f=0; f<3; f++) {
		for(c=0; c<5; c++) {
			cout<<matriz[f][c];
			cout<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nLa suma de los elementos pares que se encuentran en las columnas impares es: "<<sumaElementosPares<<endl;
	
	for(c=0; c<5; c++) {
		cout<<"La suma total de los elementos de la columna "<<c+1<<" es: "<<sumaPorColumna[c]<<endl;
	}
	
	return 0;
	
}
