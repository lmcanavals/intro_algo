/*
 * Crear un función que reciba un número real y devuelva un número entero con el
 * valor: -1 si el número es negativo, 1 si el número es positivo o 0 si es cero
 * */
#include <iostream>

using  namespace std;

// declaraciones de prototipos

int negativePositiveZero(float num);

// Punto de entrada del programa
int main() {
	float num;

	cout << "ingrese un número negativo, positivo o cero: ";
	cin >> num;

	cout << "Resultado: " << negativePositiveZero(num) << endl;

	return EXIT_SUCCESS;
}

// Implementación de funciones

int negativePositiveZero(float num) {
	return -1 * (num < 0) + 1 * (num > 0); // condición redundante num == 0 
}

// Nota random
// estilos de escritura de variables:
// snake_case
// camelCase
// ElOtroCamelCaseQueIniciaEnMayuscula
