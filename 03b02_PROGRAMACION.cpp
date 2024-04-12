/*
 * Escribir un programa en C++ sin utilizar if else, puede usar en su lugar los
 * operadores (*,+) o también puede usar (?,: ), necesariamente implementar
 * usando funciones.
 *
 * Dado un número entero de 12 dígitos (PROGRAMACION) que desgloce en partes
 * como sigue:
 * P=PROG, R=RAMA y C=CION y hallar el mayor ,menor e intermedio.
 *
 * Ejemplo:
 * Ingresando el número: 123456789123
 * es: 1234
 * R es: 5678
 * C es: 9123
 * Mayor=9123
 * Menor=1234
 * Intermedio=5678
 **/

#include <iostream>

using namespace std;

// alias
using ll = long long int; // typedef long long int ll; // #define ll long long int

// prototipos
void detach(ll num, int& p, int& r, int& c);
void findMinMaxMid(int p, int r, int c, int& min, int& max, int& mid);

int main() {
	ll num;
	int p, r, c, min, max, mid;

	cout << "Ingrese el número: "; cin >> num;
	detach(num, p, r, c);
	findMinMaxMid(p, r, c, min, max, mid);

	cout << "P es: " << p << endl;
	cout << "R es: " << r << endl;
	cout << "C es: " << c << endl;
	cout << "Mayor es: " << max << endl;
	cout << "Menor es: " << min << endl;
	cout << "Intermedio es: " << mid << endl;

	return EXIT_SUCCESS;
}

// implementación de funciones
void detach(ll num, int& p, int& r, int& c) {
	c = num % 10000;
	num = num / 10000;
	r = num % 10000;
	p = num / 10000;
}
void findMinMaxMid(int p, int r, int c, int& min, int& max, int& mid) {
	min = (p <= r && p <= c)
			? p
			: ((r <= c)
				? r
				: c);
	max = (p >= r && p >= c)
			? p
			: ((r >= c)
				? r
				: c);
	mid = ((p == r && r == c)
			|| (p == r)
			|| (p == c)
			|| (p > c && p < r)
			|| (p < c && p > r))
			? p
			: ((c == r) 
				|| (c > p && c < r)
				|| (c < p && c > r)
				? c
				: r);
}
