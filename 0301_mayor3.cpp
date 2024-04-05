/*
 * Creación de una función que retorna el mayor de 3 números enteros recibidos 
 * en sus parámetros.
 * */

#include <cstdlib>
#include <iostream>

using namespace std;

// declaración de prototipos de funciones

int max3(int a, int b, int c);

// punto de entrada del programa
int main() {
	int x, y, z;

	cout << "Ingrese 3 números enteros: ";
	cin >> x >> y >> z;

	cout << "El mayor de los 3 es: " << max3(x, y, z) << endl;
	cout << x;
	return EXIT_SUCCESS;
}

// implementación de funciones

int max3(int a, int b, int c) {
	// TODO mejorar las condiciones para que funcione cuando hay 2 o más iguales 
	int max = a * (a > b && a > c)
		+ b * (b > a && b > c)
		+ c * (c > a && c > b);

	return max;
}
