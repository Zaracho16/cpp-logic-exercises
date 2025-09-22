

// Ingresar el vector A de N componentes y el vector B de M componentes.
// Generar el vector C con los elementos de A primeramente y luego los de B.

#include <iostream>

using namespace std;

int main() {
	
	int numElementosA, numElementosB, i=0;
	
	cout<<"Cantidad de elementos para el vector A: ";
	cin>>numElementosA;
	
	cout<<"Cantidad de elementos para el vector B: ";
	cin>>numElementosB;
	
	int A[numElementosA], B[numElementosB], C[numElementosA+numElementosB];
	
	cout<<"\nValores para el vector A"<<endl;
	for(i=0; i<numElementosA; i++) {
		cin>>A[i];
	}
	
	cout<<"\nValores para el vector B"<<endl;
	for(i=0; i<numElementosB; i++) {
		cin>>B[i];
	}
	
	for(int i=0; i<numElementosA; i++) {
		C[i]=A[i];
	}
	
	for(int i=0; i<numElementosB; i++) {
		C[numElementosA+i]=B[i];
	}
	
	cout<<"\nVector C (A y B unidos)"<<endl;
	for(i=0; i<numElementosA+numElementosB; i++) {
		cout<<C[i];
		cout<<" ";
	}
	
	return 0;
	
}
