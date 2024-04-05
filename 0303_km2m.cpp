/*
 * Que permita leer el valor correspondiente a una distancia en kilómetros y las
 * visualice expresadas en metros.
 * */
#include <iostream>

using  namespace std;

// declaraciones de prototipos

// función para convertir de Km a m.
float Km2m(float distanceInKm);

// Punto de entrada del programa
int main() {
	float dist; // distancia en Km.
	
	cout << "Ingrese una distancia en Km: ";
	cin >> dist;

	cout << "La distancia en metros es " << Km2m(dist) << endl;

	return EXIT_SUCCESS;
}

// Implementación de funciones

float Km2m(float distanceInKm) {
	return distanceInKm * 1000;
}

