

// 3) Diseñar un algoritmo que lea el nombre y la nota de 20 alumnos y calcule
// la calificación promedio. El algoritmo debe imprimir el nombre de
// aquellos alumnos que sus notas están por encima del promedio.

 #include <iostream>
 
 using namespace std;
 
 int main() {
 	
 	const int cantidadAlumnos=20;
 	string nombreAlumnos[20], alumnosDestacados[20];
 	int notaAlumnos[20], i=0, sumaPromedio=0;
 	float calificacionPromedio=0;
 	
 	cout<<"Ingrese los nombres de los alumnos"<<endl;
 	for(i=0; i<20; i++) {
 		cout<<"Alumno "<<i+1<<": ";
 		cin>>nombreAlumnos[i];
	 }
	 
	cout<<"\nIngrese las notas de los alumnos"<<endl;
	for(i=0; i<20; i++) {
		cout<<"Nota de "<<nombreAlumnos[i]<<": ";
		cin>>notaAlumnos[i];
		sumaPromedio+=notaAlumnos[i];
	}
	
	calificacionPromedio = static_cast<float>(sumaPromedio)/cantidadAlumnos;
		 
	cout<<"\nLa nota promedio de la clase es de: "<<calificacionPromedio<<endl;
	
	cout<<"\nAlumnos que tienen notas arriba del promedio"<<endl;
	for(i=0; i<20; i++) {
		if(notaAlumnos[i]>calificacionPromedio) {
			cout<<nombreAlumnos[i]<<endl;
		}
	}
	
	 return 0;
 	
 }
