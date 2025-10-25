/*
Dise�ar un algoritmo que nos permite registrar en estructuras tipo cola con un men� de opciones 
(agregar, quitar, salir, etc), 2 l�neas caja de un supermercado, donde cada cliente ser� atendido 
seg�n su orden de llegada, pero dependiendo de la cantidad de �tems que tenga cada cliente ir� a una 
determinada l�nea de caja, para clientes con hasta 3 �tems ir�n a la caja 1, con m�s de 3 �tems ir�n a la caja 2, 
de cada cliente s�lo vamos a registrar su nombre, al salir se desea saber:

Cantidad de clientes que fueron atendidos en la caja 1 y 2 por separado.

Ejemplo:
Clientes atendidos en Caja 1 fueron: 2
Clientes atendidos en Caja 2 fueron: 4
*/

#include <iostream>
#include <queue>

using namespace std;

int main() {

	queue<string> caja1;
	queue<string> caja2;
	queue<string> clonCaja1;
	queue<string> clonCaja2;	
	string nombreCliente;
	int opcion, atenderCajaNro, cantidadArticulos, contadorCaja1 = 0, contadorCaja2 = 0;

	do {
		
		cout << "\n----Lista de opciones----" << endl;
		cout << "1) Agregar cliente" << endl;  
		cout << "2) Atender caja" << endl;
		cout << "3) Mostrar clientes en espera" << endl;
		cout << "4) Cantidad de clientes atendidos" << endl;
		cout << "5) Salir" << endl;
		
		cout << "Elegir opcion: ";
		cin >> opcion;
		
		switch(opcion) {
			
			case 1:
				cout << "\nIngrese el nombre del cliente: ";
				cin >> nombreCliente;
				
				cout << "Cantidad de articulos del cliente: ";
				cin >> 	cantidadArticulos;
				
					if(cantidadArticulos <= 3) {
						caja1.push(nombreCliente);
						cout << "Cliente agregado correctamente a la cola de la caja 1" << endl;
					} else if (cantidadArticulos > 3) {
						caja2.push(nombreCliente);
						cout << "Cliente agregado correctamente a la cola de la caja 2" << endl;
					}
				break;
					
			case 2:
				cout << "\nQue caja desea atender?: ";
				cin >> atenderCajaNro;
				
				if(atenderCajaNro == 1) {
					if(!caja1.empty()) {
						cout << "Atendiendo al cliente " << caja1.front() << endl;
						contadorCaja1++;
						caja1.pop();
					} else {
						cout << "No hay clientes por atender en la caja 1" << endl;
					}				
				} else if(atenderCajaNro == 2) {
					if(!caja2.empty()) {
						cout << "Atendiendo al cliente " << caja2.front() << endl;
						contadorCaja2++;
						caja2.pop();
					} else {
						cout << "No hay clientes por atender en la caja 2" << endl;
					}
					
				} else {
					cout << "Opcion invalida" << endl;
				}
			break;
				
			case 3:
				clonCaja1 = caja1;
				clonCaja2 = caja2;
				
				if(!clonCaja1.empty()) {
					cout << "\nClientes en cola de caja 1: " << endl;
					while(!clonCaja1.empty()) {
						cout << clonCaja1.front() << endl;
						clonCaja1.pop();
					}
				} else {
					cout << "\nCaja 1: No hay clientes en cola" << endl;
				}
				
				if(!clonCaja2.empty()) {
					cout << "\nClientes en cola de caja 2: " << endl;
					while(!clonCaja2.empty()) {
						cout << clonCaja2.front() << endl;
						clonCaja2.pop();
					}					
				} else {
					cout << "\nCaja 2: No hay clientes en cola" << endl;
				}
			break;
			
			case 4:
				cout << "\nCantidad de clientes atendidos en caja 1: " << contadorCaja1 << endl;
				cout << "Cantidad de clientes atendidos en caja 2: " << contadorCaja2 << endl;
			break;
			
			default:
				cout << "\nPrograma cerrado con exito...";
			break;
		}
		
	} while(opcion!=5);
	
	return 0;
	
}
