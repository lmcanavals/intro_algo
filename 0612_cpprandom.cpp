/*
 *
 * */
#include <iostream>
#include <random>

using namespace std;

using lli = long long int;

// declaraciones de prototipos

// genera un min <= numero aleatorio < max
lli randint(lli min, lli max, random_device &rd) {
  mt19937_64 gen(rd());

  return gen() % (max - min) + min;
}

// Punto de entrada del programa
int main() {
  random_device rd;
  uniform_int_distribution<int> idist(0, 20);

  cout << "Números enteros generados con la semilla random device:\n";
  for (int i = 0; i < 20; ++i) {
    cout << idist(rd) << " ";
  }
  cout << "\n\n";

  uniform_real_distribution<float> fdist(0, 1);

  cout << "Números reales generados con la semilla random device:\n";
  for (int i = 0; i < 20; ++i) {
    cout << fdist(rd) << " ";
  }
  cout << "\n\n";

  mt19937_64 gen(rd());
  cout << "Números reales generados con mercer twister:\n";
  for (int i = 0; i < 20; ++i) {
    cout << gen() << " ";
  }
  cout << "\n\n";

  cout << "Números reales generados con mercer twister randint:\n";
  for (int i = 0; i < 50; ++i) {
    cout << randint(13, 37, rd) << " ";
  }
  cout << "\n\n";

  return EXIT_SUCCESS;
}

// Implementación de funciones
