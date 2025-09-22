
// a) Calcular que articulos están agotados en el almacen 1.
// b) En cualquiera de los almacenes, cual es el articulo que esta agotado.
// c) Indicar el numero de articulos en existencia en cada uno de los almacenes.
// d) Cargar el costo de cada articulo en un vector costo, determinar el costo total de cada articulo por almacen.
		// 1) El costo total de inventario en cada almacen.
		// 2) El costo total de cada articulo en todos los almacenes.
		// 3) El costo total del inventario

#include <iostream>

using namespace std;

int main() {
	
	int matriz[3][4];
	int f=0, c=0, i=0, posicionColumnaAlmacen1=0, posicionFila[12], posicionColumna[12], cantidad=0;
	int vectorCosto[4] = {2600,7900,2900,5700}, matrizResultante[3][4];
	
	for(f=0; f<3; f++) {
		cout<<"Ingrese los articulos del almacen "<<f+1<<endl;
		for(c=0; c<4; c++) {
			cout<<"Articulo "<<c+1<<": ";
			cin>>matriz[f][c];
		}
		cout<<""<<endl;
	}
	
	// Suma de articulos por almacen
	int sumaArticulos[3]={0};
	for(f=0; f<3; f++) {
			for(c=0; c<4; c++) {
				sumaArticulos[f]+=matriz[f][c];
			}
	}
	
	// Articulos agotados del almacen 1
	for(c=0; c<4; c++) {
		if(matriz[0][c]==0) {
			posicionColumnaAlmacen1=c;
		}
	}
	
	for(f=0; f<3; f++) {
		for(c=0; c<4; c++) {
			if(matriz[f][c]==0) {
				posicionFila[cantidad]=f;
				posicionColumna[cantidad]=c;
				cantidad++;
			}
		}
	}
	
	// Multiplicacion del vectorCosto por la matriz
	for(f=0; f<3; f++) {
		for(c=0; c<4; c++) {
			matrizResultante[f][c]=matriz[f][c]*vectorCosto[c];
		}
	}
	
	// Costo total de inventario en cada almacen.
	int sumaInventarioPorAlmacen[3]={0};
	for(f=0; f<3; f++) {
		for(c=0; c<4; c++) {
			sumaInventarioPorAlmacen[f]+=matrizResultante[f][c];
		}
	}
	
	// Costo total de cada articulo en todos los almacenes.
	int sumaArticulosAllAlmacenes[4]={0};
	for(c=0; c<4; c++) {
		for(f=0; f<3; f++) {
			sumaArticulosAllAlmacenes[c]+=matrizResultante[f][c];
		}
	}
	
	// Costo total del inventario
	int costoTotalInventario=0;
	for(f=0; f<3; f++) {
		costoTotalInventario+=sumaInventarioPorAlmacen[f];
	}
	
	// --------------------SALIDAS--------------------
	
	cout<<"\nArticulos agotados en el almacen 1"<<endl;
	cout<<"El articulo "<<posicionColumnaAlmacen1+1<<" se encuentra agotado"<<endl;
	
	cout<<"\n"<<endl;
	for(i=0; i<cantidad; i++) {
        cout<<"El articulo "<<posicionColumna[i]+1
             <<" del almacen "<<posicionFila[i]+1
             <<" esta agotado"<<endl;
    }
	
	cout<<"\nCantidad de articulos en existencia por almacen"<<endl;
	for(f=0; f<3; f++) {
		cout<<"Almacen "<<f+1<<endl;
		cout<<"Articulos en existencia: "<<sumaArticulos[f]<<endl;
		cout<<"\n";
	}
	
	cout<<"\nCosto total de cada articulo en cada almacen"<<endl;
	for(f=0; f<3; f++) {
		cout<<"Almacen "<<f+1<<endl;
			for(c=0; c<4; c++) {
				cout<<"Articulo "<<c+1<<" - Costo total: "<<matrizResultante[f][c]<<endl;
			}
		cout<<endl;
	}
	
	cout<<"\nCosto total de inventario en cada almacen"<<endl;
	for(f=0; f<3; f++) {
		cout<<"Almacen "<<f+1<<": "<<sumaInventarioPorAlmacen[f]<<endl;
	}
	
	cout<<"\nCosto total de cada articulo en todos los almacenes"<<endl;
	for(c=0; c<4; c++) {
		cout<<"Articulo "<<c+1<<": "<<sumaArticulosAllAlmacenes[c]<<endl;
	}
	
	cout<<"\nCosto total del inventario"<<endl;
	cout<<"Costo total: "<<costoTotalInventario;
	
	return 0;
	
}
