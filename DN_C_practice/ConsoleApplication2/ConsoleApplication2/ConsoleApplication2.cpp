#include <windows.h>
#include <stdio.h>

int main(void) {
	HDC hdc = GetWindowDC(GetForegroundWindow());

	int x = 30, y = 500;
	int vx = 20, vy = -100;
	int t;

	MoveToEx(hdc, 30, 200, NULL);
	LineTo(hdc, 800, 200);

	for (t = 0; t < 100; t++) {
		vy = vy + 10;
		x = x + vx;
		y = y + vy;

		Ellipse(hdc, x, y, x + 10, y + 10);
		Sleep(100);
	}
}
