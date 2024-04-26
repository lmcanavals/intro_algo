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

void printDice1(int x, int y) {
  gotoxyprint(x, y + 0, "    ______");
  gotoxyprint(x, y + 1, "   /\\     \\");
  gotoxyprint(x, y + 2, "  /o \\  o  \\");
  gotoxyprint(x, y + 3, " /   o\\_____\\");
  gotoxyprint(x, y + 4, " \\o   /o    /");
  gotoxyprint(x, y + 5, "  \\ o/  o  /");
  gotoxyprint(x, y + 6, "   \\/____o/");
}
void printDice2(int x, int y) {
  gotoxyprint(x, y + 0, "    ______");
  gotoxyprint(x, y + 1, "   /\\    o\\");
  gotoxyprint(x, y + 2, "  /o \\     \\");
  gotoxyprint(x, y + 3, " / o o\\o____\\");
  gotoxyprint(x, y + 4, " \\o o /o    /");
  gotoxyprint(x, y + 5, "  \\ o/  o  /");
  gotoxyprint(x, y + 6, "   \\/____o/");
}
void printDice3(int x, int y) {
  gotoxyprint(x, y + 0, "    ______");
  gotoxyprint(x, y + 1, "   /\\    o\\");
  gotoxyprint(x, y + 2, "  /  \\  o  \\");
  gotoxyprint(x, y + 3, " /  o \\o____\\");
  gotoxyprint(x, y + 4, " \\    /o   o/");
  gotoxyprint(x, y + 5, "  \\  /     /");
  gotoxyprint(x, y + 6, "   \\/o___o/");
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
      printDice1(x, y);
      break;
    case 2:
      printDice2(x, y);
      break;
    case 3:
      printDice3(x, y);
      break;
    }
  }
  clear();

  return EXIT_SUCCESS;
}
