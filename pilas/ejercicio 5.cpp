
/*
	5) Sumatoria de elementos
	Crea una pila con números enteros ingresados por el usuario.
	Cuando el usuario decida parar, muestra:
		- La suma de todos los números.
		- El promedio de los elementos.
*/

#include <iostream> 
#include <stack>

using namespace std;

int main() {
	
	stack<int> pila;
	int numeroIngresado, sumaElementosPila=0;
	float promedioElementosPila=0;
	
	cout << "Ingrese numeros enteros en la pila. Presione 0 para terminar." << endl;

	do {
		
		cin >> numeroIngresado;
		if(numeroIngresado != 0) {
			pila.push(numeroIngresado);
			sumaElementosPila+=numeroIngresado;			
		}	
		
	} while (numeroIngresado != 0);
	
	promedioElementosPila = static_cast<float>(sumaElementosPila)/pila.size();
	
	cout << "\nLa suma de los elementos de la pila es: " << sumaElementosPila;
	cout << "\nEl promedio de los elementos de la pila es: " << promedioElementosPila;
	
	return 0;
	
}
