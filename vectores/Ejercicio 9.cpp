#include <iostream>
using namespace std;

int main() {
	
	int puntos[3][25], totalPuntos[25] = {0};
	int f = 0, c = 0;
	int primerPuesto = 0, mejorPuntajePersonalidad = 0;
	int posicionColumnaPrimerPuesto = 0, posicionColumnaPersonalidad = 0;
	string categorias[3] = {"Ropa de bano", "Personalidad", "Traje noche"};
	
	for(f = 0; f < 3; f++) {
		cout << "Puntaje categoria " << categorias[f] << endl;
		for(c = 0; c < 25; c++) {
			cout << "Participante " << c + 1 << ": ";
			cin >> puntos[f][c];
			totalPuntos[c] += puntos[f][c];

	
			if(totalPuntos[c] > primerPuesto) {
				primerPuesto = totalPuntos[c];
				posicionColumnaPrimerPuesto = c;
			}
		}
		cout<<endl;
	}
	
	mejorPuntajePersonalidad = puntos[1][0]; 
	posicionColumnaPersonalidad = 0;
	for(c = 1; c < 25; c++) {
		if(puntos[1][c] > mejorPuntajePersonalidad) {
			mejorPuntajePersonalidad = puntos[1][c];
			posicionColumnaPersonalidad = c;
		}
	}

	cout << "\nTotal de puntos por participante:\n";
	for(c = 0; c < 25; c++) {
		cout << "Participante " << c + 1 << ": " << totalPuntos[c] << endl;
	}

	cout << "\nPrimer puesto - Mayor puntaje:\n";
	cout << "Participante " << posicionColumnaPrimerPuesto + 1 << " con un total de: " << primerPuesto << " puntos" << endl;

	cout << "\nMiss Simpatia:\n";
	cout << "La participante " << posicionColumnaPersonalidad + 1 << " obtuvo el mejor puntaje en la categoria 'Personalidad' con " << mejorPuntajePersonalidad << " puntos." << endl;

	return 0;
}

