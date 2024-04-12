/*
 * En la solución no deberán utilizar if else, puede usar en su lugar los
 * operadores (*,+ o ?,: ), implemente el programa utilizando funciones
 *
 * Implemente un programa que permita evaluar la función:
 *          x^6 + x - 2        ; si x <= 0
 * f(x) = { sqrt(x^3 + 4x + 1) ; si 0 < x < 4
 *          x^2 + 1            ; si x >= 4
 *
 * Ejemplo:
 * Ingrese el valor de X: 5 La función es igual a: 26
*/

#include <iostream>
#include <cmath>

using namespace std;

// prototipos
float fx0(float x);
float f0x4(float x);
float fx4(float x);
float fx(float x);

int main() {
	float x;
	
	cout << "Ingrese el valor de x: "; cin >> x;
	cout << "La función es igual a: " << fx(x) << endl;

	return EXIT_SUCCESS;
}

// implementaciones de funciones
float fx0(float x) {
	return pow(x, 6) + x - 2;
}
float f0x4(float x) {
	return sqrt(pow(x, 3) + 4*x + 1);
}
float fx4(float x) {
	return x*x + 1;
}
float fx(float x) {
	return (x <= 0) ? fx0(x) : ((x > 0 && x < 4)? f0x4(x) : fx4(x));
}
