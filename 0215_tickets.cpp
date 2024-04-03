#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	char zone, member;
	int ne; // número de entradas
	float price, desc1, desc2; // precio y descuentos
	
	cout << "Ingrese la zona elegida (Vip, Platea, Popular): ";
	cin >> zone;
	cout << "Ingrese el número de entradas: ";
	cin >> ne;
	cout << "Es socio de la U (S: sí; N: no): ";
	cin >> member;

	zone = tolower(zone);
	member = tolower(member);

	price = 350 * (zone == 'v')
		+ 130 * (zone == 'p')
		+ 50 * (zone == 'e');
	desc1 = 0.05 * (ne >= 3 && ne <= 6)
		+ 0.075 * (ne >= 7 && ne <= 9)
		+ 0.1 * (ne > 9);
	desc2 = 0.08 * (member == 's');

	price -= price * desc1 - price * desc2;
	price *= ne; // price = price * ne;

	cout << "El monto a pagar es: " << price << endl;

	return EXIT_SUCCESS;
}
