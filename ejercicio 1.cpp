
#include <iostream>
using namespace std;
struct Nodo {
	string valor; 
	Nodo *siguiente; 
};
void agregar_elemento_cola(Nodo *&, Nodo *&, string); 
void quitar_elemento_cola(Nodo *&, Nodo *&, string &); 
void mostrar_frente_final_cola(Nodo *, Nodo *); 
void mostrar_cola(Nodo *&, Nodo *&, string &); 
int main() {
	Nodo *frente = NULL, *final = NULL;
	int opcion = 1;
	string dato_insertado;
	while (opcion >= 1 && opcion <= 3) {
		cout<<endl<<"Menu de opciones"<<endl;
		cout<<"1. Agregar un elemento a la cola"<<endl;
		cout<<"2. Quitar un elemento de la cola"<<endl;
		cout<<"3. Mostrar el frente y el final de la cola"<<endl;
		cout<<"4. Mostrar cola y salir"<<endl;
		cout<<"Elija una opcion: ";
		cin>>opcion;
		switch (opcion) {
			case 1:
				cout<<"Dato a insertar en la cola: ";
				cin>>dato_insertado;
				agregar_elemento_cola(frente, final, dato_insertado); 
			break;
			case 2:
				quitar_elemento_cola(frente, final, dato_insertado); 
			break;
			case 3:
				mostrar_frente_final_cola(frente, final); 
			break;
			default:
				cout<<"Mostrando Cola"<<endl;
				while (frente != NULL) {
					mostrar_cola(frente, final, dato_insertado);
					cout<<" | "<<dato_insertado<<" | ";
				}
			break;
		}
	}
	return 0;
}
void agregar_elemento_cola(Nodo *&frente, Nodo *&final, string nuevo_valor) { 
	Nodo *nuevo_nodo = new Nodo(); 
	nuevo_nodo->valor = nuevo_valor; 
	nuevo_nodo->siguiente = NULL;
	if (frente == NULL) { 
		frente = nuevo_nodo; 
	} else {
		final->siguiente = nuevo_nodo; 
	}
	final = nuevo_nodo; 
	cout<<"Elemento agregado correctamente"<<endl;
}
void quitar_elemento_cola(Nodo *&frente, Nodo *&final, string &nuevo_valor) { 
	nuevo_valor = frente->valor; 
	Nodo *auxiliar = frente; 
	if (frente == final) { 
		frente = NULL; 
		final = NULL; 
	} else { 
		frente = frente->siguiente; 
	}
	delete auxiliar; 
	cout<<"Elemento quitado correctamente"<<endl;
}
void mostrar_frente_final_cola(Nodo *frente, Nodo *final) {
    if (frente != NULL) { 
        cout<<"El frente de la cola es: "<<frente->valor<<endl;
		cout<<"El final de la cola es: "<<final->valor<<endl; 
    }
}
void mostrar_cola(Nodo *&frente, Nodo *&final, string &nuevo_valor) { 
	nuevo_valor = frente->valor;
	Nodo *auxiliar = frente;
	if (frente == final) {
		frente = NULL;
		final = NULL;
	} else {
		frente = frente->siguiente;
	}
	delete auxiliar;
}
