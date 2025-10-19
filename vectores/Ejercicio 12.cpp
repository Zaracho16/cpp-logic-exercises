// Un proveedor distribuye cinco productos diferentes y tiene 3 vendedores. 
// Se desea un programa que escriba lo siguiente:
	// El número de productos vendidos por cada vendedor. 
	// El número total de cada producto vendido por todos los vendedores.
	// Para entregar el premio al mejor vendedor, necesita saber cuál es el vendedor que más productos ha vendido.

#include <iostream>

using namespace std;

int main() {
	
const int vendedores=3;
const int productos=5;

int ventas[vendedores][productos];
int totalPorVendedor[vendedores]={0}, totalPorProductos[productos]={0};
int mejorVendedor=0, mejorVenta=0, v=0, p=0;

for(v=0; v<vendedores; v++) {
	cout<<"Vendedor "<<v+1<<endl;
		for(p=0; p<productos; p++) {
			cout<<"Cantidad de ventas del producto "<<p+1<<": ";
			cin>>ventas[v][p];
				totalPorVendedor[v]+=ventas[v][p];
				totalPorProductos[p]+=ventas[v][p];
		}
			if(totalPorVendedor[v]>mejorVenta) {
				mejorVenta=totalPorVendedor[v];
				mejorVendedor=v+1;
		}
		cout<<""<<endl;
}

cout<<"\nVentas total por vendedor"<<endl;
	for(v=0; v<vendedores; v++) {
		cout<<"Vendedor "<<v+1<<". Total Ventas: "<<totalPorVendedor[v]<<endl;
	}
	
cout<<"\nVenta total por producto"<<endl;
	for(p=0; p<productos; p++) {
		cout<<"Producto "<<p+1<<". Total vendido: "<<totalPorProductos[p]<<endl;
	}
	
cout<<"\nMejor vendedor"<<endl;
cout<<"El mejor vendedor es el vendedor "<<mejorVendedor<<endl;

return 0;
	
}

