/*
 * Crear una función que devuelva la primera letra de una cadena de texto
 * */
#include <iostream>
#include <string>

using  namespace std;

// declaraciones de prototipos

char firstChar(string str);

// Punto de entrada del programa
int main() {
	string str;

	cout << "Ingrese una cadena: ";
	getline(cin, str);

	cout << "El primer caracter es: " << firstChar(str) << endl;

	return EXIT_SUCCESS;
}

// Implementación de funciones

char firstChar(string str) {
	return str[0];
}

