#include"rgr.h"

void main() {
	clrscr();
	cout << '\n' << "\n\n\n" << "\t";
	textcolor(6);
	cprintf(
			"Word of thanks for all who had been help full for our project,parents,teachers,friends etc.This is a student made project named Mech Wings which will serve user as a personal assistant by maintaing your day to day activities.");
	cout << '\n' << '\n' << '\t';
	textcolor(7);
	cprintf(
			"This software is like a personal assistant this can perform various day to day activities Like,banking,money transfer details,mapping system,reminder etc.hence it serves as a perfect companian.This may be considered a perfect assistant which could be chip programmed and mechanised.");
	cout << '\n' << '\n' << '\t';
	textcolor(2);
	cprintf(
		"This is meant for multiuser purpose.Any one can create a profile.They will be able to perform all the functions and they also be able to save their data.Rest back and have a greate joy working.Thanks to one and all.Have a nice day.   THANK YOU!");
	cout << '\n' << '\n' << '\t';
	textcolor(128 + 3);
	cprintf("           ASWATH GANESH ABHISHEK -Designers");
	delay(5500);
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	char c;
	char cb, m;
	snake();
	for (;;) {
		cb = getch();
		if (cb == '\r')
			break;
	}
	clrscr();
	cleardevice();
	screen();
	int x = 100, y = 300;
	setfillstyle(SOLID_FILL, WHITE);
	for (;;) {
		setcolor( WHITE);
		circle(x, y, 5);
		circle(x, y, 8);
		floodfill(x, y, WHITE);

		c = getch();

		if (c == 77) {
			setcolor(0);
			clear(x - 8, y - 8, x + 8, y + 8, 0);
			if (x == 550)
				x = 100;
			else
				x += 150;
		} else if (c == 75) {
			setcolor(0);
			clear(x - 8, y - 8, x + 8, y + 8, 0);
			if (x == 100)
				x = 550;
			else
				x -= 150;
		}

		else if (c == '\r') {
			if (x == 100)
			manage();
		   else if (x == 250)
		   pl_ace();
		       else if (x == 400)
		       database();
			else if (x == 550)
				exit(0);
				screen();
		}
	}
	cleardevice();
	closegraph;

	getch();
}