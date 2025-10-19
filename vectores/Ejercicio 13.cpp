// Cargar un matriz de orden 3*3. Determinar e imprimir el promedio de los elementos que se hallan por 
// encima de la diagonal principal de dicha matriz y la suma de los elementos cuyo contenido sea par 
// que se encuentre por debajo de la diagonal secundaria. Imprimir los resultados y la matriz cargada

#include <iostream>

using namespace std;

int main() {
	
	int matriz[4][4];
	int f=1, c=1, n=3;
	int promedioSobreDiagonal=0, sumaSobreDiagonal=0, sumaParesDebajoDiagonalSecuandaria=0;
	
	for(f=1; f<=3; f++) {
		for(c=1; c<=3; c++) {
			cout<<"Ingrese el valor de la "<<f<<" fila y "<<c<<" columna: ";
			cin>>matriz[f][c];
		}
	}
	
	for(f=1; f<=3; f++) {
		for(c=1; c<=3; c++) {
			if(f+c>n+1) {
				if(matriz[f][c]%2==0) {
					sumaParesDebajoDiagonalSecuandaria+=matriz[f][c];
				}
			}
		}
	}
	
	for(f=1; f<=3; f++) {
		for(c=1; c<=3; c++) {
			if(f<c) {
				sumaSobreDiagonal+=matriz[f][c];
			}
		}
	}
	
	promedioSobreDiagonal=sumaSobreDiagonal/3;
	
	cout<<"\nMatriz ingresada: "<<endl;
	for(f=1; f<=3; f++) {
		for(c=1; c<=3; c++) {
			cout<<matriz[f][c];
			cout<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nEl promedio de los elementos que se hallan sobre la diagonal principal es: "<<promedioSobreDiagonal;
	cout<<"\nLa suma de los elementos pares que se encuentran debajo de la diagonal secundaria es: "<<sumaParesDebajoDiagonalSecuandaria;
	
	return 0;
	
}
