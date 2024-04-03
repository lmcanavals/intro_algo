#include <iostream>

using namespace std;

int main() {
	short num, units, hundreds;

	cout << "Ingrese un número de tres cifras: ";
	cin >> num;

	num = num * (num > 99 && num < 1000);
	num == 0 && ( cout << "Número incorrecto\n" );

	units = num % 10;
	hundreds = num / 100;

	(num != 0 && units == hundreds) && ( cout << "Es número capicúa\n" );
	(num != 0 && units != hundreds) && ( cout << "No es número capicúa\n" );

	return EXIT_SUCCESS;
}
