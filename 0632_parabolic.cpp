#include "upc.h"
#include <cctype>
#include <cstdlib>

using namespace std;

int main() {
  int tx = 5, ty = 10,     // tank pos x, y
      px, py;              // proyectile pos x, y
  double vpx = 1, vpy = -1, // proyectile velocity in x and y
      g = 0.2;             // gravity
  bool changed = true, flying = false;

  clear();
  hideCursor();
  noecho();

  for (;;) {
    sleep4(100);

    if (_kbhit()) { // control de eventos de teclado
      int key = tolower(_getch());
      if (key == 27) { // 27 = tecla escape
        break;
      } else if (key == 'w') {
        if (ty > 3) {
          ty -= 1;
          changed = true;
        }
      } else if (key == 's') {
        if (ty < 20) {
          ty += 1;
          changed = true;
        }
      } else if (key == 32) { // 32 es el espacio en blanco (space bar)
				if (!flying) {
					flying = true;
					vpy = -1;
					px = 6;
					py = ty;
				}
			}
    }

    if (changed) {
      clear();
      gotoxy(tx, ty);
      cout << "H";
      changed = false;
    }
		if (flying) {
			gotoxy(px, py);
			cout << " ";
			vpy *= g;
			px += vpx;
			py += vpy;
			gotoxy(px, py);
			cout << "o";
			if (px > 30 or py < 1 or py > 20) {
				flying = false;
				changed = true;
				clear();
			}
		}

    gotoxy(0, 0);
    cout << endl;
  }

  resetAll();
  clear();

  return EXIT_SUCCESS;
}
