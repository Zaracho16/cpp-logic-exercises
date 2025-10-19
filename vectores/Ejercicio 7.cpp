
#include <iostream>

using namespace std;

int main() {
	
	int matriz[6][5] = {
		{66, 0, 34, 99, 300},
		{45, 65, 0, 500, 600},
		{78, 55, 33, 0, 38},
		{9, 37, 40, 67, 98},
		{5, 7, 8, 65, 67},
		{7, 54, 0, 800, 98},
	};
	
	int f=0, c=0, contador=0, contadorCero=0;
	int vectorFila2[5]={0}, vectorFila4[5]={0}, vectorFila6[5]={0};
	
	// A) Cantidad existencia de mercaderias entre 500 a 1000
	for(f=0; f<6; f++) {
		for(c=0; c<5; c++) {
			if(matriz[f][c]>=500 && matriz[f][c]<=1000) {
				contador++;
			}
		}
	}
	
	// B) Cantidad de exitencia iguales a 0
	for(f=0; f<6; f++) {
		for(c=0; c<5; c++) {
			if(matriz[f][c]==0) {
				contadorCero++;
			}
		}
	} 
	
	// C) Todas aquellas sucursales de filas pares cargar un vector
	// por separado cada sucursal 2,4,6.
	for(c=0; c<5; c++) {
		vectorFila2[c]=matriz[1][c];
		vectorFila4[c]=matriz[3][c];
		vectorFila6[c]=matriz[5][c];
	}
		
	
	// ------------SALIDAS------------
	
	cout<<"\nMatriz ingresada: "<<endl;
	for(f=0; f<6; f++) {
		for(c=0; c<5; c++) {
			cout<<matriz[f][c];
			cout<<"  ";
		}
		cout<<""<<endl;
	} 
	
	cout<<"\nCantidad de existencia de mercaderias entre 500 a 1000: "<<contador<<endl;
	cout<<"\nCantidad de existencia iguales a cero: "<<contadorCero;
	
	cout<<""<<endl;
	cout<<"\nValores de las filas pares"<<endl;
	cout<<"Fila 2: "<<endl;
	for(c=0; c<5; c++) {
		cout<<vectorFila2[c];
		cout<<" ";
	}
	cout<<""<<endl;
	
	cout<<"\nFila 4: "<<endl;
	for(c=0; c<5; c++) {
		cout<<vectorFila4[c];
		cout<<" ";
	}
	cout<<""<<endl;
	
	cout<<"\nFila 6: "<<endl;
	for(c=0; c<5; c++) {
		cout<<vectorFila6[c];
		cout<<" ";
	}
	
	return 0;

}
