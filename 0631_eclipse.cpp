#include "upc.h"
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	clear();
	hideCursor();
	float x, y, a;
	x = 40.0; y = 12.0;
	a = 0.0;

	while (1)
	{
		sleep4(10);
		gotoxy((int)x, (int)y);
		cout<<"  ";
		x = 40 + 30 * sin(a);
		y = 12 - 7 * cos(a);
		gotoxy(x, y);
		cout<<"*";
		a += 0.01;
		if (_kbhit())
		{
			char c = _getch(); if (c == 27) break;
		}
		for (long k = 0; k < 1000000; k++);
	}
	clear();
	resetAll();

	return EXIT_SUCCESS;
}


