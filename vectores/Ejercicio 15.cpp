// Una agencia automotriz distribuye 5 modelos diferentes de coches y 	
// tiene 3 vendedores. Se desea un programa que escriba lo siguiente:
// a. El número de automóviles vendidos por cada vendedor.
// b. El número total de cada modelo vendido por todos los 	vendedores.

#include <iostream>

using namespace std;

int main() {
	
	int matriz[5][3], ventasTotalPorVendedor[3]={0}, ventasTotalPorModelo[5]={0};
	int totalVendidoPorVendedor=0, f=0, c=0;
	
	for(f=0; f<5; f++) {
		for(c=0; c<3; c++) {
			cout<<"Modelo "<<f+1<<" - cantidad vendida por el vendedor "<<c+1<<": ";
			cin>>matriz[f][c];
		}
	}
	
	for(f=0; f<5; f++) {
		for(c=0; c<3; c++) {
			ventasTotalPorVendedor[c]+=matriz[f][c];
		}
	}
	
	for(f=0; f<5; f++) {
		for(c=0; c<3; c++) {
			ventasTotalPorModelo[f]+=matriz[f][c];
		}
	}
	
	
	cout<<"\nVentas por vendedor y modelo: "<<endl;
	cout << "          V1 V2 V3\n";
	for(f=0; f<5; f++) {
		cout<<"Modelo "<<f+1<<": ";
		for(c=0; c<3; c++) {
			cout<<matriz[f][c];
			cout<<"  ";
		}
		cout<<"\n";
	}
	
	cout<<"\nTotal de ventas por vendedor"<<endl;
	for(c=0; c<3; c++) {
		cout<<"Vendedor "<<c+1<<" - Total de ventas: "<<ventasTotalPorVendedor[c]<<endl;
	}
	
	cout<<"\nTotal de ventas por modelo"<<endl;
	for(f=0; f<5; f++) {
		cout<<"Modelo "<<f+1<<": "<<" - Ventas en total: "<<ventasTotalPorModelo[f]<<endl;
	}
	
	return 0;
	
}
