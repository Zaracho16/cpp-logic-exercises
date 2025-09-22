

// 4) Cada alumno de una clase tiene notas correspondientes a 8
// asignaturas diferentes, pudiendo no tener calificación en alguna
// asignatura. A cada asignatura corresponde un determinado
// coeficiente. Escribir un algoritmo que permita calcular:
	// a. La media de cada alumno
	// b. La media de general de la clase
	// c. La media de la clase en cada asignatura
	// d. Porcentaje de faltas (no presentado a examen)
	
#include <iostream>

using namespace std;

int main() {
	
	int f=0, c=0, cantidadAlumnos, cantidadDeNotas=8;
	
	// Cantidad de alumnos
	cout<<"Ingrese la cantidad de alumnos en su clase: ";
	cin>>cantidadAlumnos;
	
	int notasAlumnos[cantidadAlumnos][8];
	
	// Cargar notas de los alumnos por asignatura 
	for(f=0; f<cantidadAlumnos; f++) {
		cout<<"\nIngrese la nota del alumno "<<f+1<<endl;
			for(c=0; c<8; c++) {
				cout<<"Asignatura "<<c+1<<": ";
				cin>>notasAlumnos[f][c];
			}
	}
	
	// Calcular media por alumno
	float mediaAlumno[cantidadAlumnos];
	
	for(f=0; f<cantidadAlumnos; f++) {
		int sumaMediaAlumnos=0;
		for(c=0; c<8; c++) {
			sumaMediaAlumnos+=notasAlumnos[f][c];
		}
		mediaAlumno[f] = static_cast<float> (sumaMediaAlumnos)/cantidadDeNotas;
	}	
	
	
	// Calcular la media general de la clase
	float mediaGeneralClase=0;
	int sumaMediaGeneralClase=0;
	
	for(f=0; f<cantidadAlumnos; f++) {
		for(c=0; c<8; c++) {
			sumaMediaGeneralClase+=notasAlumnos[f][c];
		}
	}	
	mediaGeneralClase = static_cast<float>(sumaMediaGeneralClase)/(cantidadDeNotas*cantidadAlumnos);	
	
	
	// Calcular la media de la clase por asignatura
	float mediaPorAsignatura[8];
	
	for(c=0; c<8; c++) {
		int sumaMediaPorAsignatura=0;
		for(f=0; f<cantidadAlumnos; f++) {
			sumaMediaPorAsignatura+=notasAlumnos[f][c];
		}
		mediaPorAsignatura[c] = static_cast<float>(sumaMediaPorAsignatura)/cantidadAlumnos;
	}
	
	// Calcular porcentaje de faltas
	int faltas=0;

	for(f=0;f<cantidadAlumnos;f++) {
		for(c=0; c<8; c++) {
			if(notasAlumnos[f][c]==-1) {
		    	faltas++;
			}
		}
	}	

	float porcentajeFaltas = static_cast<float>(faltas)*100/(cantidadAlumnos*cantidadDeNotas);
		
	// ------SALIDAS------
	cout<<"\nMedia de notas por alumno"<<endl;
	for(f=0; f<cantidadAlumnos; f++) {
		cout<<"Alumno "<<f+1<<": ";
		cout<<mediaAlumno[f]<<endl;
	}		
	
	cout<<"\nLa media general de la clase es de: "<<mediaGeneralClase<<endl;
	
	cout<<"\nMedia de notas por asignatura"<<endl;
	for(c=0; c<8; c++) {
		cout<<"Asignatura "<<c+1<<": "<<mediaPorAsignatura[c]<<" de media"<<endl;
	}
	
	cout<<"\nPorcentaje de faltas (no presentados): "<<porcentajeFaltas<<"%"<<endl;

	return 0;
	
}
