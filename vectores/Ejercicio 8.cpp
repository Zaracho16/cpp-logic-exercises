

// Una libreria tiene clasificado sus libros por áreas, las cantidades, áreas e indicese guardan en una matriz
// Hacer un algoritmo que permita: 

#include <iostream>

using namespace std;

int main() {
	
	int f=0, c=0, totalDeLibros=0;
	int librosCiencias=0, librosMatematicas=0, librosHistoria=0, librosEstadistica=0, librosInformatica=0;
	int matriz[3][5] = {
		{ 10, 5, 6, 10, 2},
		{ 5, 7, 3, 4, 7},
		{ 2, 5, 10, 7, 4},
	};
	
	// A) Determinar la cantidad total de libros de dicha libreria.
	for(f=0; f<3; f++) {
		for(c=0; c<5; c++) {
			totalDeLibros+=matriz[f][c];
		}
	}
	
	// B) Cuantos libros hay en cada area
	for(f=0; f<3; f++) {
		librosCiencias+=matriz[f][0];
	}
	
	for(f=0; f<3; f++) {
		librosMatematicas+=matriz[f][1];
	}
	
	for(f=0; f<3; f++) {
		librosHistoria+=matriz[f][2];
	}
	
	for(f=0; f<3; f++) {
		librosEstadistica+=matriz[f][3];
	}

	for(f=0; f<3; f++) {
		librosInformatica+=matriz[f][4];
	}	
		
	
	// C) Cual es el minimo valor de libros en dicha libreria e indicar en que areas
	// la cantidad de libros es igual al minimo.
	int ultimoNumero=matriz[0][0];
	int valorMinimo=ultimoNumero;
	string nombresAreas[5] = {"Ciencias", "Matematicas", "Historia", "Estadisticas", "Informatica"};
	
	for(f=0; f<3; f++) {
		for(c=0; c<5; c++) {
			if(matriz[f][c]<valorMinimo) {
				valorMinimo=matriz[f][c];
			}
		}
	}
	
	bool yaMostrado[5]={false};
	
	// D) Cual es el máximo valor de libros en dicha libreria e indicar en que areas la cantidad
	// de libros es igual al maximo
	int ultimooNumero=matriz[0][0];
	int valorMaximo=ultimooNumero;
	
	for(f=0; f<3; f++) {
		for(c=0; c<5; c++) {
			if(matriz[f][c]>valorMaximo) {
				valorMaximo=matriz[f][c];
			}
		}
	}
	
	bool yaMostradoo[5]={false};
	
	// Matriz Ingresada	
	cout<<"\nMatriz ingresada: "<<endl;
	for(f=0; f<3; f++) {
		for(c=0; c<5; c++) {
			cout<<matriz[f][c];
			cout<<"  ";
		}
		cout<<""<<endl;
	}
	
	cout<<"\nCantidad total de libros en dicha libreria: "<<totalDeLibros<<endl;
	cout<<"\nCANTIDAD DE LIBROS POR AREA"<<endl;
	cout<<"Area de ciencias: "<<librosCiencias<<" libros"<<endl;
	cout<<"Area de matematicas: "<<librosMatematicas<<" libros"<<endl;
	cout<<"Area de historia: "<<librosHistoria<<" libros"<<endl;
	cout<<"Area de estadisticas: "<<librosEstadistica<<" libros"<<endl;
	cout<<"Area de informatica: "<<librosInformatica<<" libros"<<endl;
	
	cout<<"\nValor minimo de libros en la libreria: "<<valorMinimo<<endl;
	cout<<"Areas donde hay el valor minimo: "<<endl;
	for(f=0; f<3; f++) {
		for(c=0; c<5; c++) {
			if(matriz[f][c]==valorMinimo && !yaMostrado[c]) {
				cout<<" - "<<nombresAreas[c]<<endl;
				yaMostrado[c]=true;
			}
		}
	}
	
	cout<<"\nValor maximo de libros en la libreria: "<<valorMaximo<<endl;
	cout<<"Areas donde hay el valor maximo: "<<endl;
	for(f=0; f<3; f++) {
		for(c=0; c<5; c++) {
			if(matriz[f][c]==valorMaximo && !yaMostradoo[c]) {
				cout<<" - "<<nombresAreas[c]<<endl;
				yaMostradoo[c]=true;
			}
		}
	}
	
	return 0;
	
}
