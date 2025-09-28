
// Crear un menú de opciones para poder operar con la pila.
// Que no se puedan sacar elementos una vez que la pila ya esta vacía (que muestre un mensaje en pantalla indicando tal caso).
// Que sólo muestre la cima de la pila cuando este no esté vacía.
// La pila sólo podrá tener como máximo 4 elementos (numel), en caso de querer 
// apilar más valores se tendrá que sacar algún valor previo cargado.
// Al salir, mostrar la sumatoria de los elementos de la pila.
// Al salir, mostrar la cantidad de los elementos pares de la pila.

#include <iostream>
#include <stack>

using namespace std;

int main() {
	
	stack<int> pila;
	int dato_insertado, opcion = 1, sumaElementosPila=0, elementosPares=0;
	
	while(opcion>=1 && opcion<=1000) {
		
		cout << "==== Menu de opciones ====" << endl;
		cout << "1. Agregar un elemento a la pila" << endl;
		cout << "2. Quitar un elemento de la pila" << endl;
		cout << "3. Mostrar cima de la pila" << endl;
		cout << "4. Tamano de la pila" << endl;
		cout << "5. Verificar si la pila esta vacia" << endl;
		cout << "6. Mostrar pila y salir" << endl;
		
		cout << "- Elija una opcion: ";
		cin >> opcion;
		cout << endl;
		
		switch(opcion) {
			case 1:
				if(pila.size() == 4) {
					cout << "Pila llena, elimine un elemento de la pila para insertar uno nuevo\n" << endl;
				} else {
					cout << "Dato a insertar en la pila: ";
					cin >> dato_insertado;
					pila.push(dato_insertado);
					cout << "Elemento agregado correctamente\n" << endl;					
				}
			break;
			
			case 2: 
				if(pila.empty() == true) {
					cout << "La pila esta vacia, no se puede sacar elementos\n" << endl;
				} else {
					pila.pop();
					cout << "Elemento quitado correctamente\n" << endl;
				}
			break;
			
			case 3: 
				if(pila.size() > 0) {
					cout << "La cima de la pila es: " << pila.top() << "\n" << endl;
				} else {
					cout << "La pila esta vacia, no se puede mostrar la cima\n" << endl;
				}	
			break; 
			
			case 4:
				cout << "El tamano de la pila es: " << pila.size() << "\n" << endl;
			break;
			
			case 5:
				if(pila.empty() == true) {
					cout << "La pila esta vacia\n" << endl;
				} else {
					cout << "La pila tiene elementos\n" << endl;
				}
			break;
			
			case 6:
				cout << "Elementos de la pila: " << endl;
				while(pila.empty() != true) {
					sumaElementosPila += pila.top();
						if(pila.top() % 2 == 0) {
							elementosPares++;
						}
					cout << " | " << pila.top() << " | " << endl;
					pila.pop();
				}
				
				cout << "La suma de los elementos de la pila es: " << sumaElementosPila << endl;
				cout << "Hay " << elementosPares << " numeros pares en la pila" << "\n" << endl;
			return 0;
			
			default:
				cout << "Opcion no valida, intente nuevamente\n" << endl;
			break;
		}	
	}
	
	return 0;
	
}
