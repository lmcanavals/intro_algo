/*
 *
 * */
#include "upc.h"
#include <string>

using namespace std;

void gotoxyprint(int x, int y, string line) {
  gotoxy(x, y); // es el viejo Console::SetCursorPosition
  cout << line;
}

void print7Diamonds(int x, int y) {
  gotoxyprint(x, y + 0, "╔═══════╗");
  gotoxyprint(x, y + 1, "║7 ♦ ♦  ║");
  gotoxyprint(x, y + 2, "║   ♦   ║");
  gotoxyprint(x, y + 3, "║  ♦ ♦  ║");
  gotoxyprint(x, y + 4, "║  ♦ ♦ 7║");
  gotoxyprint(x, y + 5, "╚═══════╝");
}
void printQHearts(int x, int y) {
  gotoxyprint(x, y + 0, "╔═══════╗");
  gotoxyprint(x, y + 1, "║Q      ║");
  gotoxyprint(x, y + 2, "║   ♥   ║");
  gotoxyprint(x, y + 3, "║  ♥ ♥  ║");
  gotoxyprint(x, y + 4, "║      Q║");
  gotoxyprint(x, y + 5, "╚═══════╝");
}
void printASpades(int x, int y) {
  gotoxyprint(x, y + 0, "╔═══════╗");
  gotoxyprint(x, y + 1, "║A      ║");
  gotoxyprint(x, y + 2, "║   ♠   ║");
  gotoxyprint(x, y + 3, "║       ║");
  gotoxyprint(x, y + 4, "║      A║");
  gotoxyprint(x, y + 5, "╚═══════╝");
}

// Punto de entrada del programa
int main() {
  int x, y;

  for (;;) {
    gotoxy(0, 0);
    char op = _getch();
    if (op == 'x') {
      break;
    }
    clear();
    x = randint(1, 60);
    y = randint(1, 20);
    switch (randint(1, 4)) {
    case 1:
      print7Diamonds(x, y);
      break;
    case 2:
      printQHearts(x, y);
      break;
    case 3:
      printASpades(x, y);
      break;
    }
  }
  clear();

  return EXIT_SUCCESS;
}
