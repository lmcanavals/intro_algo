/*
 * Que exprese en horas, minutos y segundos un tiempo expresado en segundos.
 * */
#include <iostream>

using  namespace std;

// declaraciones de prototipos

// usaremos parámetros por referencia para recuperar 3 valores.
void toLongTime(int totalSeconds, int& hours, int& mins, int& secs);

// Punto de entrada del programa
int main() {
	int ts; // número inicial de segundos
	int h = 0, m = 0, s = 0; // hours minutes and seconds;
	
	cout << "Ingrese el número total de segundos: ";
	cin >> ts;

	toLongTime(ts, h, m, s);

	cout << "Segundos ingresados: " << ts << endl;
	cout << "Horas: " << h << endl;
	cout << "Minutos: " << m << endl;
	cout << "Segundos: " << s << endl;

	return EXIT_SUCCESS;
}

// Implementación de funciones

void toLongTime(int totalSeconds, int& hours, int& mins, int& secs) {
	hours = totalSeconds / 3600;
	totalSeconds %= 3600; // igual que totalSeconds = totalSeconds % 3600
	mins = totalSeconds / 60;
	secs = totalSeconds % 60;
}

