#include <cstdlib>
#include <ctime>
#include <iostream>

// cstdlib equivalente a stdlib.h

using namespace std;

int main() {
	// srand: establecer una semilla para el algoritmo aleatorio
	srand(1981);
	cout << "Números generados con la semilla 1981:\n";
	for (int i = 0; i < 20; ++i) {
		cout << rand() << " ";
	}
	cout << "\n\n";

	int seed = time(nullptr);
	srand(seed);
	cout << "Números generados con la semilla " << seed << ":\n";
	for (int i = 0; i < 20; ++i) {
		cout << rand() << " ";
	}
	cout << "\n\n";

	return EXIT_SUCCESS;
}
