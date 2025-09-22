

// 11) Ingresar un vector Z de N elementos, de manera que:
//		- cada elemento de posición par sea par.
//		- cada elemento de posición impar sea impar.
//  Observación: de debe validar el elemento para que sea par (o impar).

#include <iostream> 

using namespace std;

int main() {
	
	int numElementos, i=0;
	
	cout<<"Numero de elementos para el vector: ";
	cin>>numElementos;
	
	int Z[numElementos];
	
	for(i=0; i<numElementos; i++) {
		bool valido = false;
		do {
			cout<<"\nIngrese el elemento "<<i+1<<": ";
			cin>>Z[i];
			
				if( ((i + 1) % 2 == 0 && Z[i] % 2 == 0) || ((i + 1) % 2 != 0 && Z[i] % 2 != 0) ) {
					valido = true;
				} else {
					cout<<"Valor incorrecto. ";
						if((i+1)%2==0) 
							cout<<"Debe ser Par\n";
						else 
							cout<<"Debe ser Impar\n";
				}
		} while(!valido);
	}
	
	cout<<"\nVector ingresado"<<endl;
	for(i=0; i<numElementos; i++) {
		cout<<Z[i];
		cout<<" ";
	}
	
	return 0;
	
}
