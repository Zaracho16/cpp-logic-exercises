

// 6) Para un estudio de mercado se realizó una carga de consumo en
// una semana de Gaseosa de las 3 principales marcas.
		// a) El consumo Total de cada marca por semana
		// b) Consumo Total el día Miércoles
		// c) Indicar que marca de gaseosa se consume mas


#include <iostream>
#include <string>

using namespace std;

int main() {
	
	const int numeroMarcas=3;
	const int numeroDias=7;
	int f=0, c=0;
	
	string nombreMarcas[numeroMarcas] = {"Coca cola", "Pepsi", "Pulp"};
	int matriz[numeroMarcas][numeroDias];
	
	
	cout<<"Numero de consumo por dia y marca"<<endl;
	for(f=0; f<numeroMarcas; f++) {
		cout<<"\n";
		cout<<nombreMarcas[f]<<endl;
		for(c=0; c<numeroDias; c++) {
			cout<<"Dia "<<c+1<<": ";
			cin>>matriz[f][c];
		}
	}
	
	// Consumo total de marca por semana
	int consumoPorSemana[numeroMarcas]={0};
	
	for(f=0; f<numeroMarcas; f++) {
		for(c=0; c<numeroDias; c++) {
			consumoPorSemana[f]+=matriz[f][c];
		}
	}
	
	cout<<"\nConsumo total de marca por semana"<<endl;
	for(f=0; f<numeroMarcas; f++) {
		cout<<nombreMarcas[f]<<": "<<consumoPorSemana[f]<<endl; 
	}	
	
	// Consumo total el dia miercoles
	int consumoTotalMiercoles=0;
	
	for(f=0; f<3; f++) {
		consumoTotalMiercoles+=matriz[f][2];
	}

	cout<<"\nConsumo total dia miercoles"<<endl;
	cout<<"Se consumio "<<consumoTotalMiercoles<<" gaseosas el dia miercoles"<<endl;
	
	// Que marca de gaseosa se consume mas
	int consumoTotalCocaCola=0, consumoTotalPepsi=0, consumoTotalPulp=0;
	
	for(c=0; c<numeroDias; c++) {
		consumoTotalCocaCola+=matriz[0][c];
		consumoTotalPepsi+=matriz[1][c];
		consumoTotalPulp+=matriz[2][c];
	}
	
	cout<<"\n";
	if(consumoTotalCocaCola>consumoTotalPepsi && consumoTotalCocaCola>consumoTotalPulp) {
		cout<<"La gaseosa que mas se consume es Coca Cola";
	} else if (consumoTotalPepsi>consumoTotalCocaCola && consumoTotalPepsi>consumoTotalPulp) {
		cout<<"La gaseosa que mas se consume es Pepsi";
	} else {
		cout<<"La gaseosa que mas se consume es Pulp";
	}

	
	return 0;
	
}
