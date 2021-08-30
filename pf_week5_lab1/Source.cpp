#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void draw_ship()
{
	printf(" <-0-> ");
}

int main()
{
		gotoxy(13,20);
		draw_ship();
	return 0;
}
