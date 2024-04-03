#include <cmath>
#include <iostream>

using namespace std;

int main() {
	float x1, y1, x2, y2;
	float d; // distance between (x1, y2) and (x2, y2)
	float ac, oc; // cateto adyacente, cateto opuesto
	float theta; // angle with the horizontal
	
	cout << "Ingrese los puntos x1, y1, x2, y2: ";
	cin >> x1 >> y1 >> x2 >> y2;

	d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	ac = x2 - x1;
	oc = y2 - y1;
	theta = atan(oc / ac) * 180.0 / M_PI; // angulos por defecto esta en radianes

	cout << "La distancia entre los puntos 1 y 2 es: " << d << endl;
	cout << "El ángulo de la línea de 1 a 2 con el eje x es : " << theta << endl;

	return EXIT_SUCCESS;
}
