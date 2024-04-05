/*
 * Crear una función que permita calcular el cubo de un número real (float)
 * */
#include <iostream>

using  namespace std;

// declaraciones de prototipos

float pow3(float x);

// Punto de entrada del programa
int main() {
	float num;

	cout << "Ingrese un número real: ";
	cin >> num;

	cout << "El cubo del número es " << pow3(num) << endl;

	return EXIT_SUCCESS;
}

// Implementación de funciones

float pow3(float x) {
	return x * x * x;
}
