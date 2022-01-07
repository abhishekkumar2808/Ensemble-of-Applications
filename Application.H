 #include<iostream.h>
#include<fstream.h>
#include<math.h>
#include<stdlib.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<iomanip.h>
#include<time.h>
#include<string.h>
#include<ctype.h>


struct conc {
	char name[15];
	struct dob {
		int date;
		int month;
		int year;
	} birth;
	char ph[20];
	struct address {
		int hno;
		char st[30];
		char city[20];
		long int pc;
	} add;
	char fav;
} co[100], cd[100];
int n, pa, jk = 0, e = 150, y = 150, dr, pos = 1, dx, g;
struct pat {
	int n, x, y, a[30];
	char pass[30];
};
struct nage {
	char p[20];
	double age;
};
void col() {
	cleardevice();
	setbkcolor(8);
	setcolor( WHITE);
	rectangle(8, 8, 630, 471);
}
void cx() {
	cleardevice();
	setbkcolor(8);
	setcolor( WHITE);
	rectangle(8, 8, 630, 471);
	settextstyle(7, 0, 4);
	outtextxy(190, 30, "PASSWORD");
	settextstyle(7, 0, 1);
	outtextxy(110, 80, "(ENTER THE CURRENT PASSWORD)");
	bar(185, 200, 335, 225);
	rectangle(178, 193, 342, 232);
	rectangle(180, 195, 340, 230);
}
void xo() {
	cleardevice();
	setbkcolor(8);
	setcolor( WHITE);
	rectangle(8, 8, 630, 471);
	settextstyle(7, 0, 4);
	outtextxy(190, 30, "PASSWORD");
	settextstyle(7, 0, 1);
	outtextxy(110, 80, "(ENTER AN UNLOCK PASSWORD)");
	bar(185, 200, 335, 225);
	rectangle(178, 193, 342, 232);
	rectangle(180, 195, 340, 230);
}
void v() {
	cleardevice();
	setbkcolor(8);
	setcolor( WHITE);
	rectangle(8, 8, 630, 471);
	settextstyle(7, 0, 4);
	outtextxy(190, 30, "PASSWORD");
	settextstyle(7, 0, 1);
	outtextxy(110, 80, "(RE-ENTER THE PASSWORD TO CONFIRM.)");
	bar(185, 200, 335, 225);
	rectangle(178, 193, 342, 232);
	rectangle(180, 195, 340, 230);
}
void bc() {
	cleardevice();
	setbkcolor(0);
	setcolor( WHITE);
	setfillstyle(SOLID_FILL, WHITE);
	rectangle(8, 8, 630, 471);
	rectangle(12, 12, 626, 467);
}
void snake() {
	arc(221, 260, 100, 305, 10);
	arc(280, 408, 69, 111, 170);
	arc(339, 260, 235, 80, 10);
	arc(280, 430, 71, 109, 170);
	floodfill(300, 255, WHITE);
	setbkcolor(0);
	arc(221, 292, 100, 305, 10);
	arc(280, 440, 69, 111, 170);
	arc(339, 292, 235, 80, 10);
	arc(280, 462, 71, 109, 170);
	floodfill(300, 287, WHITE);
	//tail//
	arc(221, 324, 100, 305, 10);
	arc(280, 472, 69, 111, 170);
	arc(280, 494, 71, 109, 170);
	arc(350, 290, 245, 335, 25);
	arc(335, 277, 328, 349, 45);
	arc(367, 280, 335, 25, 14);
	arc(404, 266, 120, 200, 25);
	arc(396, 259, 50, 105, 15);
	arc(352, 291, 250, 290, 45);
	arc(363, 325, 295, 318, 10);
	arc(361, 312, 294, 317, 23);
	arc(405, 263, 90, 180, 15);
	line(394, 281, 391, 264);
	line(376, 330, 385, 320);
	arc(349, 292, 325, 15, 46);
	floodfill(300, 320, WHITE);
	//head//
	arc(280, 408, 75, 113, 180);
	arc(208, 239, 155, 280, 3);
	arc(330, 226, 255, 320, 8);
	arc(296, 192, 315, 63, 55);
	arc(233, 242, 118, 170, 28);
	arc(244, 246, 103, 132, 38);
	arc(265, 290, 78, 110, 87);
	arc(308, 184, 300, 70, 18);
	line(284, 205, 303, 206);
	arc(304, 185, 270, 312, 20);
	line(295, 135, 319, 142);
	line(295, 135, 275, 137);
	arc(308, 177, 45, 88, 12);
	arc(307, 180, 88, 135, 15);
	arc(274, 157, 275, 330, 25);
	arc(275, 180, 90, 275, 2);
	line(276, 178, 288, 163);
	arc(291, 160, 110, 222, 4);
	arc(265, 150, 55, 145, 16);
	arc(255, 142, 145, 275, 4);
	arc(265, 180, 44, 105, 34);
	floodfill(260, 220, WHITE);
	arc(271, 161, 140, 205, 24);
	arc(274, 165, 125, 190, 25);
	arc(284, 165, 130, 195, 25);
	arc(284, 168, 115, 195, 23);
	floodfill(251, 151, WHITE);
	floodfill(266, 151, WHITE);
	arc(286, 172, 90, 155, 13);
	line(270, 164, 278, 162);
	circle(295, 245, 130);
	circle(295, 245, 145);
	int i;
	delay(800);
	setcolor( YELLOW);
	line(295, 375, 295, 381);
	for (i = 1; i < 361; i++) {
		line(sin((i * 3.14) / 180) * 130 + 295,
				cos((i * 3.14) / 180) * 130 + 245,
				sin((i * 3.14) / 180) * 145 + 295,
				cos((i * 3.14) / 180) * 145 + 245);
		delay(1);
	}
	delay(250);
	rectangle(230, 405, 360, 441);
	arc(360, 423, 270, 90, 18);
	arc(230, 423, 90, 270, 18);
	floodfill(220, 423, YELLOW);
	floodfill(370, 423, YELLOW);
	settextstyle(7, 0, 4);
	outtextxy(244, 403, "START");
}
void sea() {
	cleardevice();
	setbkcolor(8);
	setcolor( WHITE);
	rectangle(8, 8, 630, 471);
	settextstyle(7, 0, 7);
	circle(550, 65, 50);
	line(490, 185, 525, 110);
	line(500, 191, 535, 114);
	line(490, 185, 501, 191);
	circle(550, 65, 45);
	circle(550, 40, 13);
	line(524, 91, 576, 91);
	arc(550, 91, 0, 180, 26);
	floodfill(550, 40, WHITE);
	floodfill(550, 86, WHITE);
	arc(549, 75, 250, 40, 56);
	arc(547, 75, 120, 240, 56);
	floodfill(560, 120, WHITE);
	floodfill(510, 100, WHITE);
	outtextxy(80, 30, "SEARCH.");
	settextstyle(7, 0, 3);
	outtextxy(44, 210, "SEARCH");
	setfillstyle(SOLID_FILL, WHITE);
	bar(149, 217, 419, 237);
	gotoxy(20, 15);
}
void clear(int x1, int y1, int x2, int y2, int p = 1) {
	if (p == 0)
		setcolor(0);
	else
		setcolor(8);
	for (int i = y1; i <= y2; i++)
		line(x1, i, x2, i);
}
void sortn() {
	conc a[30], t;
	int i, j, n = 0;
	ifstream fin("u.dat", ios::binary);
	while (fin.read((char*) &t, sizeof(t))) {
		a[n] = t;
		n++;
	}
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - 1 - i; j++)
			if (strcmp(a[j].name, a[j + 1].name) > 0) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
	fin.close();
	ofstream fout("u.dat", ios::binary);
	for (i = 0; i < n; i++)
		fout.write((char*) &a[i], sizeof(a[i]));
	fout.close();
}
void sorta() {
	ifstream fin("u.dat", ios::binary);
	int n = 0, i, j;
	conc t, b[30];
	nage a[30], k;

	struct date d;
	getdate(&d);
	double day = d.da_day, mon = d.da_mon, yr = d.da_year;
	double present = yr + (mon / 12) + (day / 365);
	while (fin.read((char*) &t, sizeof(t))) {
		b[n] = t;
		a[n].age = present - (t.birth.year + (1.0 * t.birth.month / 12) + (1.0
				* t.birth.date / 365));
		strcpy(a[n].p, t.ph);
		n++;
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n-1-i;j++)
			if (a[j].age < a[j + 1].age) {
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
	ofstream fout("u.dat", ios::binary);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (strcmpi(a[i].p, b[j].ph) == 0) {
				fout.write((char*) &b[j], sizeof(b[j]));
				break;
			}
	fout.close();
}
void screen() {
	cleardevice();
	setbkcolor( BLACK);
	setcolor( WHITE);
	settextstyle(1, 0, 6);
	outtextxy(170, 30, "MECH WINGS");
	setcolor( YELLOW);
	circle(100, 210, 40);
	setcolor(YELLOW);
	circle(100, 210, 50);
	setcolor(YELLOW);

	circle(250, 210, 40);
	setcolor(YELLOW);

	circle(250, 210, 50);
	setcolor(YELLOW);

	circle(400, 210, 40);
	setcolor(YELLOW);

	circle(400, 210, 50);
	setcolor(YELLOW);

	circle(550, 210, 40);
	setcolor(YELLOW);

	circle(550, 210, 50);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(145, 210, YELLOW);
	floodfill(295, 210, YELLOW);
	floodfill(445, 210, YELLOW);
	floodfill(595, 210, YELLOW);
	setcolor(WHITE);
	rectangle(85, 195, 125, 220);
	line(80, 200, 85, 200);
	line(80, 200, 80, 225);
	line(80, 225, 120, 225);
	line(120, 225, 120, 220);

	line(75, 205, 80, 205);
	line(75, 205, 75, 230);
	line(75, 230, 115, 230);
	line(115, 230, 115, 225);

	circle(400, 195, 8);
	line(375, 235, 425, 235);
	arc(400, 235, 0, 180, 25);
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(400, 195, WHITE);
	floodfill(400, 230, WHITE);

	settextstyle(1, 0, 4);
	outtextxy(520, 190, "EXIT");

	settextstyle(1, 0, 3);
	outtextxy(222, 196, "MAPS");

	floodfill(95, 210, WHITE);
	floodfill(95, 228, WHITE);
	floodfill(95, 223, WHITE);

	setcolor(0);
	line(85, 195, 85, 220);
	line(85, 220, 125, 220);
	line(80, 200, 80, 225);
	line(80, 225, 130, 225);
	circle(100, 207, 5);
	circle(112, 207, 5);
	line(90, 202, 90, 212);
}
void monthdisp(int x) {
	if (x == 1)
		cout << "january";
	else if (x == 2)
		cout << "february";
	else if (x == 3)
		cout << "march";
	else if (x == 4)
		cout << "april";
	else if (x == 5)
		cout << "may";
	else if (x == 6)
		cout << "june";
	else if (x == 7)
		cout << "july";
	else if (x == 8)
		cout << "august";
	else if (x == 9)
		cout << "september";
	else if (x == 10)
		cout << "october";
	else if (x == 11)
		cout << "november";
	else if (x == 12)
		cout << "december";
}

void dustbin() {
	setcolor( WHITE);
	rectangle(8, 8, 630, 471);
	circle(560, 80, 57);
	circle(560, 80, 52);
	floodfill(560, 134, WHITE);
	line(535, 115, 585, 115);
	line(535, 115, 533, 60);
	line(585, 115, 587, 60);
	rectangle(530, 50, 590, 60);
	rectangle(550, 45, 570, 50);
	floodfill(550, 55, WHITE);

	rectangle(556, 65, 563, 110);
	rectangle(570, 65, 577, 110);
	rectangle(542, 65, 549, 110);
	floodfill(535, 70, WHITE);
	setcolor(0);
	line(530, 60, 590, 60);
	setcolor(WHITE);
}
void pass() {



	col();
	settextstyle(7, 0, 7);
	outtextxy(55, 20, "MECH WINGS");
	settextstyle(7, 0, 3);
	outtextxy(220, 205, "PASSWORD");
	setfillstyle(SOLID_FILL, WHITE);
	bar(210, 255, 350, 275);
	rectangle(207, 252, 353, 278);
}
void dataread(conc &x) {
	setcolor( WHITE);
	rectangle(8, 8, 630, 471);
	outtextxy(30, 55, "ENTER THE CONTACT DETAILS: ");
	settextstyle(7, 0, 2);
	outtextxy(30, 90, "NAME : ");
	gotoxy(50, 7);
	gets(x.name);
	outtextxy(30, 120, "D.O.B : DATE: ");
	gotoxy(50, 9);
	cin >> x.birth.date;
	outtextxy(100, 150, "MONTH: ");
	gotoxy(50, 11);
	cin >> x.birth.month;
	outtextxy(100, 185, "YEAR: ");
	gotoxy(50, 13);
	cin >> x.birth.year;
	outtextxy(30, 215, "PHONE.NO: ");
	gotoxy(50, 15);
	gets(x.ph);
	outtextxy(28, 245, "ADDRESS : HOUSE.NO: ");
	gotoxy(50, 17);
	cin >> x.add.hno;
	outtextxy(155, 278, "STREET:");
	gotoxy(50, 19);
	gets(x.add.st);
	outtextxy(150, 312, "CITY: ");
	gotoxy(50, 21);
	gets(x.add.city);
	outtextxy(30, 337, "PIN CODE: ");
	gotoxy(50, 23);
	cin >> x.add.pc;
}
void datadisp(conc x) {
	setcolor( WHITE);
	settextstyle(7, 0, 2);
	rectangle(8, 8, 630, 471);
	settextstyle(7, 0, 2);
	outtextxy(30, 90, "NAME : ");
	gotoxy(50, 7);
	puts(x.name);
	outtextxy(30, 120, "D.O.B : DATE: ");
	gotoxy(50, 9);
	cout << x.birth.date;
	outtextxy(100, 150, "MONTH: ");
	gotoxy(50, 11);
	monthdisp(x.birth.month);
	outtextxy(100, 185, "YEAR: ");
	gotoxy(50, 13);
	cout << x.birth.year;
	outtextxy(30, 215, "PHONE.NO: ");
	gotoxy(50, 15);
	puts(x.ph);
	outtextxy(28, 245, "ADDRESS : HOUSE.NO: ");
	gotoxy(50, 17);
	cout << x.add.hno;
	outtextxy(155, 278, "STREET:");
	gotoxy(50, 19);
	puts(x.add.st);
	outtextxy(150, 312, "CITY: ");
	gotoxy(50, 21);
	puts(x.add.city);
	outtextxy(30, 346, "PIN CODE: ");
	gotoxy(50, 23);
	cout << x.add.pc;
}
void fill() {
	setcolor( WHITE);
	for (int i = 0; i <= 3; i++)
		rectangle(232 + i, 132 + i, 368 - i, 268 - i);
}
static int cont = 0;
int database() {
	clrscr();
	int gd = DETECT, gm, ol = 0, i, j;
	char cb, m;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	rof: cleardevice();
	setbkcolor(8);
	cleardevice();
	setcolor( WHITE);
	setfillstyle(SOLID_FILL, WHITE);
	rectangle(8, 8, 630, 471);
	settextstyle(7, 0, 5);
	setbkcolor(8);
	outtextxy(150, 20, "MECH WINGS");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++) {
			circle(170 + j * 20, 210 + i * 20, 2);
			floodfill(170 + j * 20, 210 + i * 20, WHITE);
		}
	settextstyle(1, 0, 1);
	outtextxy(330, 210, "PASSWORD");
	bar(330, 235, 422, 242);
	circle(190, 230, 37);
	circle(190, 230, 40);
	floodfill(229, 230, WHITE);
	circle(374, 230, 55);
	circle(374, 230, 58);
	floodfill(430, 233, WHITE);
	int h = 190, k = 230;

	circle(374, k, 65);
	circle(374, k, 68);
	floodfill(440, 230, WHITE);

	struct date d;
	getdate(&d);
	double day = d.da_day, mon = d.da_mon;

	if (cont == 0) {
		ifstream fin("u.dat", ios::binary);
		conc b;
		settextstyle(7, 0, 3);

		y = 370;
		while (fin.read((char*) &b, sizeof(b)))
			if (b.birth.date == day && b.birth.month == mon) {
				outtextxy(100, y, "TODAY IS");
				outtextxy(textwidth("TODAY IS") + 115, y, b.name);
				outtextxy(textwidth(b.name) + 233, y, "'s BIRTHDAY.");
				y += textheight("IS");
			}
		cont++;
	}

	for (;;) {
		if (h == 190) {
			setcolor(WHITE);
			circle(h, k, 47);
			circle(h, k, 50);
			rectangle(125, 290, 245, 315);
			floodfill(238, 230, WHITE);
			rectangle(122, 287, 248, 318);
			floodfill(247, 316, WHITE);
			settextstyle(1, 0, 2);
			outtextxy(137, 290, "PATTERN");
		} else if (h == 374) {
			setcolor(WHITE);
			circle(h, k, 65);
			circle(h, k, 68);
			rectangle(315, 310, 435, 335);
			floodfill(440, 230, WHITE);
			rectangle(312, 307, 438, 338);
			floodfill(436, 337, WHITE);
			settextstyle(1, 0, 2);
			outtextxy(326, 312, "PASSWORD");
		}

		char p;
		p = getch();
		if (p == 77) {
			if (h != 374) {
				h = h + 184;
				clear(122, 287, 248, 318);
			}
		} else if (p == 75) {
			if (h != 190) {
				h = h - 184;
				clear(312, 307, 438, 338);
			}
		} else if (p == '\r') {
			if (h == 190) {
				cleardevice();
				setbkcolor(8);
				setcolor(WHITE);
				setfillstyle(SOLID_FILL, WHITE);
				rectangle(8, 8, 630, 471);
				settextstyle(7, 0, 5);
				outtextxy(150, 25, "LOCK SCREEN");

				for (i = 1; i <= 3; i++) {
					for (j = 1; j <= 3; j++) {
						circle(j * 50 + 200, i * 50 + 100, 3);
						floodfill(j * 50 + 200, i * 50 + 100, WHITE);
					}
					cout << "\n";
				}
				fill();
				rectangle(300, 404, 318, 426);
				circle(309, 413, 3);
				setfillstyle(SOLID_FILL, WHITE);
				floodfill(309, 413, WHITE);
				line(308, 415, 308, 420);
				line(310, 415, 310, 420);
				line(308, 420, 310, 420);
				floodfill(309, 417, WHITE);
				line(300, 404, 300, 400);
				line(303, 404, 303, 400);
				line(318, 404, 318, 400);
				line(315, 404, 315, 400);
				arc(309, 400, 0, 180, 9);
				arc(309, 400, 0, 180, 6);
				floodfill(301, 403, WHITE);
				circle(309, 409, 27);
				circle(309, 409, 30);
				floodfill(309, 381, WHITE);
				rectangle(302, 406, 316, 424);
				floodfill(309, 425, WHITE);
				circle(43, 409, 7);
				floodfill(43, 409, WHITE);
				circle(579, 409, 7);
				floodfill(579, 409, WHITE);
				for (i = 0; i < 232; i++) {
					bar(50, 409, 50 + i, 411);
					delay(10);
				}
				don: {
					als: cleardevice();
					pa = 0;
				}
				az:

				setbkcolor(8);
				settextstyle(7, 0, 5);
				outtextxy(150, 25, "LOCK SCREEN");
				setcolor(WHITE);
				setfillstyle(SOLID_FILL, WHITE);
				rectangle(8, 8, 630, 471);
				fill();
				rectangle(300, 404, 318, 426);
				circle(309, 413, 3);
				setfillstyle(SOLID_FILL, WHITE);
				floodfill(309, 413, WHITE);
				line(308, 415, 308, 420);
				rectangle(8, 8, 630, 471);
				line(310, 415, 310, 420);
				line(308, 420, 310, 420);
				floodfill(309, 417, WHITE);
				line(300, 404, 300, 400);
				line(303, 404, 303, 400);
				line(318, 404, 318, 400);
				line(315, 404, 315, 400);
				arc(309, 400, 0, 180, 9);
				arc(309, 400, 0, 180, 6);
				floodfill(301, 403, WHITE);
				circle(309, 409, 27);
				circle(309, 409, 30);
				floodfill(309, 381, WHITE);
				rectangle(302, 406, 316, 424);
				floodfill(309, 425, WHITE);
				circle(43, 409, 7);
				floodfill(43, 409, WHITE);
				circle(579, 409, 7);
				floodfill(579, 409, WHITE);
				bar(50, 409, 282, 411);
				int a[40];
				for (i = 1; i <= 3; i++) {
					for (j = 1; j <= 3; j++) {
						circle(j * 50 + 200, i * 50 + 100, 3);
						floodfill(j * 50 + 200, i * 50 + 100, WHITE);
					}
					cout << "\n";
				}
				int t = 0, x = 250;
				y = 150;
				k = 0;
				int q, w;
				for (;;) {
					circle(x, y, 5);

					char c = getch();
					if (c == 72) {
						if (y != 150) {
							setcolor(8);
							circle(x, y, 5);
							setcolor(WHITE);
							y -= 50;
							circle(x, y, 5);
						}
					} else if (c == 80) {
						if (y != 250) {
							setcolor(8);
							circle(x, y, 5);
							setcolor(WHITE);
							y += 50;
							circle(x, y, 5);
						}
					} else if (c == 75) {
						if (x != 250) {
							setcolor(8);
							circle(x, y, 5);
							setcolor(WHITE);
							x -= 50;
							circle(x, y, 5);
						}
					} else if (c == 77) {
						if (x != 350) {
							setcolor(8);
							circle(x, y, 5);
							setcolor(WHITE);
							x += 50;
							circle(x, y, 5);
						}
					} else if (c == ' ') {
						q = x;
						w = y;
						for (;;) {
							char f = getch();
							setcolor(WHITE);
							if (f == 72) {
								if (y != 150) {
									for (int i = 0; i <= 50; i++) {
										line(x, y, x, y - i);
										delay(10);
									}
									y -= 50;
									circle(x, y, 5);
									a[k] = 1;
									k++;
								}
							} else if (f == 80) {
								if (y != 250) {
									for (int i = 0; i <= 50; i++) {
										line(x, y, x, y + i);
										delay(10);
									}
									y += 50;
									circle(x, y, 5);
									a[k] = 2;
									k++;
								}
							} else if (f == 75) {
								if (x != 250) {
									for (int i = 0; i <= 50; i++) {
										line(x, y, x - i, y);
										delay(10);
									}
									x -= 50;
									circle(x, y, 5);
									a[k] = 3;
									k++;
								}
							} else if (f == 77) {
								if (x != 350) {
									for (int i = 0; i <= 50; i++) {
										line(x, y, x + i, y);
										delay(10);
									}
									x += 50;
									circle(x, y, 5);
									a[k] = 4;
									k++;
								}
							} else if (f == ' ')
								break;
							else if (f == 83)
								goto don;
							else if (f == 8) {
								if (k > 0) {
									if (a[k - 1] == 1) {
										if (!(q == x && w == y)) {
											setcolor(8);
											circle(x, y, 5);
										}
										setcolor(0);
										for (int i = 4; i <= 46; i++) {
											line(x, y + 4, x, y + i);
											delay(10);
										}
										k--;
										y = y + 50;
									} else if (a[k - 1] == 2) {
										if (!(q == x && w == y)) {
											setcolor(8);
											circle(x, y, 5);
										}
										setcolor(0);
										for (int i = 4; i <= 46; i++) {
											line(x, y - 4, x, y - i);
											delay(10);
										}
										k--;
										y = y - 50;
									} else if (a[k - 1] == 3) {
										if (!(q == x && w == y)) {
											setcolor(8);
											circle(x, y, 5);
										}
										setcolor(0);
										for (int i = 4; i <= 46; i++) {
											line(x + 4, y, x + i, y);
											delay(10);
										}
										k--;
										x = x + 50;
									} else if (a[k - 1] == 4) {
										if (!(q == x && w == y)) {
											setcolor(8);
											circle(x, y, 5);
										}
										setcolor(0);
										for (int i = 4; i <= 46; i++) {
											line(x - 4, y, x - i, y);
											delay(10);
										}
										k--;
										x = x - 50;
									}

								}//if(k>0)
							}//if(f==8)
						}//for(;;)in
						break;
					} else if (c == 83)
						goto don;
				} //ut<<x<<" "<<y<<" "<<k;getch();exit(0);
				ifstream fin("pat.dat", ios::binary);
				pat m;
				fin.read((char*) &m, sizeof(m));

				for (int p = 0; p < m.n; p++)
					if (a[p] != m.a[p])
						t++;
				if (y != m.y || k != m.n || x != m.x)
					t++;
				if (t) {
					pa++;
					if (pa < 3) {
						settextstyle(7, 0, 2);
						outtextxy(205, 300, "WRONG PATTERN");
						delay(1200);
						cleardevice();
						setbkcolor(8);
						settextstyle(7, 0, 5);
						outtextxy(150, 25, "LOCK SCREEN");
						setcolor(WHITE);
						setfillstyle(SOLID_FILL, WHITE);
						rectangle(8, 8, 630, 471);
						goto az;
					} else {
						ol++;
						if (ol > 2) {
							cleardevice();
							setbkcolor(8);
							setcolor(WHITE);
							rectangle(8, 8, 630, 471);
							settextstyle(10, 0, 3);
							outtextxy(99, 60, "INTRUDER ALERT!!!");
							settextstyle(10, 0, 1);
							outtextxy(12, 400,
									"<ALL THE THE DATA FILES ARE DELETED>");
							settextstyle(10, 0, 5);
							setcolor( RED);
							outtextxy(50, 200, "ACCESS DENIED");
							remove("u.dat");
							remove("original.dat");remove("trash.dat");
							delay(2800);
							return (1);
						} else {
							settextstyle(1, 0, 1);
							outtextxy(93, 289,
									"ENTERED INCORRECT PATTERN CONSEQUTIVELY (3)TIMES");
							outtextxy(168, 315, "WAIT FOR (");
							for (int z = 10; z >= 0; z--) {
								gotoxy(34, 21);
								cout << z;
								outtextxy(281, 315, ") SECONDS.");
								delay(900);
							}
							goto als;
						}
					}
				}
				int d, f;
				d = m.x;
				f = m.y;
				cleardevice();
				rectangle(300, 404, 318, 426);
				setfillstyle(SOLID_FILL, WHITE);
				circle(309, 413, 3);
				settextstyle(7, 0, 5);
				outtextxy(150, 25, "LOCK SCREEN");
				rectangle(235, 135, 365, 265);
				rectangle(232, 132, 368, 268);
				floodfill(234, 134, WHITE);
				for (i = 1; i <= 3; i++) {
					for (j = 1; j <= 3; j++) {
						circle(j * 50 + 200, i * 50 + 100, 3);
						floodfill(j * 50 + 200, i * 50 + 100, WHITE);
					}
					cout << "\n";
				}
				rectangle(8, 8, 630, 471);
				circle(d, f, 5);
				for (i = m.n - 1; i >= 0; i--)
					if (m.a[i] == 2) {
						circle(d, f - 50, 5);
						line(d, f, d, f - 50);
						f = f - 50;
					} else if (m.a[i] == 1) {
						circle(d, f + 50, 5);
						line(d, f, d, f + 50);
						f += 50;
					} else if (m.a[i] == 4) {
						circle(d - 50, f, 5);
						line(d, f, d - 50, f);
						d -= 50;
					} else if (m.a[i] == 3) {
						circle(d + 50, f, 5);
						line(d, f, d + 50, f);
						d += 50;
					}
				floodfill(309, 413, WHITE);
				line(308, 415, 308, 420);
				line(310, 415, 310, 420);
				line(308, 420, 310, 420);
				floodfill(309, 417, WHITE);
				line(300, 404, 300, 400);
				line(303, 404, 303, 400);
				line(315, 398, 317, 397);
				arc(309, 400, 20, 180, 9);
				arc(309, 400, 20, 180, 6);
				floodfill(301, 403, WHITE);
				circle(309, 409, 27);
				circle(309, 409, 30);
				floodfill(309, 381, WHITE);
				rectangle(302, 406, 316, 424);
				floodfill(309, 425, WHITE);
				circle(43, 409, 7);
				floodfill(43, 409, WHITE);
				circle(579, 409, 7);
				floodfill(579, 409, WHITE);
				circle(579, 409, 7);
				floodfill(579, 409, WHITE);
				bar(50, 409, 282, 411);
				for (i = 0; i <= 233; i++) {
					bar(339, 409, 339 + i, 411);
					delay(10);
				}
				fin.close();
			}//if(h=190)
			else if (h == 374) {
				clrscr();
				int gm, h = 0;
				rdf: int y = 0;
				op: pass();
				char t[50];
				ifstream fin("pat.dat", ios::binary);
				pat p;
				fin.read((char*) &p, sizeof(p));
				fin.close();
				int k = 0, i, j = 0;
				for (;;) {
					char c = getch();
					if (c != '\r') {
						if (c == char(8)) {
							j = 0;
							pass();
							setcolor(8);
							for (i = 0; i < k - 1; i++) {
								outtextxy(212 + j, 255, "*");
								j += 10;
							}
							k--;
						}

						else if (c == 72) {
							j = 0;
							pass();
							setcolor(8);
							t[k] = '\0';
							outtextxy(212, 250, t);
							delay(1700);
							pass();
							setcolor(8);
							for (i = 0; i < k - 1; i++) {
								outtextxy(212 + j, 255, "*");
								j += 10;
							}
							k--;
						}

						else {
							setcolor(8);
							outtextxy(212 + j, 255, "*");
							t[k] = c;
							k++;
							j += 10;
						}
					}

					else
						break;
				}
				t[k] = '\0';
				setcolor(WHITE);
				if (strcmp(t, p.pass) != 0) {
					y++;
					if (y < 3) {
						settextstyle(7, 0, 1);
						outtextxy(198, 298, "(wrong password)");
						delay(1000);

						goto op;
					} else {
						h++;
						if (h > 2) {
							cleardevice();
							setbkcolor(8);
							setcolor(WHITE);
							rectangle(8, 8, 630, 471);
							settextstyle(10, 0, 3);
							outtextxy(99, 60, "INTRUDER ALERT!!!");
							settextstyle(10, 0, 1);
							outtextxy(12, 400,
									"<ALL THE THE DATA FILES ARE DELETED>");
							settextstyle(10, 0, 5);
							setcolor( RED);
							outtextxy(50, 200, "ACCESS DENIED");
							remove("u.dat");
							remove("original.dat");remove("trash.dat");
							delay(2800);
							return (1);
						} else {
							setcolor(WHITE);
							settextstyle(1, 0, 1);
							outtextxy(55, 350,
									"ENTERED INCORRECT PASSWORD CONSEQUTIVELY (3)TIMES");
							outtextxy(55, 375, "WAIT FOR (");
							for (int z = 10; z >= 0; z--) {
								gotoxy(20, 25);
								cout << z;
								outtextxy(168, 375, ") SECONDS.");
								delay(900);
							}
							goto rdf;
						}
					}
				}
				fin.close();
			}//if(h==374)

			l: cleardevice();
			setbkcolor(8);
			setcolor(WHITE);
			delay(500);
			char c;
			int x = 8;
			y = 159;
			cleardevice();
			settextstyle(7, 0, 5);
			rectangle(8, 8, 630, 471);
			outtextxy(70, 30, "PERSONAL DATABASE");
			rectangle(325, 185, 585, 345);
			line(325, 185, 335, 175);
			line(335, 175, 595, 175);
			line(585, 185, 595, 175);
			line(595, 175, 595, 335);
			line(330, 180, 590, 180);
			line(585, 345, 595, 335);
			line(590, 180, 590, 340);
			line(332, 178, 592, 178);
			rectangle(330, 191, 579, 339);
			line(592, 178, 592, 338);
			line(328, 182, 588, 182);
			rectangle(335, 201, 435, 329);
			line(588, 182, 588, 342);
			setfillstyle(SOLID_FILL, WHITE);
			bar(441, 201, 571, 215);
			bar(441, 220, 571, 234);
			bar(441, 239, 571, 253);
			bar(441, 258, 571, 272);
			bar(441, 277, 571, 291);
			bar(441, 296, 571, 310);
			bar(441, 315, 571, 329);
			setfillstyle(SOLID_FILL, WHITE);
			floodfill(350, 187, WHITE);
			circle(385, 250, 20);
			line(345, 320, 425, 320);
			floodfill(385, 250, WHITE);
			arc(385, 320, 0, 180, 40);
			settextstyle(7, 0, 4);
			floodfill(380, 310, WHITE);
			outtextxy(10, 120, "MENU:");
			settextstyle(7, 0, 3);
			outtextxy(10, 160, "(1). ADD CONTACT");
			outtextxy(10, 190, "(2). REMOVE CONTACT");
			outtextxy(10, 220, "(3). VIEW CONTACTS");
			outtextxy(10, 250, "(4). SEARCH CONTACT");
			outtextxy(10, 280, "(5). FAVOURITES");
			outtextxy(10, 310, "(6). EDIT CONTACT");
			outtextxy(10, 340, "(7). TRASH");
			outtextxy(10, 370, "(8). SECURITY");
			outtextxy(10, 400, "(9). EXIT");
			for (;;) {
				setcolor(WHITE);
				rectangle(x, y, x + 275, y + 30);
				char c;
				c = getch();
				if (c == 72) {
					if (y != 159) {
						setcolor(8);
						line(x, y, x + 275, y);
						line(x + 275, y, x + 275, y + 30);
						line(x + 275, y + 30, x, y + 30);
						y -= 30;
					} else {
						setcolor(8);
						line(x, y, x + 275, y);
						line(x + 275, y, x + 275, y + 30);
						line(x + 275, y + 30, x, y + 30);
						x = 8;
						y = 399;
					}
				} else if (c == 80) {
					if (y != 399) {
						setcolor(8);
						line(x, y, x + 275, y);
						line(x + 275, y, x + 275, y + 30);
						line(x + 275, y + 30, x, y + 30);
						y += 30;
					} else {
						setcolor(8);
						line(x, y, x + 275, y);
						line(x + 275, y, x + 275, y + 30);
						line(x + 275, y + 30, x, y + 30);
						x = 8;
						y = 159;
					}
				} else if (c == '\r') {
					if (y == 159) {
						rep: cleardevice();
						setbkcolor(8);
						setcolor(WHITE);
						rectangle(8, 8, 630, 471);
						circle(540, 100, 70);
						circle(540, 100, 65);
						circle(546, 75, 20);
						floodfill(540, 34, WHITE);
						line(510, 140, 585, 140);
						floodfill(546, 70, WHITE);
						arc(547, 140, 0, 180, 37);
						floodfill(540, 130, WHITE);
						bar(495, 80, 502, 117);
						bar(480, 95, 517, 102);
						settextstyle(7, 0, 3);
						int m, i;
						ofstream fout("u.dat", ios::binary | ios::app), fo(
								"original.dat", ios::binary | ios::app);
						outtextxy(30, 20, "NO. OF CONTACTS TO BE ADDED: ");
						gotoxy(56, 4);
						cin >> m;
						char ao;
						for (i = n; i < m + n; i++) {
							circle(540, 100, 70);
							circle(540, 100, 65);
							circle(546, 75, 20);
							floodfill(540, 34, WHITE);
							line(510, 140, 585, 140);
							floodfill(546, 70, WHITE);
							arc(547, 140, 0, 180, 37);
							floodfill(540, 130, WHITE);
							bar(495, 80, 502, 117);
							bar(480, 95, 517, 102);
							setbkcolor(8);
							dataread(co[i]);
							settextstyle(7, 0, 2);
							outtextxy(30, 370,
									"ADD THIS CONTACT TO FAVOURITES?(Y/N)");
							gotoxy(50, 25);
							cin >> co[i].fav;
							if (co[i].fav == 'y' || co[i].fav == 'Y')
								g++;
							fout.write((char*) &co[i], sizeof(co[i]));
							fo.write((char*) &co[i], sizeof(co[i]));
							cleardevice();
						}
						fout.close();
						cont = 0;
						goto l;
					} else if (y == 189) {
						ifstream fin("u.dat", ios::binary);
						fin.seekg(0, ios::end);
						if (fin.tellg() == 0 || !fin) {
							cleardevice();
							setbkcolor(8);
							setcolor(WHITE);
							rectangle(8, 8, 630, 471);
							settextstyle(7, 0, 4);
							dustbin();
							outtextxy(100, 200, "NO CONTACTS AVAILABLE.");
							getch();
						} else {
							cleardevice();
							setbkcolor(8);
							setcolor(WHITE);
							rectangle(8, 8, 630, 471);
							del: settextstyle(7, 0, 3);
							int m, i;
							dustbin();
							outtextxy(12, 62, "NO. OF CONTACTS TO BE REMOVED: ");
							gotoxy(58, 4);
							cin >> m;
							char c[50][50];
							fin.seekg(0, ios::beg);
							outtextxy(12, 110,
									"ENTER THE NAMES TO BE DELETED: ");
							fin.close();
							int w = 155, q = 0;
							int a[30], n = 0, k = 0;
							char y[30][30];
							conc t;
							for (i = 0; i < m; i++) {
								gotoxy(27, 11 + i * 2);
								gets(c[i]);
								k = 0;
								a[i] = 0;
								fin.open("u.dat", ios::binary);
								while (fin.read((char*) &t, sizeof(t)))
									if (strcmpi(t.name, c[i]) == 0)
										k++;
								a[n] = k;
								if (k > 1) {
									settextstyle(1, 0, 1);
									outtextxy(460, w, "phone number");
									bar(310, w, 450, w + 20);
									gotoxy(41, 11 + i * 2);
									gets(y[q]);
									q++;
								}
								n++;
								w += 30;
								fin.close();
							}
							settextstyle(1, 0, 1);
							cleardevice();
							setbkcolor(8);
							setcolor(WHITE);
							rectangle(8, 8, 630, 471);
							outtextxy(30, 90,
									"CONFIRMATION FOR REMOVAL OF CONTACTS WITH NAMES.(y/n)");
							for (int u = 0; u < m; u++) {
								gotoxy(30, 10 + u);
								puts(c[u]);
							}
							gotoxy(57, 8);
							char v;
							v = getch();
							int r = 0, j = 0, jk = 0;
							if (v == 'y' || v == 'Y') {
								k = 0;
								for (i = 0; i < m; i++) {
									j = 0;
									jk = 0;
									fin.open("u.dat", ios::binary);
									if (!a[i]) {
										outtextxy(20, 200 + r * 30,
												"CONTACT ( ");
										outtextxy(28 + textwidth("CONTACT ( "),
												200 + r * 30, c[i]);
										outtextxy(
												36 + textwidth("CONTACT ( ")
														+ textwidth(c[i]),
												200 + r * 30, ") NOT FOUND");
										r++;
									} else if (a[i] > 1) {
										while (fin.read((char*) &t, sizeof(t)))
											if (strcmpi(t.ph, y[k]) == 0)
												j++;
										if (!j) {
											outtextxy(20, 200 + r * 30,
													"CONTACT ( ");
											outtextxy(
													28
															+ textwidth(
																	"CONTACT ( "),
													200 + r * 30, c[i]);
											outtextxy(
													36
															+ textwidth(
																	"CONTACT ( ")
															+ textwidth(c[i]),
													200 + r * 30, ") NOT FOUND");
											r++;}
										else{ outtextxy(20, 200 + r * 30,
													"CONTACT ( ");
											outtextxy(
													28
															+ textwidth(
																	"CONTACT ( "),
													200 + r * 30, c[i]);
											outtextxy(
													36
															+ textwidth(
																	"CONTACT ( ")
															+ textwidth(c[i]),
													200 + r * 30, ") DELETED");
											r++;  }
										k++;
									} else if (a[i] == 1) {
										while (fin.read((char*) &t, sizeof(t)))
											if (strcmpi(t.name, c[i]) == 0)
												jk++;
										if (!jk) {
											outtextxy(20, 200 + r * 30,
													"CONTACT( ");
											outtextxy(
													28 + textwidth("CONTACT( "),
													200 + r * 30, c[i]);
											outtextxy(
													36 + textwidth("CONTACT( ")
															+ textwidth(c[i]),
													200 + r * 30, ") NOT FOUND");
											r++;  }
									       else{ outtextxy(20, 200 + r * 30,
													"CONTACT ( ");
											outtextxy(
													28
															+ textwidth(
																	"CONTACT ( "),
													200 + r * 30, c[i]);
											outtextxy(
													36
															+ textwidth(
																	"CONTACT ( ")
															+ textwidth(c[i]),
													200 + r * 30, ") DELETED");
											r++; }
									}
									fin.close();
								}
								k = 0;
								fin.close();
								ofstream fout,fout1("trash.dat",ios::binary|ios::app);
								for (i = 0; i < m; i++) {
									fout.open("t.dat", ios::binary);
									fin.open("u.dat", ios::binary);
									while (fin.read((char*) &t, sizeof(t)))
										if (a[i] > 1) {
											if (strcmpi(t.ph, y[k]) != 0)
												fout.write((char*) &t,sizeof(t));
											else{fout1.write((char*) &t,sizeof(t));}

										} else {
											if (strcmpi(c[i], t.name) != 0)
												fout.write((char*) &t,sizeof(t));

											else{fout1.write((char*) &t,sizeof(t));}
										}
									fin.close();
									fout.close();
									remove("u.dat");
									rename("t.dat", "u.dat");
									k++;
								}//for
								fin.close();
								fout.close();fout1.close();
								k = 0;
								for (i = 0; i < m; i++) {
									fout.open("t.dat", ios::binary);
									fin.open("original.dat", ios::binary);
									while (fin.read((char*) &t, sizeof(t)))
										if (a[i] > 1) {
											if (strcmpi(t.ph, y[k]) != 0)
												fout.write((char*) &t,
														sizeof(t));
										} else {
											if (strcmpi(c[i], t.name) != 0)
												fout.write((char*) &t,
														sizeof(t));
										}
									fin.close();
									fout.close();
									remove("original.dat");
									rename("t.dat", "original.dat");
									k++;
								}//for
								fin.close();
								fout.close();
							}//v
							outtextxy(30, 410,
									"DO YOU WANT TO CONTINUE WITH DELETION?:(y/n)");
							char g;
							gotoxy(50, 20);
							cin >> g;
							if (g == 'y' || g == 'Y') {
								cleardevice();
								setbkcolor(8);
								setcolor(WHITE);
								rectangle(8, 8, 630, 471);
								goto del;
							}
						}
						goto l;
					} else if (y == 219) {
						cleardevice();
						setbkcolor(8);
						setcolor(WHITE);
						rectangle(8, 8, 630, 471);
						settextstyle(7, 0, 1);
						circle(525, 100, 65);
						circle(525, 100, 60);
						setfillstyle(SOLID_FILL, WHITE);
						floodfill(525, 38, WHITE);
						circle(525, 72, 15);
						floodfill(525, 70, WHITE);
						line(485, 135, 560, 135);
						arc(523, 135, 0, 180, 37);
						floodfill(523, 130, WHITE);
						ifstream fin("u.dat", ios::binary);
						fin.seekg(0, ios::end);
						if (fin.tellg() == 0 || !fin) {
							settextstyle(7, 0, 6);
							outtextxy(50, 15, "DATABASE.");
							settextstyle(7, 0, 4);
							outtextxy(100, 200, "NO CONTACTS AVAILABLE.");
							getch();
						} else {
							fin.seekg(0);
							cl: col();
							conc t;
							setcolor(WHITE);
							circle(525, 100, 65);
							circle(525, 100, 60);
							setfillstyle(SOLID_FILL, WHITE);
							floodfill(525, 38, WHITE);
							circle(525, 72, 15);
							floodfill(525, 70, WHITE);
							line(485, 135, 560, 135);
							arc(523, 135, 0, 180, 37);
							floodfill(523, 130, WHITE);
							settextstyle(7, 0, 6);
							outtextxy(150, 15, "DATABASE.");
							settextstyle(7, 0, 3);
							outtextxy(110, 185, "VIEW ALL CONTACTS.");
							outtextxy(110, 235, "SORT BY.");
							outtextxy(110, 285, "EXIT.");
							int x = 100, y = 200;
							fin.close();
							for (;;) {
								setcolor(WHITE);
								circle(x, y, 5);
								circle(x, y, 3);
								floodfill(x, y, WHITE);
								char c = getch();
								if (c == 72) {
									clear(x - 5, y - 5, x + 5, y + 5);

									if (y == 200)
										y = 300;
									else
										y -= 50;
								} else if (c == 80) {
									clear(x - 5, y - 5, x + 5, y + 5);
									if (y == 300)
										y = 200;
									else
										y += 50;
								}

								else if (c == '\r') {
									if (y == 200) {
										ifstream f("sort.txt");
										char p;
										f.get(p);
										if (p == 'd')
											fin.open("original.dat",
													ios::binary);
										else if (p == 'a' || p == 'n')
											fin.open("u.dat", ios::binary);

										while (fin.read((char*) &t, sizeof(t))) {
											cleardevice();
											setfillstyle(SOLID_FILL, WHITE);
											circle(525, 100, 65);
											settextstyle(7, 0, 6);
											outtextxy(50, 15, "DATABASE.");
											if (t.fav == 'y' || t.fav == 'Y') {
												line(342, 40, 355, 40);
												line(355, 40, 360, 30);
												line(360, 30, 365, 40);
												line(365, 40, 378, 40);
												line(378, 40, 368, 48);
												line(368, 48, 377, 60);
												line(377, 60, 360, 53);
												circle(361, 48, 25);
												line(360, 53, 343, 60);
												line(343, 60, 352, 48);
												line(352, 48, 342, 40);
												floodfill(360, 45, WHITE);
											}
											circle(525, 100, 60);
											setfillstyle(SOLID_FILL, WHITE);
											floodfill(525, 38, WHITE);
											circle(525, 72, 15);
											floodfill(525, 70, WHITE);
											line(485, 135, 560, 135);
											arc(523, 135, 0, 180, 37);
											floodfill(523, 130, WHITE);
											setbkcolor(8);
											datadisp(t);
											getch();
										}
										goto cl;
									} else if (y == 250) {
										settextstyle(7, 0, 2);
										outtextxy(240, 235, "NAME");
										outtextxy(240, 260, "AGE");
										outtextxy(240, 285, "DEFAULT");
										int k;
										char a;
										ifstream fin("sort.txt");
										fin.get(a);
										if (a == 'n')
											k = 250;
										else if (a == 'a')
											k = 275;
										else if (a == 'd')
											k = 300;
										fin.close();
										ofstream fout("sort.txt");
										for (;;) {
											setcolor(WHITE);
											circle(230, k, 4);
											circle(230, k, 2);
											floodfill(230, k, WHITE);
											char s = getch();
											if (s == 72) {
												clear(226, k - 4, 234, k + 4);
												if (k == 250)
													k = 300;
												else
													k -= 25;
												setcolor(WHITE);
												circle(230, k, 2);
												floodfill(230, k, WHITE);
											} else if (s == 80) {
												clear(226, k - 4, 234, k + 4);
												if (k == 300)
													k = 250;
												else
													k += 25;
												setcolor(WHITE);
												circle(230, k, 2);
												floodfill(230, k, WHITE);
											} else if (s == '\r') {
												if (k == 250) {
													sortn();
													fout.put('n');
												} else if (k == 275) {
													sorta();
													fout.put('a');
												} else if (k == 300)
													fout.put('d');
												clear(220, 220, 340, 350);
												fout.close();
												break;
											}//s=='\r'
										}//inner for(;;)
									}//y==130
									else if (y == 300)
										goto l;
								}
							}
						}
						goto l;
					}

					else if (y == 249) {
						sea: cleardevice();
						setbkcolor(8);
						setcolor(WHITE);
						rectangle(8, 8, 630, 471);
						settextstyle(7, 0, 7);
						circle(550, 65, 50);
						line(490, 185, 525, 110);
						line(500, 191, 535, 114);
						line(490, 185, 501, 191);
						circle(550, 65, 45);
						circle(550, 40, 13);
						line(524, 91, 576, 91);
						arc(550, 91, 0, 180, 26);
						floodfill(550, 40, WHITE);
						floodfill(550, 86, WHITE);
						arc(549, 75, 250, 40, 56);
						arc(547, 75, 120, 240, 56);
						floodfill(560, 120, WHITE);
						floodfill(510, 100, WHITE);
						outtextxy(80, 30, "SEARCH.");
						ifstream fin("u.dat", ios::binary);
						fin.seekg(0, ios::end);
						if (fin.tellg() == 0 || !fin) {
							settextstyle(7, 0, 4);
							outtextxy(100, 200, "NO CONTACTS AVAILABLE.");

							getch();
						} else {
							settextstyle(7, 0, 3);
							outtextxy(44, 210, "SEARCH");
							setfillstyle(SOLID_FILL, WHITE);
							bar(149, 217, 419, 237);
							gotoxy(20, 15);
							char w[20];
							fin.close();
							cleardevice();
							sea();
							int k = 0, i, j = 0, ct = 0, t;
							int h = 146, e = 245;
							conc p;
							for (;;) {
								char c = getch();

								if (c == char(8)) {
									j = 0;
									ct = 0;
									t = 0;
									sea();
									setcolor(8);
									for (i = 0; i < k - 1; i++, j += 10) {
										moveto(188 + j, 202);
										cout << w[i];
									}
									k--;
								}

								else if (c == 27)
									goto l;

								else if (c == 72) {
									setcolor(8);
									rectangle(h, e, h + 276, e + 26);
									if (e == 245) {
										e = (ct - 1) * 26 + 245;
										t = ct;
									} else {
										e -= 26;
										t--;
									}
									setcolor(WHITE);
									rectangle(h, e, h + 276, e + 26);
								}

								else if (c == 80) {
									setcolor(8);
									rectangle(h, e, h + 276, e + 26);
									if (e == (ct - 1) * 26 + 245) {
										e = 245;
										t = 1;
									} else if (t == 0)
										t++;
									else {
										e += 26;
										t++;
									}
									setcolor(WHITE);
									rectangle(h, e, h + 276, e + 26);
								}

								else if (c == '\r') {
									fin.open("u.dat", ios::binary);
									int r = 1;
									while (fin.read((char*) &p, sizeof(p))) {
										int v = 0;
										for (int m = 0; m < k; m++)
											if (p.name[m] != w[m])
												v++;

										if (v == 0 && r == t) {
											cleardevice();
											setbkcolor(8);
											setcolor(WHITE);
											rectangle(8, 8, 630, 471);
											settextstyle(7, 0, 4);
											circle(550, 65, 50);
											line(490, 185, 530, 110);
											line(500, 191, 535, 114);
											line(490, 185, 501, 191);
											circle(550, 65, 45);
											arc(548, 75, 250, 40, 57);
											arc(549, 75, 120, 240, 58);
											floodfill(585, 115, WHITE);
											floodfill(520, 115, WHITE);
											circle(550, 40, 13);
											line(524, 91, 576, 91);
											arc(550, 91, 0, 180, 26);
											floodfill(550, 40, WHITE);
											floodfill(550, 87, WHITE);
											outtextxy(80, 30, "SEARCH.");
											if (p.fav == 'y' || p.fav == 'Y') {
												line(342, 40, 355, 40);
												line(355, 40, 360, 30);
												line(360, 30, 365, 40);
												line(365, 40, 378, 40);
												line(378, 40, 368, 48);
												line(368, 48, 377, 60);
												line(377, 60, 360, 53);
												circle(361, 48, 25);
												line(360, 53, 343, 60);
												line(343, 60, 352, 48);
												line(352, 48, 342, 40);
												floodfill(360, 45, WHITE);
											}
											settextstyle(7, 0, 2);
											datadisp(p);
											getch();
											break;

										}//if(!v&&r==t)
										else if (v == 0)
											r++;

									}//while

									break;
								} //else if(c=='\r')


								else {
									clear(149, 248, 419, 400);
									setcolor(8);
									ct = 0;
									moveto(188 + j, 202);
									if (isalnum(c)) {
										w[k] = c;
										k++;
										cout << c;
										j += 10;
										t = 0;
									}
									int v = 0, y = 248;
									fin.open("u.dat", ios::binary);
									conc p;
									while (fin.read((char*) &p, sizeof(p))) {
										v = 0;
										for (int m = 0; m < k; m++)
											if (p.name[m] != w[m])
												v++;
										if (!v) {
											ct++;
											setcolor(WHITE);
											bar(149, y, 419, y + 20);
											setcolor(8);
											outtextxy(152, y - 4, p.name);
											y += 26;
										}
									}
									fin.close();
								}

							}

							fin.close();
							settextstyle(7, 0, 1);
							char n;
							outtextxy(10, 400,
									"DO YOU WANT TO CONTINUE WITH SEARCHING?(Y/N)");
							gotoxy(68, 25);
							cin >> n;
							if (n == 'y' || n == 'Y')
								goto sea;
						}
						goto l;
					}

					else if (y == 279) {
						ifstream fin("u.dat", ios::binary);
						fin.seekg(0, ios::end);

						if (fin.tellg() == 0 || !fin) {
							col();

							settextstyle(7, 0, 4);
							outtextxy(100, 200, "NO CONTACTS AVAILABLE.");
							getch();
						} else {
							we: cleardevice();
							setbkcolor(8);
							setcolor(WHITE);
							rectangle(8, 8, 630, 471);
							settextstyle(7, 0, 2);
							outtextxy(60, 30, "FAVOURITES.");
							outtextxy(30, 140,
									"(1). ADD CONTACTS TO FAVOURITES.");
							outtextxy(30, 190,
									"(2). DISPLAY ALL FAVOURITE CONTACTS.");
							outtextxy(30, 250,
									"(3).REMOVE CONTACTS FROM FAVOURITES.");
							outtextxy(30, 300, "(4).EXIT.");
							outtextxy(30, 350, "ENTER YOUR CHOICE:");
							fin.seekg(0, ios::beg);
							gotoxy(6, 24);
							int ch, i;
							cin >> ch;
							cleardevice();
							setbkcolor(8);
							setcolor(WHITE);
							rectangle(8, 8, 630, 471);
							conc ul;
							while (fin.read((char*) &ul, sizeof(ul)))
								if (ul.fav == 'y' || ul.fav == 'Y') {
									g++;
									break;
								}
							fin.close();
							if (ch == 1) {

								char a[30][30],ph[40][40];
								 int p[40],m=0,y=234,x=0;
								 ifstream fin("u.dat",ios::binary);
								 conc t;

								 int n;
								 settextstyle(7,0,3);
								 outtextxy(30,33,"NO. OF CONTACTS TO BE ADDED: ");
								 gotoxy(56,4);
								 cin>>n;
								 outtextxy(30,70,"ENTER THE NAMES OF THE CONTACT(S):");

								 for(i=0;i<n;i++,m++,y++)
								 {
								 fin.seekg(0,ios::beg);
								 p[m]=0;
								 gotoxy(10,16+i*2);
								 gets(a[i]);

								 while(fin.read((char*)&t,sizeof(t)))
								 if(strcmpi(a[i],t.name)==0)
								 p[i]++;
								 cout<<p[i];
								 if(p[i]>1)
								 {
								 settextstyle(1,0,1);
								 outtextxy(460,y,"phone number");
								 bar(310,y,450,y+20);
								 gotoxy(41,16+i*2);
								 gets(ph[x]);
								 x++;
								 }
								 }
								 fin.close();

								 settextstyle(1,0,1);
								 col();
								 outtextxy(20,50,"CONFIRMATION FOR ADDING CONTACTS IN FAVOURITES?: ");
								 char s=getch();
								 if(s=='y'||s=='Y')
								 {fstream f("u.dat",ios::binary|ios::in|ios::out);
								 int r=0;

for(i=0;i<n;i++)
{

fstream f("u.dat",ios::binary|ios::in|ios::out);
if(!p[i])
{
settextstyle(1,0,1);
outtextxy(20,150+r*30,"CONTACT( ");
outtextxy(28+textwidth("CONTACT( "),150+r*30,a[i]);
outtextxy(36+textwidth("CONTACT( ")+textwidth(a[i]),150+r*30,") NOT FOUND");
r++;
}
else if(p[i]>1)
{int q=0;
while(f.read((char*)&t,sizeof(t)))
if(strcmpi(a[i],t.name)==0&&strcmpi(ph[i],t.ph)==0)
{
if(t.fav=='y'||t.fav=='Y')
{
 settextstyle(1,0,1);
outtextxy(14,150+r*30,"CONTACT (");
outtextxy(22+textwidth("CONTACT ("),150+r*30,a[i]);
outtextxy(30+textwidth("CONTACT (")+textwidth(a[i]),150+r*30,") ALREADY EXISTS IN FAVOURITES");
r++;q++;
break;}
t.fav='y';q++;
f.seekg(int(-1*sizeof(t)),ios::cur);
f.write((char*)&t,sizeof(t));
settextstyle(1,0,1);
outtextxy(14,150+r*30,"CONTACT (");
outtextxy(22+textwidth("CONTACT ("),150+r*30,a[i]);
outtextxy(30+textwidth("CONTACT (")+textwidth(a[i]),150+r*30,") ADDED TO FAVOURITE");
r++;
fstream f1("original.dat",ios::binary|ios::in|ios::out);
while(f1.read((char*)&t,sizeof(t)))
if(strcmpi(t.name,a[i])==0&&strcmpi(t.ph,ph[i])==0)
{
t.fav='y';
f1.seekg(int(-1*sizeof(t)),ios::cur);
f1.write((char*)&t,sizeof(t));
}
f1.close();
}//while if
if(!q)
{
settextstyle(1,0,1);
outtextxy(20,150+r*30,"CONTACT( ");
outtextxy(28+textwidth("CONTACT( "),150+r*30,a[i]);
outtextxy(36+textwidth("CONTACT( ")+textwidth(a[i]),150+r*30,") NOT FOUND");
r++;
}
}//elseif(f[r]>1)



else if(p[i]==1)
{int q=0;
while(f.read((char*)&t,sizeof(t)))
if(strcmpi(a[i],t.name)==0)
{
if(t.fav=='y'||t.fav=='Y')
{
 settextstyle(1,0,1);
outtextxy(14,150+r*30,"CONTACT (");
outtextxy(22+textwidth("CONTACT ("),150+r*30,a[i]);
outtextxy(30+textwidth("CONTACT (")+textwidth(a[i]),150+r*30,") ALREADY EXISTS IN FAVOURITES");
r++;q++;
break;}
t.fav='y';q++;
f.seekg(int(-1*sizeof(t)),ios::cur);
f.write((char*)&t,sizeof(t));
settextstyle(1,0,1);
outtextxy(14,150+r*30,"CONTACT (");
outtextxy(22+textwidth("CONTACT ("),150+r*30,a[i]);
outtextxy(30+textwidth("CONTACT (")+textwidth(a[i]),150+r*30,") ADDED TO FAVOURITE");
r++;
fstream f1("original.dat",ios::binary|ios::in|ios::out);
while(f1.read((char*)&t,sizeof(t)))
if(strcmpi(t.name,a[i])==0)
{
t.fav='y';
f1.seekg(int(-1*sizeof(t)),ios::cur);
f1.write((char*)&t,sizeof(t));
}
f1.close();
}//while if
if(!q)
{
settextstyle(1,0,1);
outtextxy(20,150+r*30,"CONTACT( ");
outtextxy(28+textwidth("CONTACT( "),150+r*30,a[i]);
outtextxy(36+textwidth("CONTACT( ")+textwidth(a[i]),150+r*30,") NOT FOUND");
r++;
}

}//else if(fr[i]==1)


f.close();
}//for()
								 }
								 /*
								 if(p[i]==0)
								 {
								 settextstyle(1,0,1);
								 outtextxy(20,150+r*30,"CONTACT (");
								 outtextxy(28+textwidth("CONTACT ("),150+r*30,a[i]);
								 outtextxy(36+textwidth("CONTACT (")+textwidth(a[i]),150+r*30,") NOT FOUND");
								 r++;
								 }
								 else if(p[i]==1)
								 {conc k;f.open("u.dat",ios::binary|ios::in|ios::out);
								 int q=0;
								 while(f.read((char*)&k,sizeof(k)))
								 if(strcmpi(k.name,a[i])==0)
								 {
								 q++;
								 t.fav='y';
								 cout<<"s";
								 f.seekg(int(-1*sizeof(t)),ios::cur);
								 f.write((char*)&t,sizeof(t));


								 settextstyle(1,0,1);
								 outtextxy(20,150+r*30,"CONTACT (");
								 outtextxy(28+textwidth("CONTACT ("),150+r*30,a[i]);
								 outtextxy(36+textwidth("CONTACT (")+textwidth(a[i]),150+r*30,") ADDED TO FAVOURITES");
								 r++;
								 }
								 if(!q)
								 {
								 settextstyle(1,0,1);
								 outtextxy(20,150+r*30,"CONTACT( ");
								 outtextxy(28+textwidth("CONTACT( "),150+r*30,a[i]);
								 outtextxy(36+textwidth("CONTACT( ")+textwidth(a[i]),150+r*30,") NOT FOUND");
								 r++;
								 }
								 f.close();


								 }




								 }



								 int we;

								 settextstyle(7,0,3);
								 outtextxy(30,33,"NO. OF CONTACTS TO BE ADDED: ");
								 gotoxy(56,4);
								 cin>>we;
								 outtextxy(30,70,"ENTER THE NAMES OF THE CONTACT(S):");

								 gotoxy(15,5);
								 char na[20][20]; int iy=0;
								 for(i=0;i<we;i++)
								 gets(na[i]);
								 fstream f;
								 conc t,k;
								 for(int j=0;j<we;j++)
								 {settextstyle(1,0,2);
								 f.open("u.dat",ios::binary|ios::in|ios::out);
								 while(f.read((char*)&t,sizeof(t)))
								 if(strcmpi(na[j],t.name)==0&&t.fav!='y'&&t.fav!='Y')
								 {++iy;
								 t.fav='y';settextstyle(1,0,1);
								 outtextxy(12,150+j*30,"CONTACT (");
								 outtextxy(22+textwidth("CONTACT ("),150+j*30,na[j]);
								 outtextxy(35+textwidth("CONTACT (")+textwidth(na[j]),150+j*30,") ADDED TO FAVOURITES.");
								 f.seekg(int(-1*sizeof(t)),ios::cur);
								 f.write((char*)&t,sizeof(t));
								 fstream f1("original.dat",ios::binary|ios::in|ios::out);
								 while(f1.read((char*)&k,sizeof(t)))
								 if(strcmpi(k.name,na[j])==0)
								 {
								 k.fav='y';
								 f1.seekg(int(-1*sizeof(k)),ios::cur);
								 f1.write((char*)&k,sizeof(k));
								 }
								 f1.close();
								 break;}
								 else if(strcmpi(na[j],t.name)==0&&(t.fav=='y'||t.fav=='Y'))
								 {iy++;settextstyle(1,0,1);
								 outtextxy(12,150+j*30,"CONTACT (");
								 outtextxy(22+textwidth("CONTACT ("),150+j*30,na[j]);
								 outtextxy(35+textwidth("CONTACT (")+textwidth(na[j]),150+j*30,") ALREADY EXISTS IN FAVOURITES");
								 }
								 if(iy==0)
								 {settextstyle(1,0,1);
								 outtextxy(12,220+j*30,"CONTACT (");
								 outtextxy(22+textwidth("CONTACT ("),220+j*30,na[j]);
								 outtextxy(30+textwidth("CONTACT (")+textwidth(na[j]),220+j*30,") NOT FOUND");
								 }
								 iy=0;
								 f.close();}//for()*/
									getch();
								goto we;
							} else if (ch == 2) {
								fin.open("u.dat", ios::binary);
								conc t;
								fin.seekg(0);
								int g = 0;
								while (fin.read((char*) &t, sizeof(t)))
									if (t.fav == 'y' || t.fav == 'Y') {
										settextstyle(7, 0, 4);
										cleardevice();
										outtextxy(120, 15, "FAVOURITES");
										settextstyle(7, 0, 2);
										datadisp(t);

										g++;
										getch();
									}
								if (!g) {
									settextstyle(7, 0, 2);
									outtextxy(70, 200,
											"NO FAVOURITE CONTACTS AVAILABLE");
									getch();
									goto we;
								}
								fin.close();
								goto we;
							} else if (ch == 3) {
								int b = 0;
								ifstream s("u.dat", ios::binary);
								conc z;
								while (s.read((char*) &z, sizeof(z)))
									if (z.fav == 'y' || z.fav == 'y') {
										b++;
										break;
									}
								if (!b) {
									cleardevice();
									col();
									outtextxy(40, 100,
											"NO FAVOURITE CONTACT AVAILABLE.");
									getch();
									goto we;
								} else {
									ert: cleardevice();
									settextstyle(7, 0, 5);
									col();
									dustbin();
									outtextxy(30, 35, "FAVOURITES");
									settextstyle(7, 0, 2);
									outtextxy(15, 160,
											"ENTER THE NO. OF CONTACTS TO BE REMOVED: ");
									gotoxy(15, 10);
									int n, y = 234, c, fr[30], m = 0, u;
									cin >> n;
									char a[20][20];
									outtextxy(15, 200,
											"ENTER THE NAMES OF THE CONTACTS: ");
									char p[30][30];
									conc t, k;
									c = 0;
									ifstream fin;
									for (int i = 0; i < n; i++) {
										u = 0;
										fr[m] = 0;
										gotoxy(14, 16 + i * 2);
										gets(a[i]);
										fin.open("u.dat", ios::binary);
										while (fin.read((char*) &t, sizeof(t)))
											if (strcmpi(t.name, a[i]) == 0)
												u++;
										fr[m] = u;
										if (u > 1) {
											settextstyle(1, 0, 1);
											outtextxy(460, y, "phone number");
											bar(310, y, 450, y + 20);
											gotoxy(41, 16 + i * 2);
											gets(p[c]);
											c++;
										}
										m++;
										y += 30;
										fin.close();
									}
									cleardevice();
									col();
									settextstyle(7, 0, 2);
									outtextxy(30, 40,
											"CONFIRMATION FOR REMOVAL OF CONTACTS");

									char h;
									h = getch();
									if (h == 'y' || h == 'Y') {
										int r = 0;
										for (i = 0; i < n; i++) {

											fstream f(
													"u.dat",
													ios::binary | ios::in
															| ios::out);
											if (!fr[i]) {
												settextstyle(1, 0, 1);
												outtextxy(20, 275 + r * 30,
														"CONTACT( ");
												outtextxy(
														28 + textwidth(
																"CONTACT( "),
														275 + r * 30, a[i]);
												outtextxy(
														36 + textwidth(
																"CONTACT( ")
																+ textwidth(
																		a[i]),
														275 + r * 30,
														") NOT FOUND");
												r++;
											} else if (fr[i] > 1) {
												int q = 0;
												while (f.read((char*) &t,
														sizeof(t)))
													if (strcmpi(a[i], t.name)
															== 0 && strcmpi(
															p[i], t.ph) == 0) {
														if (t.fav != 'y'
																&& t.fav != 'Y') {
															settextstyle(1, 0,
																	1);
															outtextxy(
																	14,
																	275
																			+ r
																					* 30,
																	"CONTACT (");
															outtextxy(
																	22
																			+ textwidth(
																					"CONTACT ("),
																	275
																			+ r
																					* 30,
																	a[i]);
															outtextxy(
																	30
																			+ textwidth(
																					"CONTACT (")
																			+ textwidth(
																					a[i]),
																	275
																			+ r
																					* 30,
																	") IS ALREADY NOT A FAVOURITE");
															r++;
															q++;
															break;
														}
														t.fav = ' ';
														q++;
														f.seekg(
																int(
																		-1
																				* sizeof(t)),
																ios::cur);
														f.write((char*) &t,
																sizeof(t));
														settextstyle(1, 0, 1);
														outtextxy(14,
																275 + r * 30,
																"CONTACT (");
														outtextxy(
																22
																		+ textwidth(
																				"CONTACT ("),
																275 + r * 30,
																a[i]);
														outtextxy(
																30
																		+ textwidth(
																				"CONTACT (")
																		+ textwidth(
																				a[i]),
																275 + r * 30,
																") REMOVED FROM FAVOURITE");
														r++;
														fstream
																f1(
																		"original.dat",
																		ios::binary
																				| ios::in
																				| ios::out);
														while (f1.read(
																(char*) &k,
																sizeof(k)))
															if (strcmpi(k.name,
																	a[i]) == 0
																	&& strcmpi(
																			k.ph,
																			p[i])
																			== 0) {
																k.fav = ' ';
																f1.seekg(
																		int(
																				-1
																						* sizeof(k)),
																		ios::cur);
																f1.write(
																		(char*) &k,
																		sizeof(k));
															}
														f1.close();
													}//while if
												if (!q) {
													settextstyle(1, 0, 1);
													outtextxy(20, 275 + r * 30,
															"CONTACT( ");
													outtextxy(
															28
																	+ textwidth(
																			"CONTACT( "),
															275 + r * 30, a[i]);
													outtextxy(
															36
																	+ textwidth(
																			"CONTACT( ")
																	+ textwidth(
																			a[i]),
															275 + r * 30,
															") NOT FOUND");
													r++;
												}
											}//elseif(f[r]>1)


											else if (fr[i] == 1) {
												int q = 0;
												while (f.read((char*) &t,
														sizeof(t)))
													if (strcmpi(a[i], t.name)
															== 0) {
														if (t.fav != 'y'
																&& t.fav != 'Y') {
															settextstyle(1, 0,
																	1);
															outtextxy(
																	14,
																	275
																			+ r
																					* 30,
																	"CONTACT (");
															outtextxy(
																	22
																			+ textwidth(
																					"CONTACT ("),
																	275
																			+ r
																					* 30,
																	a[i]);
															outtextxy(
																	30
																			+ textwidth(
																					"CONTACT (")
																			+ textwidth(
																					a[i]),
																	275
																			+ r
																					* 30,
																	") IS ALREADY NOT A FAVOURITE");
															r++;
															q++;
															break;
														}
														t.fav = ' ';
														q++;
														f.seekg(
																int(
																		-1
																				* sizeof(t)),
																ios::cur);
														f.write((char*) &t,
																sizeof(t));
														settextstyle(1, 0, 1);
														outtextxy(14,
																275 + r * 30,
																"CONTACT (");
														outtextxy(
																22
																		+ textwidth(
																				"CONTACT ("),
																275 + r * 30,
																a[i]);
														outtextxy(
																30
																		+ textwidth(
																				"CONTACT (")
																		+ textwidth(
																				a[i]),
																275 + r * 30,
																") REMOVED FROM FAVOURITE");
														r++;
														fstream
																f1(
																		"original.dat",
																		ios::binary
																				| ios::in
																				| ios::out);
														while (f1.read(
																(char*) &k,
																sizeof(k)))
															if (strcmpi(k.name,
																	a[i]) == 0) {
																k.fav = ' ';
																f1.seekg(
																		int(
																				-1
																						* sizeof(k)),
																		ios::cur);
																f1.write(
																		(char*) &k,
																		sizeof(k));
															}
														f1.close();
													}//while if
												if (!q) {
													settextstyle(1, 0, 1);
													outtextxy(20, 275 + r * 30,
															"CONTACT( ");
													outtextxy(
															28
																	+ textwidth(
																			"CONTACT( "),
															275 + r * 30, a[i]);
													outtextxy(
															36
																	+ textwidth(
																			"CONTACT( ")
																	+ textwidth(
																			a[i]),
															275 + r * 30,
															") NOT FOUND");
													r++;
												}

											}//else if(fr[i]==1)


											f.close();
										}//for()

									}//(h=='y')
									getch();
									goto we;
								}//else(b==0)
							}//else if(ch==3)
							else if (ch == 4)
								goto l;
						}
						goto l;
					} else if (y == 309) {
						circle(530, 106, 55);
						circle(530, 106, 50);
						floodfill(530, 52, WHITE);
						line(500, 120, 541, 79);
						setfillstyle(SOLID_FILL, WHITE);
						line(511, 132, 552, 91);
						line(541, 79, 552, 90);
						line(500, 120, 500, 132);
						line(511, 132, 500, 132);
						floodfill(506, 126, WHITE);
						line(543, 77, 554, 88);
						line(543, 77, 552, 68);
						line(554, 88, 563, 79);
						line(552, 68, 563, 79);
						floodfill(553, 76, WHITE);

						fstream f("u.dat", ios::binary | ios::in | ios::out);
						f.seekg(0, ios::end);
						if (f.tellg() == 0 || !f) {
							col();
							settextstyle(7, 0, 4);
							outtextxy(100, 200, "NO CONTACTS AVAILABLE.");
							getch();
						} else {
							ro: f.seekp(0, ios::beg);

							col();
							circle(530, 106, 55);
							circle(530, 106, 50);
							floodfill(530, 52, WHITE);
							line(500, 120, 541, 79);
							setfillstyle(SOLID_FILL, WHITE);
							line(511, 132, 552, 91);
							line(541, 79, 552, 90);
							line(500, 120, 500, 132);
							line(511, 132, 500, 132);
							floodfill(506, 126, WHITE);
							line(543, 77, 554, 88);
							line(543, 77, 552, 68);
							line(554, 88, 563, 79);
							line(552, 68, 563, 79);
							floodfill(553, 76, WHITE);
							settextstyle(7, 0, 4);
							outtextxy(40, 40, "EDIT CONTACTS");

							settextstyle(7, 0, 3);
							outtextxy(50, 150, "ENTER NAME:");
							bar(230, 160, 375, 175);
							gotoxy(30, 11);
							char ty[30];
							gets(ty);
							int op = 0, j;
							conc t, v;
							char pl[20];
							f.close();
							ifstream fin("u.dat", ios::binary);
							int count = 0;
							while (fin.read((char*) &t, sizeof(t)))
								if (strcmpi(t.name, ty) == 0)
									count++;
							if (count > 1) {
								gotoxy(21, 14);
								cout
										<< "(extra information required: phone number)";

								bar(230, 235, 375, 250);
								gotoxy(30, 16);
								gets(pl);
							}

							col();

							settextstyle(7, 0, 4);
							outtextxy(40, 40, "EDIT CONTACTS");
							circle(530, 106, 55);
							circle(530, 106, 50);
							floodfill(530, 52, WHITE);
							line(500, 120, 541, 79);
							setfillstyle(SOLID_FILL, WHITE);
							line(511, 132, 552, 91);
							line(541, 79, 552, 90);
							line(500, 120, 500, 132);
							line(511, 132, 500, 132);
							floodfill(506, 126, WHITE);
							line(543, 77, 554, 88);
							line(543, 77, 552, 68);
							line(554, 88, 563, 79);
							line(552, 68, 563, 79);
							floodfill(553, 76, WHITE);

							f.open("u.dat", ios::binary | ios::in | ios::out);

							while (f.read((char*) &t, sizeof(t)))
								if (count < 2) {
									if (strcmpi(ty, t.name) == 0) {
										outtextxy(20, 100, "FEILDS AVAILABLE: ");
										settextstyle(7, 0, 2);
										outtextxy(20, 145, "NAME.");
										outtextxy(20, 185,
												"DOB:(date),(month),(year).");
										outtextxy(20, 225,
												"PHONE NUMBER or (phn).");
										outtextxy(20, 265,
												"ADDRESS:(house number) or (hsn),(street),(city),");
										outtextxy(450, 305, "(pin code).");
										outtextxy(20, 345,
												"ENTER THE NO. FIELDS:");
										int rt;
										op++;
										cont = 0;
										gotoxy(32, 21);
										cin >> rt;
										outtextxy(20, 390, "ENTER THE FIELDS: ");
										char alt[30][50];
										gotoxy(32, 23);
										for (j = 0; j < rt; j++)
											gets(alt[j]);
										cleardevice();
										setbkcolor(8);
										setcolor(WHITE);
										rectangle(8, 8, 630, 471);
										settextstyle(7, 0, 4);
										outtextxy(40, 40, "EDIT CONTACTS");
										circle(530, 106, 55);
										circle(530, 106, 50);
										floodfill(530, 52, WHITE);
										line(500, 120, 541, 79);
										setfillstyle(SOLID_FILL, WHITE);
										line(511, 132, 552, 91);
										line(541, 79, 552, 90);
										line(500, 120, 500, 132);
										line(511, 132, 500, 132);
										floodfill(506, 126, WHITE);
										line(543, 77, 554, 88);
										line(543, 77, 552, 68);
										line(554, 88, 563, 79);
										line(552, 68, 563, 79);
										floodfill(553, 76, WHITE);
										int k;
										settextstyle(7, 0, 2);
										datadisp(t);

										for (k = 0; k < rt; k++)
											if (strcmpi(alt[k], "name") == 0) {
												gotoxy(50, 7);
												gets(t.name);
											} else if (strcmpi(alt[k], "date")
													== 0) {
												gotoxy(50, 9);
												cin >> t.birth.date;
											} else if (strcmpi(alt[k], "month")
													== 0) {
												gotoxy(50, 11);
												cin >> t.birth.month;
											} else if (strcmpi(alt[k], "year")
													== 0) {
												gotoxy(50, 13);
												cin >> t.birth.year;
											} else if (strcmpi(alt[k],
													"phone number") == 0
													|| strcmpi(alt[k], "phn")
															== 0) {
												gotoxy(50, 15);
												gets(t.ph);
											}

											else if (strcmpi(alt[k],
													"house number") == 0
													|| strcmpi(alt[k], "hsn")
															== 0) {
												gotoxy(50, 17);
												cin >> t.add.hno;
											} else if (strcmpi(alt[k], "street")
													== 0) {
												gotoxy(50, 19);
												gets(t.add.st);
											} else if (strcmpi(alt[k], "city")
													== 0) {
												gotoxy(50, 21);
												gets(t.add.city);
											} else if (strcmpi(alt[k],
													"pin code") == 0) {
												gotoxy(50, 23);
												cin >> t.add.pc;
											}
										f.seekp(int(-1 * sizeof(t)), ios::cur);
										f.write((char*) &t, sizeof(t));

										conc p;
										fstream f1(
												"original.dat",
												ios::binary | ios::in
														| ios::out);
										while (f1.read((char*) &p, sizeof(p)))
											if (strcmpi(p.name, ty) == 0) {
												f1.seekp(int(-1 * sizeof(p)),
														ios::cur);
												f1.write((char*) &t, sizeof(t));
												break;
											}
										f1.close();
										outtextxy(50, 400,
												"DO YOU WANT TO CONTINUE EDITTING?(y/n): ");
										char hj;
										gotoxy(12, 27);
										cin >> hj;
										if (hj == 'y' || hj == 'Y')
											goto ro;
										f.close();
										break;
									}
								} else if (count >= 2) {
									if (strcmpi(t.name, ty) == 0 && strcmpi(
											t.ph, pl) == 0) {
										cont = 0;
										outtextxy(20, 100, "FEILDS AVAILABLE: ");
										settextstyle(7, 0, 2);
										outtextxy(20, 145, "NAME.");
										outtextxy(20, 185,
												"DOB:(date),(month),(year).");
										outtextxy(20, 225,
												"PHONE NUMBER or (phn).");
										outtextxy(20, 265,
												"ADDRESS:(house number) or (hsn),(street),(city),");
										outtextxy(450, 305, "(pin code).");
										outtextxy(20, 345,
												"ENTER THE NO. FIELDS:");
										int rt;
										op++;
										gotoxy(32, 21);
										cin >> rt;
										outtextxy(20, 380, "ENTER THE FIELDS: ");
										char alt[30][50];
										gotoxy(32, 23);
										for (j = 0; j < rt; j++)
											gets(alt[j]);
										cleardevice();
										setbkcolor(8);
										setcolor(WHITE);
										rectangle(8, 8, 630, 471);
										settextstyle(7, 0, 4);
										outtextxy(40, 40, "EDIT CONTACTS");
										circle(530, 106, 55);
										circle(530, 106, 50);
										floodfill(530, 52, WHITE);
										line(500, 120, 541, 79);
										setfillstyle(SOLID_FILL, WHITE);
										line(511, 132, 552, 91);
										line(541, 79, 552, 90);
										line(500, 120, 500, 132);
										line(511, 132, 500, 132);
										floodfill(506, 126, WHITE);
										line(543, 77, 554, 88);
										line(543, 77, 552, 68);
										line(554, 88, 563, 79);
										line(552, 68, 563, 79);
										floodfill(553, 76, WHITE);
										int k;
										settextstyle(7, 0, 2);
										datadisp(t);

										for (k = 0; k < rt; k++)
											if (strcmpi(alt[k], "name") == 0) {
												gotoxy(50, 7);
												gets(t.name);
											} else if (strcmpi(alt[k], "date")
													== 0) {
												gotoxy(50, 9);
												cin >> t.birth.date;
											} else if (strcmpi(alt[k], "month")
													== 0) {
												gotoxy(50, 11);
												cin >> t.birth.month;
											} else if (strcmpi(alt[k], "year")
													== 0) {
												gotoxy(50, 13);
												cin >> t.birth.year;
											} else if (strcmpi(alt[k],
													"phone number") == 0
													|| strcmpi(alt[k], "phn")
															== 0) {
												gotoxy(50, 15);
												gets(t.ph);
											}

											else if (strcmpi(alt[k],
													"house number") == 0
													|| strcmpi(alt[k], "hsn")
															== 0) {
												gotoxy(50, 17);
												cin >> t.add.hno;
											} else if (strcmpi(alt[k], "street")
													== 0) {
												gotoxy(50, 19);
												gets(t.add.st);
											} else if (strcmpi(alt[k], "city")
													== 0) {
												gotoxy(50, 21);
												gets(t.add.city);
											} else if (strcmpi(alt[k],
													"pin code") == 0) {
												gotoxy(50, 23);
												cin >> t.add.pc;
											}
										f.seekp(int(-1 * sizeof(t)), ios::cur);
										f.write((char*) &t, sizeof(t));

										conc p;
										fstream f1(
												"original.dat",
												ios::binary | ios::in
														| ios::out);
										while (f1.read((char*) &p, sizeof(p)))
											if (strcmpi(p.name, ty) == 0) {
												f1.seekp(int(-1 * sizeof(p)),
														ios::cur);
												f1.write((char*) &t, sizeof(t));
												break;
											}
										f1.close();
										outtextxy(50, 400,
												"DO YOU WANT TO CONTINUE EDITTING?(y/n): ");
										char hj;
										gotoxy(12, 27);
										cin >> hj;
										if (hj == 'y' || hj == 'Y')
											goto ro;
										f.close();
										break;
									}
								}

							if (op == 0) {
								settextstyle(7, 0, 1);
								outtextxy(50, 250, "CONTACT DOESN'T EXIST");
								outtextxy(50, 300,
										"DO YOU WANT TO TRY AGAIN?(Y/N);");
								char tg;
								gotoxy(15, 27);
								cin >> tg;
								if (tg == 'y' || tg == 'Y')
									goto ro;
							}
						}
						goto l;
					}
					else if(y==339)
{
 for(;;)
{
col();
settextstyle(7,0,5);
outtextxy(180,20,"TRASH");
dustbin();
conc t;
fstream f("trash.dat",ios::binary|ios::in|ios::out);
	f.seekg(0,ios::end);
	if(f.tellg()==0 || !f)
{    settextstyle(7,0,4);
 outtextxy(100,200,"TRASH IS EMPTY.");
getch();
goto l;}
else
{
f.seekg(0,ios::beg);
f.close();
conc a[30];
int y=100,c=0,x,i,n=0;
col();
settextstyle(7,0,5);
outtextxy(180,20,"TRASH");
dustbin();
settextstyle(1,0,1);
ifstream fin("trash.dat",ios::binary);
rectangle(35,435,150,465);rectangle(195,435,320,465);rectangle(355,435,445,465);
outtextxy(40,440,"DELETE ALL");outtextxy (200,440,"RESTORE ALL");outtextxy(382,440,"EXIT");
while(fin.read((char*)&t,sizeof(t)))
{
outtextxy(40,y,t.name);
outtextxy(200,y,"DELETE");
outtextxy(360,y,"RESTORE");

rectangle(35,y-5,150,y+25);
rectangle(195,y-5,275,y+25);
rectangle(355,y-5,445,y+25);
a[n]=t;
n++;
y+=35;
}
y=110;x=25;
char e;
fin.close();
for( ;n!=0;)
{
setcolor(WHITE);
circle(x,y,6);
circle(x,y,3);
floodfill(x,y,WHITE);

e=getch();
if(e==72)
{
clear(x-6,y-6,x+6,y+6);
if(y==110)
y=450;
else if(y==450)
y=(n-1)*35+110;
else
y-=35;
}
else if(e==80)
{
clear(x-6,y-6,x+6,y+6);
if(y==450)
y=110;
else if(y==((n-1)*35+110))
y=450;
else
y+=35;
}
else if(e==75)
{
clear(x-6,y-6,x+6,y+6);
if(x==25)
x=345;
else
x-=160;
}
else if(e==77)
{
clear(x-6,y-6,x+6,y+6);
if(x==345)
x=25;
else
x+=160;
}
else if(e==13)
{
if(x==25)
{
if(y!=450)
{
col();
settextstyle(7,0,5);
outtextxy(180,20,"TRASH");
dustbin();
i=(y-110)/35;
datadisp(a[i]);
if(a[i].fav=='y'||a[i].fav=='Y')
{
line(342, 40, 355, 40);
line(355, 40, 360, 30);
line(360, 30, 365, 40);
line(365, 40, 378, 40);
line(378, 40, 368, 48);
line(368, 48, 377, 60);
line(377, 60, 360, 53);
circle(361, 48, 25);
line(360, 53, 343, 60);
line(343, 60, 352, 48);
line(352, 48, 342, 40);
floodfill(360, 45, WHITE); }
getch();      }
else remove("trash.dat");
break;
}
else if(x==185)
{
if(y!=450)
{
conc x,k;
i=(y-110)/35;
x=a[i];
int j;
for(i=0;i<n;i++)
if(strcmpi(x.ph,a[i].ph)==0)
{
for(j=i;j<n-1;j++)
a[j]=a[j+1];
n--;
}
ofstream fout("trash.dat",ios::binary);
j=0;
for(i=0;i<n;i++)
fout.write((char*)&a[i],sizeof(a[i]));
fout.close();
}
else
{
ofstream f1("u.dat",ios::binary|ios::app),f2("original.dat",ios::binary|ios::app);

for(i=0;i<n;i++)
{
f1.write((char*)&a[i],sizeof(a[i]));
f2.write((char*)&a[i],sizeof(a[i]));
}
f1.close();f2.close();
char c;

ifstream fin("sort.txt");
fin.get(c);
if(c=='n')
sortn();
else if(c=='a')
sorta();
fin.close();

remove("trash.dat");
}
break;
}
else if(x==345)
{
if(y!=450)
{
conc x,k;
i=(y-110)/35;
x=a[i];
int j;
ofstream fout1("u.dat",ios::binary|ios::app),fout2("original.dat",ios::binary|ios::app);
fout1.write((char*)&x,sizeof(x));
fout2.write((char*)&x,sizeof(x));
fout1.close();
fout2.close();
char c;

ifstream fin("sort.txt");
fin.get(c);
if(c=='n')
sortn();
else if(c=='a')
sorta();
fin.close();

for(i=0;i<n;i++)
if(strcmpi(x.ph,a[i].ph)==0)
{
for(j=i;j<n-1;j++)
a[j]=a[j+1];
n--;
}
ofstream fout("trash.dat",ios::binary);
j=0;
for(i=0;i<n;i++)
fout.write((char*)&a[i],sizeof(a[i]));
fout.close();
break;
}
else
goto l;
}

}//else if(e==13)

}//for( ; ; )

}//else

}//outterfor(;;)
























































}//else if(y==339)

					else if (y == 369) {
						pat t;
						cleardevice();
						col();
						ty: col();
						int i, j;
						settextstyle(7, 0, 5);
						outtextxy(175, 20, "SECURITY");
						settextstyle(7, 0, 3);
						outtextxy(50, 160, "(1).CHANGE PATTERN.");
						outtextxy(50, 225, "(2).CHANGE PASSWORD.");
						settextstyle(7, 0, 1);
						outtextxy(50, 350, "ENTER YOUR CHOICE:");
						char l;
						l = getch();
						if (l == '1') {
							int p = 0;
							r: int s = 0;
							t: initgraph(&gd, &gm, "c:\\turboc3\\bgi");
							int x = 250, y = 150, k = 0;
							col();
							int i, j;
							settextstyle(7, 0, 4);
							outtextxy(88, 20, "CONFIRM YOUR PATTERN");
							settextstyle(7, 0, 1);
							outtextxy(98, 68,
									"(USE YOUR DEVICE PATTERN TO UNLOCK)");
							rectangle(235, 135, 365, 265);
							rectangle(232, 132, 368, 268);
							fill();
							for (i = 1; i <= 3; i++) {
								for (j = 1; j <= 3; j++) {
									circle(j * 50 + 200, i * 50 + 100, 3);
									floodfill(j * 50 + 200, i * 50 + 100, WHITE);
								}
								cout << "\n";
							}
							x = 250, y = 150;
							int a[40];
							for (;;) {
								setfillstyle(SOLID_FILL, WHITE);
								circle(x, y, 5);
								char c = getch();
								if (c == 72) {
									if (y != 150) {
										setcolor(8);
										circle(x, y, 5);
										setcolor(WHITE);
										y -= 50;
										circle(x, y, 5);
									}
								} else if (c == 80) {
									if (y != 250) {
										setcolor(8);
										circle(x, y, 5);
										setcolor(WHITE);
										y += 50;
										circle(x, y, 5);
									}
								} else if (c == 75) {
									if (x != 250) {
										setcolor(8);
										circle(x, y, 5);
										setcolor(WHITE);
										x -= 50;
										circle(x, y, 5);
									}
								} else if (c == 77) {
									if (x != 350) {
										setcolor(8);
										circle(x, y, 5);
										setcolor(WHITE);
										x += 50;
										circle(x, y, 5);
									}
								} else if (c == ' ') {
									for (;;) {
										char f = getch();
										if (f == 72) {
											if (y != 150) {
												for (int i = 0; i <= 50; i++) {
													line(x, y, x, y - i);
													delay(10);
												}
												y -= 50;
												circle(x, y, 5);
												a[k] = 1;
												k++;
											}
										} else if (f == 80) {
											if (y != 250) {
												for (int i = 0; i <= 50; i++) {
													line(x, y, x, y + i);
													delay(10);
												}
												y += 50;
												circle(x, y, 5);
												a[k] = 2;
												k++;
											}
										} else if (f == 75) {
											if (x != 250) {
												for (int i = 0; i <= 50; i++) {
													line(x, y, x - i, y);
													delay(10);
												}
												x -= 50;
												circle(x, y, 5);
												a[k] = 3;
												k++;
											}
										} else if (f == 77) {
											if (x != 350) {
												for (int i = 0; i <= 50; i++) {
													line(x, y, x + i, y);
													delay(10);
												}
												x += 50;
												circle(x, y, 5);
												a[k] = 4;
												k++;
											}
										} else if (f == ' ')
											break;
										else if (f == 27)
											goto ty;
									}
									break;
								} else if (c == 27)
									goto ty;
							}
							ifstream fin("pat.dat", ios::binary);
							fin.read((char*) &t, sizeof(t));
							int r = 0;
							for (i = 0; i < t.n; i++)
								if (a[i] != t.a[i])
									r++;
							if (k != t.n || x != t.x || y != t.y)
								r++;
							fin.close();
							if (r) {
								s++;
								if (s < 3) {
									settextstyle(7, 0, 2);
									outtextxy(205, 300, "WRONG PATTERN");
									delay(1200);
									col();
									closegraph();
									goto t;
								} else {
									p++;
									if (p > 2) {
										cleardevice();
										setbkcolor(8);
										setcolor(WHITE);
										rectangle(8, 8, 630, 471);
										settextstyle(10, 0, 3);
										outtextxy(99, 60, "INTRUDER ALERT!!!");
										settextstyle(10, 0, 1);
										outtextxy(12, 400,
												"<ALL THE THE DATA FILES ARE DELETED>");
										settextstyle(10, 0, 5);
										setcolor( RED);
										outtextxy(50, 200, "ACCESS DENIED");
										remove("u.dat");
										remove("original.dat");remove("trash.dat");
										delay(2800);
										return (1);
									} else {
										settextstyle(1, 0, 1);
										outtextxy(93, 289,
												"ENTERED INCORRECT PATTERN CONSEQUTIVELY (3)TIMES");
										outtextxy(168, 315, "WAIT FOR (");
										for (int z = 10; z >= 0; z--) {
											gotoxy(34, 21);
											cout << z;
											outtextxy(281, 315, ") SECONDS.");
											delay(900);
										}
										closegraph();
										goto r;
									}
								}
							} else {
								e: col();
								initgraph(&gd, &gm, "c:\\turboc3\\bgi");
								settextstyle(7, 0, 4);
								outtextxy(205, 30, "PATTERN");
								settextstyle(7, 0, 1);
								outtextxy(130, 80, "(DRAW AN UNLOCK PATTERN)");
								rectangle(235, 135, 365, 265);
								rectangle(232, 132, 368, 268);
								fill();
								for (i = 1; i <= 3; i++) {
									for (j = 1; j <= 3; j++) {
										circle(j * 50 + 200, i * 50 + 100, 3);
										floodfill(j * 50 + 200, i * 50 + 100,
												WHITE);
									}
									cout << "\n";
								}
								int X = 250, Y = 150, K = 0;
								for (;;) {
									setfillstyle(SOLID_FILL, WHITE);
									circle(X, Y, 5);
									char c = getch();
									if (c == 72) {
										if (Y != 150) {
											setcolor(8);
											circle(X, Y, 5);
											setcolor(WHITE);
											Y -= 50;
											circle(X, Y, 5);
										}
									} else if (c == 80) {
										if (Y != 250) {
											setcolor(8);
											circle(X, Y, 5);
											setcolor(WHITE);
											Y += 50;
											circle(X, Y, 5);
										}
									} else if (c == 75) {
										if (X != 250) {
											setcolor(8);
											circle(X, Y, 5);
											setcolor(WHITE);
											X -= 50;
											circle(X, Y, 5);
										}
									} else if (c == 77) {
										if (X != 350) {
											setcolor(8);
											circle(X, Y, 5);
											setcolor(WHITE);
											X += 50;
											circle(X, Y, 5);
										}
									} else if (c == ' ') {
										for (;;) {
											char f = getch();
											if (f == 72) {
												if (y != 150) {
													for (int i = 0; i <= 50; i++) {
														line(X, Y, X, Y - i);
														delay(10);
													}
													Y -= 50;
													circle(X, Y, 5);
													a[K] = 1;
													K++;
												}
											} else if (f == 80) {
												if (Y != 250) {
													for (int i = 0; i <= 50; i++) {
														line(X, Y, X, Y + i);
														delay(10);
													}
													Y += 50;
													circle(X, Y, 5);
													a[K] = 2;
													K++;
												}
											} else if (f == 75) {
												if (X != 250) {
													for (int i = 0; i <= 50; i++) {
														line(X, Y, X - i, Y);
														delay(10);
													}
													X -= 50;
													circle(X, Y, 5);
													a[K] = 3;
													K++;
												}
											} else if (f == 77) {
												if (X != 350) {
													for (int i = 0; i <= 50; i++) {
														line(X, Y, X + i, Y);
														delay(10);
													}
													X += 50;
													circle(X, Y, 5);
													a[K] = 4;
													K++;
												}
											} else if (f == ' ')
												break;
											else if (f == 27)
												goto ty;
										}
										break;
									} else if (c == 27)
										goto ty;
								}
								if (K < 3) {
									settextstyle(7, 0, 2);
									outtextxy(99, 300,
											"CONNECT AT LEAST (4) DOTS. TRY AGAIN");
									delay(1500);
									closegraph();
									goto e;
								}
								settextstyle(7, 0, 2);
								outtextxy(205, 300, "PATTERN RECORDED");
								delay(1600);
								f: col();
								int b[30];
								initgraph(&gd, &gm, "c:\\turboc3\\bgi");
								settextstyle(7, 0, 4);
								outtextxy(205, 30, "PATTERN");
								settextstyle(7, 0, 1);
								outtextxy(130, 80,
										"(DRAW PATTERN AGAIN TO CONFIRM)");
								rectangle(235, 135, 365, 265);
								rectangle(232, 132, 368, 268);
								fill();
								for (i = 1; i <= 3; i++) {
									for (j = 1; j <= 3; j++) {
										circle(j * 50 + 200, i * 50 + 100, 3);
										floodfill(j * 50 + 200, i * 50 + 100,
												WHITE);
									}
									cout << "\n";
								}
								int w = 250, kj = 0;
								e = 150;
								for (;;) {
									setfillstyle(SOLID_FILL, WHITE);
									circle(w, e, 5);
									char c = getch();
									if (c == 72) {
										if (e != 150) {
											setcolor(8);
											circle(w, e, 5);
											setcolor(WHITE);
											e -= 50;
											circle(w, e, 5);
										}
									} else if (c == 80) {
										if (e != 250) {
											setcolor(8);
											circle(w, e, 5);
											setcolor(WHITE);
											e += 50;
											circle(w, e, 5);
										}
									} else if (c == 75) {
										if (w != 250) {
											setcolor(8);
											circle(w, e, 5);
											setcolor(WHITE);
											w -= 50;
											circle(w, e, 5);
										}
									} else if (c == 77) {
										if (w != 350) {
											setcolor(8);
											circle(w, e, 5);
											setcolor(WHITE);
											w += 50;
											circle(w, e, 5);
										}
									} else if (c == ' ') {
										for (;;) {
											char f = getch();
											if (f == 72) {
												if (e != 150) {
													for (int i = 0; i <= 50; i++) {
														line(w, e, w, e - i);
														delay(10);
													}
													e -= 50;
													circle(w, e, 5);
													b[kj] = 1;
													kj++;
												}
											} else if (f == 80) {
												if (e != 250) {
													for (int i = 0; i <= 50; i++) {
														line(w, e, w, e + i);
														delay(10);
													}
													e += 50;
													circle(w, e, 5);
													b[kj] = 2;
													kj++;
												}
											} else if (f == 75) {
												if (w != 250) {
													for (int i = 0; i <= 50; i++) {
														line(w, e, w - i, e);
														delay(10);
													}
													w -= 50;
													circle(w, e, 5);
													b[kj] = 3;
													kj++;
												}
											} else if (f == 77) {
												if (w != 350) {
													for (int i = 0; i <= 50; i++) {
														line(w, e, w + i, e);
														delay(10);
													}
													w += 50;
													circle(w, e, 5);
													b[kj] = 4;
													kj++;
												}
											} else if (f == ' ')
												break;
											else if (f == 27)
												goto ty;
										}
										break;
									} else if (c == 27)
										goto ty;
								}
								int m = 0;
								for (i = 0; i < kj; i++)
									if (a[i] != b[i])
										m++;
								if (K != kj || w != X || e != Y)
									m++;
								if (m) {
									settextstyle(7, 0, 2);
									outtextxy(175, 300,
											"WRONG PATTERN, TRY AGAIN");
									delay(1400);
									closegraph();
									goto f;
								}
								settextstyle(7, 0, 2);
								outtextxy(160, 300, "PATTERN CONFIRMED");
								fin.close();
								ofstream fout("pat.dat", ios::binary);

								t.n = kj;
								t.x = X;
								t.y = Y;
								for (i = 0; i < kj; i++)
									t.a[i] = b[i];
								fout.write((char*) &t, sizeof(t));
								fout.close();
								char c;
								outtextxy(30, 420,
										"DO YOU WANT TO CONTINUE WITH SECURITY?: ");
								cin >> c;
								if (c == 'y' || c == 'Y')
									goto ty;
								goto l;
							}
						} else if (l == '2') {
							int h = 0;
							d: char t[50];
							y = 0;
							w: cleardevice();
							cx();
							int k = 0, i, j = 0;
							for (;;) {
								char c = getch();
								if (c != '\r') {
									if (c == char(8)) {
										j = 0;
										cx();
										setcolor(8);
										for (i = 0; i < k - 1; i++) {
											outtextxy(188 + j, 202, "*");
											j += 10;
										}
										k--;
									}

									else if (c == 72) {
										j = 0;
										cx();
										setcolor(8);
										t[k] = '\0';
										outtextxy(188, 202, t);
										delay(1700);
										cx();
										setcolor(8);
										for (i = 0; i < k - 1; i++) {
											outtextxy(188 + j, 202, "*");
											j += 10;
										}
										k--;
									} else if (c == 27)
										goto ty;
									else {
										setcolor(8);
										outtextxy(188 + j, 202, "*");
										t[k] = c;
										k++;
										j += 10;
									}
								}

								else
									break;
							}
							t[k] = '\0';
							setcolor(WHITE);
							ifstream fin("pat.dat", ios::binary);
							pat m;
							fin.read((char*) &m, sizeof(m));
							fin.close();
							if (strcmp(t, m.pass) != 0) {
								y++;
								if (y < 3) {
									settextstyle(7, 0, 1);
									outtextxy(200, 298, "(wrong password)");
									delay(1000);
									goto w;
								}

								else {
									h++;
									if (h > 2) {
										cleardevice();
										setbkcolor(8);
										setcolor(WHITE);
										rectangle(8, 8, 630, 471);
										settextstyle(10, 0, 3);
										outtextxy(99, 60, "INTRUDER ALERT!!!");
										settextstyle(10, 0, 1);
										outtextxy(12, 400,
												"<ALL THE THE DATA FILES ARE DELETED>");
										settextstyle(10, 0, 5);
										setcolor( RED);
										outtextxy(50, 200, "ACCESS DENIED");
										remove("u.dat");
										remove("original.dat");remove("trash.dat");
										delay(2800);
										return (1);
									}

									else {
										settextstyle(1, 0, 1);
										outtextxy(55, 350,
												"ENTERED INCORRECT PASSWORD CONSEQUTIVELY (3)TIMES");
										outtextxy(55, 375, "WAIT FOR (");
										for (int z = 10; z >= 0; z--) {
											gotoxy(20, 25);
											cout << z;
											outtextxy(168, 375, ") SECONDS.");
											delay(900);
										}
										goto d;
									}
								}
							} else {
								xo();
								char t[50];
								o: cleardevice();
								xo();
								int k = 0, i, j = 0;
								for (;;) {
									char c = getch();
									if (c != '\r') {
										if (c == char(8)) {
											j = 0;
											xo();
											setcolor(8);
											for (i = 0; i < k - 1; i++) {
												outtextxy(188 + j, 202, "*");
												j += 10;
											}
											k--;
										}

										else if (c == 72) {
											j = 0;
											xo();
											setcolor(8);
											t[k] = '\0';
											outtextxy(188, 202, t);
											delay(1700);
											xo();
											setcolor(8);
											for (i = 0; i < k - 1; i++) {
												outtextxy(188 + j, 202, "*");
												j += 10;
											}
											k--;
										} else if (c == 27)
											goto ty;
										else {
											setcolor(8);
											outtextxy(188 + j, 202, "*");
											t[k] = c;
											k++;
											j += 10;
										}
									}

									else
										break;
								}
								t[k] = '\0';
								if (strlen(t) < 4) {
									settextstyle(7, 0, 2);
									setcolor(WHITE);
									outtextxy(10, 300,
											"(PASSWORD MUST CONTAIN ATLEAST (4) CHARACTERS.)");
									delay(1600);
									goto o;
								} else {
									char p[30];
									v();
									i: cleardevice();
									v();
									int k = 0, i, j = 0;
									for (;;) {
										char c = getch();
										if (c != '\r') {
											if (c == char(8)) {
												j = 0;
												v();
												setcolor(8);
												for (i = 0; i < k - 1; i++) {
													outtextxy(188 + j, 202, "*");
													j += 10;
												}
												k--;
											}

											else if (c == 72) {
												j = 0;
												v();
												setcolor(8);
												p[k] = '\0';
												outtextxy(188, 202, p);
												delay(1700);
												v();
												setcolor(8);
												for (i = 0; i < k - 1; i++) {
													outtextxy(188 + j, 202, "*");
													j += 10;
												}
												k--;
											} else if (c == 27)
												goto ty;
											else {
												setcolor(8);
												outtextxy(188 + j, 202, "*");
												p[k] = c;
												k++;
												j += 10;
											}
										}

										else
											break;
									}
									p[k] = '\0';
									if (strcmp(t, p) != 0) {
										settextstyle(7, 0, 1);
										setcolor(WHITE);
										outtextxy(200, 298, "(wrong password)");
										delay(1000);
										goto i;
									}

									ifstream fin("pat.dat", ios::binary);
									pat m;
									fin.read((char*) &m, sizeof(m));
									strcpy(m.pass, p);
									fin.close();
									ofstream fout("pat.dat", ios::binary);
									fout.write((char*) &m, sizeof(m));
									fout.close();
									setcolor(WHITE);
									char c;
									outtextxy(30, 370,
											"DO YOU WANT TO CONTINUE WITH SECURITY?: ");
									cin >> c;
									if (c == 'y' || c == 'Y')
										goto ty;
									goto l;

								}
							}
						} else if (l == 27)
							goto l;
					} else if (y == 399)
						return (1);
				}
			}
		}
	}

}





struct count
{
  int cl,cs;
  int lmonth,lyear;
};

void fng()
{
count c;
struct date d;
getdate(&d);
ofstream fout("count",ios::binary);
c.cl=0;c.lmonth=d.da_mon;c.cs=0;
c.lyear=d.da_year;
fout.write((char*)&c,sizeof(c));
fout.close();
}




void helpdesk()
{ cleardevice();
   clrscr();
   cleardevice();
	 settextstyle(10, 0, 1);
	 setcolor( WHITE);
	 outtextxy(200, 5, "MECH WINGS");
	 settextstyle(6, 0, 1);
	 outtextxy(10,50,"our program helps you to manage your money by having two class: ");
	 settextstyle(1, 0,4);
	 outtextxy(40,100,"INCOME");                                outtextxy(350,100,"EXPENSE");
	 settextstyle(0, 0,1);
	 outtextxy(38,150,"*has 3 categories:");                    outtextxy(348,150,"*has 2 categories:");
	 outtextxy(40,160,"savings(type 1)");                       outtextxy(350,160,"credit(type1),loan(type2)");
	 outtextxy(40,170,",deposit(type 2),salary(type 3)");
	 outtextxy(38,195,"*represented in the lelt pie chart");    outtextxy(348,195,"*represented in the right pie chart");
	 outtextxy(40,205,"in the start menu");                     outtextxy(350,205,"of the start menu");
	 outtextxy(38,225,"*helps to manage your monthly");         outtextxy(348,225,"*helps to manage your monthly" );
	 outtextxy(40,235,"income");				    outtextxy(350,235,"expenses");
	 settextstyle(6, 0, 1);
	 outtextxy(10,350,"you will get started prime category which is an savings category which can be");
	 outtextxy(10,370,"changed in the menu option if you want");
	 settextstyle(0,0,1);
	 outtextxy(400,420,"press(Enter)to continue->");
	 getch();
	 cleardevice();
	 settextstyle(10, 0, 1);
	 setcolor( WHITE);
	 outtextxy(200, 5, "MECH WINGS");
	 settextstyle(6, 0, 1);
	 outtextxy(10,50,"each category has different behaviour with respect to their classes");
	 settextstyle(1,0,2) ;
	 outtextxy(10,80,"(1).savings:-") ;
	 settextstyle(0,0,1);
	 outtextxy(40,110,"*each savings category can store a static amount which can be updated");
	 outtextxy(43,120,"explicitely in view\menu option");
	 outtextxy(40,135,"*your prime category(which gets incremented automatically when your total");
	 outtextxy(43,145,"is generated for that month)is also a savings category which cannot be");
	 outtextxy(43,155,"deleted but can be changed to another savings category by choosing");
	 outtextxy(43,165,"view\menu option if there exist");
	 settextstyle(1,0,2) ;
	 outtextxy(10,175,"(2).deposit:-") ;
	 settextstyle(0,0,1);
	 outtextxy(40,205,"*each deposit has a base amount which is static and an dynamicaly");
	 outtextxy(43,215,"generated intrest amount monthly, according to the intrest rate given");
	 outtextxy(43,225,"by the user with respect to the base amount");
	 outtextxy(40,240,"*the intrest amount will be added to the prime category monthly");
	 settextstyle(1,0,2) ;
	 outtextxy(10,250,"(3).salary:-");
	 settextstyle(0,0,1);
	 outtextxy(40,280,"*each salary category contains an amount which will generated");
	 outtextxy(43,290,"every month ");
	 outtextxy(40,305,"*the generated amount will be used to fulfil the expense");
	 settextstyle(0,0,1);
	 outtextxy(400,420,"press(Enter)to continue->");
	 getch();
	 cleardevice();
	 settextstyle(10, 0, 1);
	 setcolor( WHITE);
	 outtextxy(200, 5, "MECH WINGS");
	 settextstyle(1,0,2) ;
	 outtextxy(10,80,"(1).credit:-") ;
	 settextstyle(0,0,1);
	 outtextxy(40,110,"*each credit category stores the amount which will be credited from");
	 outtextxy(43,120,"your total income,monthly ");
	 outtextxy(40,135,"*the credit amount could be changed which will be reflected before the");
	 outtextxy(43,145,"choosing the view stats option for that month");
	 settextstyle(1,0,2) ;
	 outtextxy(10,155,"(2).loan:-");
	 settextstyle(0,0,1);
	 outtextxy(40,185,"*each category of loan contains an principle amount and monthly generated");
	 outtextxy(43,195,"intrest amount according to the intrest rate given by the user with respect") ;
	 outtextxy(40,205,"*this category will be alive only upto the time period given by the user");
	 outtextxy(43,215,"the intrest amount will be credited from income before the last month and");
	 outtextxy(43,225,",on the last month the principle and the intrest amount will be credited");
	 outtextxy(43,235,"and it goes out of scope");
	 outtextxy(40,250,"*you can also choose the type of intrest (simple or compound");
	 settextstyle(0,0,1);
	 outtextxy(400,420,"press(Enter)to continue->");
	 getch();
	 cleardevice();
	 settextstyle(10, 0, 1);
	 setcolor( WHITE);
	 outtextxy(200, 5, "MECH WINGS");
	 settextstyle(6, 0, 1);
	 outtextxy(10,50,"apart from these classes the view stats option helps to maniuplate the net");
	 outtextxy(10,70,"total amount for that month");
	 outtextxy(10,100,"if there are residual amount the amount will be added to prime category");
	 outtextxy(10,115,"else if the income is not sufficient we will automatically recomend to");
	 outtextxy(10,130,"take a loan and the principle amount will be used to meet the expense");
	 settextstyle(0,0,1);
	 outtextxy(400,420,"press(Enter)to continue->");
	 getch() ;

}


class income {
	float intrest,amount;
	int  mon, day, yr, type, count;
	char name[20], prime;

public:
	income() {
		 amount = 0;
		intrest = 0;
		mon = 0;
		day = 0;
		type = 0;
		strcpy(name, "\0");
		prime = '#';
	}
	void caltime() {
		struct date d;
		getdate(&d);
		mon = d.da_mon;
		day = d.da_day;
		yr = d.da_year;
	}

	void update(float amt) {
		income inc;
		ifstream fin("income", ios::binary);
		while (fin.read((char*) &inc, sizeof(inc))) {
			if (type == 1 && prime != '#')
				amt = amt - amount;
			else if(type==2)
				amt=amt-amount;
		}         fin.close();
		add_remain(amt);
	}
	void read();
	float display_main(int check = 0);
	float return_amt(int k=0);
	void del();
	void update_amount(float i) {
		amount = amount + i;
	}

	void add_remain(float total,int k=0);
	void write_file() {
		ofstream fout_inc("income", ios::binary | ios::app);
		fout_inc.write((char*) this, sizeof(*this));
		fout_inc.close();
	}
	void view_info(int y) {
		gotoxy(7, y);
		cout << name;
		gotoxy(18, y);
		cout << amount;
	}
	char getprime();
	char* showname();
	int gettype();
	void add_newprime();
	void view_detail(int y) {
		gotoxy(8, y);
		cout << name;
		gotoxy(15, y);
		if (prime == '*')
			cout << type << '*';
		else
			cout << type;
		gotoxy(26, y);
		cout << amount;
		gotoxy(39, y);
		cout << day << '/' << mon << '/' << yr;
		gotoxy(59, y);
		cout << intrest;
		gotoxy(70, y);
		cout << display_main();
	}
	void update_prime(int k=0) {
				 if(k==0)
				 prime = '*';
				 else if(k==1)
		prime='#';
	}
};
void income::add_newprime()
{
		settextstyle(1, 0, 1);
			outtextxy(10, 100, "ENTER THE NAME OF CATEGORY :");
			gotoxy(48,8);
		cout<<"<-type your name of category here";
		gotoxy(40, 8);
			gets(name);
		outtextxy(10, 300, "ENTER SAVINGS AMOUNT :");
		gotoxy(50,20)  ;
		cout<<"<-type the amount";
		gotoxy(40, 20);
		cin >> amount;
		type=1;
		prime='*';
		caltime();
		write_file();
}
void income::add_remain(float total,int k ) {
	fstream f("income", ios::binary | ios::in | ios::out);
	while (f.read((char*) this, sizeof(*this))) {
		if (type == 1 && prime == '*') {
					{ if(k==0)
					amount = total;
				 else
				 amount=amount+total; }
			f.seekp((int) (-sizeof(*this)), ios::cur);
			f.write((char*) this, sizeof(*this));
		}
	}
	f.close();
}

void income::del() {
	clrscr();
	cleardevice();
	setcolor( WHITE);
	settextstyle(10, 0, 1);
	outtextxy(200, 5, "MECH WINGS");
	settextstyle(1, 0, 1);
	ifstream fin_inc("income", ios::binary);
	if (!fin_inc) {
		outtextxy(10, 100, "NO CATEGORY FOUND");
	} else {
		int c, n = 0;
		gotoxy(1, 9);
		while (fin_inc.read((char*) this, sizeof(*this))) {
			cout << n + 1 << endl << endl;
			outtextxy(12, 120 + (n * 35), name);
			n++;
		}
		fin_inc.close();
		outtextxy(10, 100, "CHOOSE THE CATEGORY TO BE DELETED:");
		gotoxy(46, 7);
		cin >> c;
		int k = 0;
		if (n == 1)
			remove("income");
		else {
			fin_inc.open("income", ios::binary);
			ofstream fout("temp", ios::binary);
			while (fin_inc.read((char*) this, sizeof(*this))) {
				if ((k + 1) != c) {
					fout.write((char*) this, sizeof(*this));
				}
				k++;
			}
			fin_inc.close();
			fout.close();
			remove("income");
			rename("temp", "income");
		}
	}
	getch();
}
char* income::showname() {
	return name;
}

char income::getprime() {
	return prime;
}

float income::return_amt(int k) {
	ifstream fin("income", ios::binary);
	float x = 0;
	while (fin.read((char*) this, sizeof(*this)))
			{	if (prime == '*'&&k==0)
			x = amount;
		else if(prime=='#'&&k==1)
		x=amount;
		 }
	fin.close();
	return (x);
}

int income::gettype() {
	return type;
}

float income::display_main(int check) {
	int date, month, year;
	struct date d;
	getdate(&d);
	date = d.da_day - day;
	month = d.da_mon - mon + 1;
	year = d.da_year - yr;
	if (type == 1) {
		if (prime == '*') {
			if (check == 0)
				return (amount);
			return (0);
		}
		return (amount);
	} else if (type == 2 && month) {
		return (amount + (amount * intrest) / 100);
	} else if (type == 3 && month)
	{
		return (amount);
	} else
		return (0);
}
void income::read() {
	clrscr();
	cleardevice();
	setcolor( WHITE);
	settextstyle(10, 0, 1);
	struct count c;
	fstream f("count", ios::binary | ios::in | ios::out);
	f.read((char*) &c, sizeof(c));
	f.close();
	outtextxy(200, 5, "MECH WINGS");
	amount = 0;
	intrest = 0;
	mon = 0;
	day = 0;
	type = 0;
	strcpy(name, "\0");
	prime = '#';
	settextstyle(1, 0, 1);
	outtextxy(10, 100, "ENTER THE NAME OF CATEGORY :");
	gotoxy(40, 8);
	gets(name);
	outtextxy(10, 200, "ENTER TYPE OF INCOME :");
	gotoxy(48, 23);
	cout << " type\n";
	cout << setw(52) << " ----\n";
	cout << setw(54) << "1.savings\n";
	cout << setw(54) << "2.deposit\n";
	cout << setw(52) << "3.salary";
	rectangle(350, 350, 450, 450);
	gotoxy(40, 14);
	cin >> type;
	if (type == 1) {
		char ch;
		income inc;
		outtextxy(10, 300, "ENTER SAVINGS AMOUNT :");
		gotoxy(40, 20);
		cin >> amount;
		clrscr();
		cleardevice();
		setcolor(WHITE);
		settextstyle(10, 0, 1);
		outtextxy(200, 5, "MECH WINGS");
		settextstyle(1, 0, 1);
		prime='#';
		caltime();
		write_file();
	} else if (type == 2) {
		outtextxy(10, 300, "ENTER DEPOSIT AMOUNT : ");
		gotoxy(40, 20);
		cin >> amount;
		outtextxy(10, 400, "ENTER INTREST(IN %) : ");
		gotoxy(40, 23);
		cin >> intrest;
		prime = '#';
		caltime();
		write_file();
		if (c.cs)
			add_remain(((amount * intrest) / 100),1);
	} else if (type == 3) {
		outtextxy(10, 300, "ENTER MONTHLY SALARY : ");
		gotoxy(40, 20);
		cin >> amount;
		caltime();
		write_file();
		prime = '#';
		if (c.cs)
			add_remain(amount,1);

	}
}
class expence {

	float amount, rate,intrest;
	int  mon, day, yr, lmon, lyr, type, x, time;
	char name[20];
public:
	expence() {
		amount = 0;
		intrest = 0;
		mon = 0;
		day = 0;
		type = 0;
		strcpy(name, "\0");
	}
	void caltime() {
		struct date d;
		getdate(&d);
		mon = d.da_mon;
		day = d.da_day;
		yr = d.da_year;
		if (type == 2) {
			long int x = yr * 12 + time + mon - 1;
			lyr = x / 12;
			lmon = x % 12;
		}
	}
	void read() {

		clrscr();
		cleardevice();
		setcolor( WHITE);
		count c;
		fstream f("count", ios::binary | ios::in | ios::out);
		f.read((char*) &c, sizeof(c));
		f.close();
		settextstyle(10, 0, 1);
		outtextxy(200, 5, "MECH WINGS");
		settextstyle(1, 0, 1);
		outtextxy(10, 100, "ENTER THE NAME OF CATEGORY :");
		gotoxy(40, 8);
		gets(name);
		outtextxy(10, 200, "ENTER TYPE OF EXPENCE :");
		gotoxy(48, 23);
		cout << " type\n";
		cout << setw(52) << " ----\n";
		cout << setw(54) << "1.credit\n";
		cout << setw(52) << "2.loan";
		rectangle(350, 350, 450, 450);
		gotoxy(40, 14);
		cin >> type;
		if (type == 1) {
			outtextxy(10, 300, "ENTER BILL AMOUNT :");
			gotoxy(40, 20);
			cin >> amount;
			caltime();
			write_file();
			if (c.cs) {
				income add;
				add.add_remain(-amount,1);
			}
		}
		if (type == 2) {
			outtextxy(10, 300, "ENTER THE AMOUNT :");
			gotoxy(40, 20);
			cin >> amount;
			outtextxy(10, 350, "ENTER RATE OF INTREST (IN%) :");
			gotoxy(40, 23);
			cin >> intrest;
			outtextxy(10, 380, "ENTER TIME PERIOD (IN MONTHS) :");
			gotoxy(42, 25);
			cin >> time;
			clrscr();
			cleardevice();
			settextstyle(10, 0, 1);
			outtextxy(200, 5, "MECH WINGS");
			settextstyle(1, 0, 1);
			outtextxy(10, 100, "ENTER THE TYPE OF INTREST:");
			outtextxy(10, 200, "(1).SIMPLE INTREST");
			outtextxy(10, 250, "(2).COMPOUND INTREST");
			gotoxy(40, 8);
			cin >> x;
			int temp = x;
			caltime();
			write_file();
			if (c.cs) {
				income inc;
				struct date d;
				getdate(&d);
				if (temp == 1) {
					if (d.da_mon == lmon && d.da_year == lyr)
						inc.add_remain(
								-(amount + (amount * intrest * time) / 100),1);
					else
						inc.add_remain(-((amount * intrest * time) / 100),1);
				} else if (temp == 2) {
					float principle = amount * pow((100 + intrest) / 100.0, 6)
							* 1.0;
					if (d.da_mon == lmon && d.da_year == lyr)
						inc.add_remain(-principle,1);
					else
						inc.add_remain(-(principle - amount),1);
				}
			}
		}
	}
	void write_file() {
		ofstream fout_exp;
		fout_exp.open("expence", ios::binary | ios::ate);
		fout_exp.write((char*) this, sizeof(*this));
		fout_exp.close();
	}
	char* showname();
	void take_loan(float total);
	void del_loan();
	void view_info(int y) {
		gotoxy(50, y);
		cout << name;
		gotoxy(61, y);
		if(type==2)
		{
		 if(x==1)
		 cout<<(amount*intrest*time)/100;
		 else if(x==2)
		 {   float principle = amount * pow((100 + intrest) / 100.0, 6)* 1.0;
		     cout<<principle-amount;
		 }
		}
		else
		cout << amount;
	}
	void view_detail(int y) {
		gotoxy(8, y);
		cout << name;
		gotoxy(15, y);
		cout << type;
		gotoxy(26, y);
		cout << amount;
		gotoxy(39, y);
		cout << day << '/' << mon << '/' << yr;
		gotoxy(59, y);
		cout << intrest;
		gotoxy(70, y);
		cout << display_main();
	}
	float display_main();
	void del();
	void update_amount(float i) {
		amount = amount + i;
	}
	int gettype();
};
void expence::take_loan(float total) {
	clrscr();
	cleardevice();
	setcolor( WHITE);
	settextstyle(10, 0, 1);
	outtextxy(200, 5, "MECH WINGS");
	settextstyle(1, 0, 1);
	outtextxy(10, 40, "YOUR INCOME IS NOT ENOUGH FOR THIS MONTH WE RECOMEND ");
	outtextxy(10, 60, "TO TAKE LOAN OF RS");
	gotoxy(11,5);
	cout << -total;
	outtextxy(10, 100, "ENTER THE NAME OF CATEGORY :");
	gotoxy(40, 8);
	gets(name);
	type = 2;
	outtextxy(10, 200, "ENTER THE AMOUNT (SHOULD BE GREATER OR EQUAL TO");
	outtextxy(10, 250, "RECOMENDED AMOUNT) :");
	do {
		gotoxy(40, 17);
		cin >> amount;
	} while (amount < total);
	outtextxy(10, 350, "ENTER RATE OF INTREST (IN%) :");
	gotoxy(40, 22);
	cin >> intrest;
	outtextxy(10, 380, "ENTER TIME PERIOD (IN MONTHS) :");
	gotoxy(40, 24);
	cin >> time;
	clrscr();
	cleardevice();
	settextstyle(10, 0, 1);
	outtextxy(200, 5, "MECH WINGS");
	settextstyle(1, 0, 1);
	outtextxy(10, 100, "ENTER THE TYPE OF INTREST:");
	outtextxy(10, 200, "(1).SIMPLE INTREST");
	outtextxy(10, 250, "(2).COMPOUND INTREST");
	gotoxy(40, 8);
	cin >> x;
	int temp = x;
	caltime();
	write_file();
	income inc;
	struct date d;
	getdate(&d);
	if (temp == 1) {

			inc.add_remain((amount-total ),1);
	} else if (temp == 2) {
		float principle = amount * pow((100 + intrest) / 100.0, 6) * 1.0;

			inc.add_remain(-(principle-total),1);

	}

}
void expence::del_loan() {
	expence exp;
	ifstream fin_exp("expence", ios::binary);
	ofstream fout("temp", ios::binary);
	while (fin_exp.read((char*) &exp, sizeof(exp))) {
		if (type == exp.type && time == time && amount == exp.amount) {
			break;
		} else
			fout.write((char*) &exp, sizeof(exp));
	}
	while (fin_exp.read((char*) &exp, sizeof(exp)))
		fout.write((char*) &exp, sizeof(exp));
	fin_exp.close();
	fout.close();
	remove("expence");
	rename("temp", "expence");

}

void expence::del() {
	clrscr();
	cleardevice();
	setcolor( WHITE);
	settextstyle(10, 0, 1);
	outtextxy(200, 5, "MECH WINGS");
	settextstyle(1, 0, 1);
	ifstream fin_exp("expence", ios::binary);
	if (!fin_exp) {
		outtextxy(10, 100, "NO CATEGORY FOUND");
	} else {
		int c, n = 0;
		gotoxy(1, 9);
		while (fin_exp.read((char*) this, sizeof(*this))) {
			cout << n + 1 << endl << endl;
			outtextxy(12, 120 + (n * 35), name);
			n++;
		}
		fin_exp.close();
		outtextxy(10, 100, "CHOCE THE CATEGORY TO BE DELETED:");
		gotoxy(46, 7);
		cin >> c;
		int k = 0;
		if (n == 1)
			remove("expence");
		else {
			fin_exp.open("expence", ios::binary);
			ofstream fout("temp", ios::binary);
			while (fin_exp.read((char*) this, sizeof(*this))) {
				if ((k + 1) != c) {
					fout.write((char*) this, sizeof(*this));
				}
				k++;
			}
			fin_exp.close();
			fout.close();
			remove("expence");
			rename("temp", "expence");
		}
	}
	getch();
}
char* expence::showname() {
	return name;
}
int expence::gettype() {
	return type;
}
float expence::display_main() {
	int date, month, year;
	struct date d;
	getdate(&d);
	date = d.da_day - day;
	month = d.da_mon - mon + 1;
	year = d.da_year - yr;
	if (type == 1 && month)
		return amount;
	else if (type == 2 && month) {
		long int k = lyr * 12 + lmon, y = d.da_year * 12 + d.da_mon;

		if (x == 1) {
			if (y > k) {
				del_loan();
			} else if (y == k) {
				return (amount + ((amount * intrest * time) / 100));
			} else if (y < k) {
				return ((amount * intrest * time) / 100);
			}
		}
		if (x == 2) {
			float principle = amount * pow(1 + ((intrest) / 100), time);
			if (y > k) {
				del_loan();
			} else if (y == k) {
				return (principle);
			} else if (y < k)
				return (principle - amount);
		}
	}
	return (0);
}
void manage() {
	income inc;
	expence exp;
	clrscr();
	int gd = DETECT, gm, i=3;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
		setbkcolor( LIGHTGRAY);
	do {

		setpalette(7, 0);
		cleardevice();
		ifstream fin_inc("income", ios::binary);
		ifstream fin_exp("expence", ios::binary);
		if (!fin_inc && !fin_exp) {
			char ch;
		       settextstyle(1, 0, 1);
			cleardevice();
			settextstyle(10, 0, 1);
			setcolor( WHITE);
			outtextxy(200, 5, "MECH WINGS");
			settextstyle(6, 0, 1);
			outtextxy(10,50,"Welcome to Mech Wings Money Management Application (shortly:\"mwmma\")");
			outtextxy(10,80,"our software helps you to use and manage your money effectively ");
					settextstyle(0,0,1);
					outtextxy(400,400,"press (Esc)to skip");
					outtextxy(400,420,"press(Enter)to continue");
					ch=getch();
					fng();
				       if(ch!=27)
				       { helpdesk();
				       clrscr();
				       cleardevice();
					settextstyle(10, 0, 1);
					setcolor( WHITE);
					outtextxy(200, 5, "MECH WINGS");
					settextstyle(6, 0, 1);
					outtextxy(10,40,"Now lets get started by creating your own primary savings category");
				       inc.add_newprime();

				       }
				      else
				      {	outtextxy(10,40,"Now lets get started by creating your own primary savings category");
					getch() ;
				       inc.add_newprime();
				      }

		}
		fin_inc.close();
		fin_exp.close();
		fin_inc.open("income",ios::binary);
		fin_exp.open("expence",ios::binary);
		cleardevice();
		settextstyle(10, 0, 1);
		setcolor( WHITE);
		outtextxy(200, 5, "MECH WINGS");
			int n_inc = 0, n_exp = 0;
			float total_inc = 0, total_exp = 0;
			while (fin_inc.read((char*) &inc, sizeof(inc))) {
				n_inc++;
				total_inc += inc.display_main();
			}
			while (fin_exp.read((char*) &exp, sizeof(exp))) {
				n_exp++;
				total_exp += exp.display_main();
			}
			fin_inc.close();
			fin_exp.close();
			settextstyle(0, 0, 1);
			int j = 0, rand = 0;
			fin_inc.open("income", ios::binary);
			fin_exp.open("expence", ios::binary);
			randomize();
			for (i = 0; i < n_inc; i++) {
				fin_inc.seekg(i * sizeof(inc), ios::beg);
				fin_inc.read((char*) &inc, sizeof(inc));
				float avg = inc.display_main();
				avg = (avg / total_inc);
				rand = 1 + random(6);
				int percent = avg * 360 + j;
				setcolor(rand);
				outtextxy(75, 270 + (20 * (i + 1)), inc.showname());
				setfillstyle(5, rand);
				if (i == n_inc - 1)
					pieslice(150, 170, j, 360, 60);
				else
					pieslice(150, 170, j, percent, 60);
				j = percent;
			}
			j = 0;
			for (i = 0; i < n_exp; i++) {
				fin_exp.seekg(i * sizeof(exp), ios::beg);
				fin_exp.read((char*) &exp, sizeof(exp));
				float avg = exp.display_main();
				rand = 1 + random(6);
				setcolor(rand);
				avg = (avg / total_exp);
				int percent = avg * 360 + j;
				outtextxy(380, 270 + (20 * (i + 1)), exp.showname());
				setfillstyle(5, rand);
				if (i == n_exp - 1)
					pieslice(450, 170, j, 360, 60);
				else
					pieslice(450, 170, j, percent, 60);
				j = percent;
			}
		fin_inc.close();
		fin_exp.close();
		settextstyle(1, 0, 1);
		setcolor( GREEN);
		outtextxy(75, 260, "INCOME:");
		setcolor( RED);
		outtextxy(380, 260, "EXPENSES:");
		setcolor(WHITE);
		settextstyle(1, 0, 1);
		outtextxy(5, 40, "EDIT(1)");
		outtextxy(5, 60, "MENU(2)");
		outtextxy(5, 80, "EXIT(3)");
		gotoxy(15, 4);
		cin >> i;
		cleardevice();
		if (i == 1) {
			int x;
			setcolor(WHITE);
			settextstyle(10, 0, 1);
			outtextxy(200, 5, "MECH WINGS");
			settextstyle(7, 0, 3);
			outtextxy(10, 50, "MENU:");
			outtextxy(10, 100, "(1). ADD NEW CATEGORY");
			outtextxy(10, 150, "(2). REMOVE A CATEGORY");
			outtextxy(10, 300, "ENTER YOUR CHOICE: ");
			gotoxy(39, 20);
			cin >> x;
			cleardevice();
			if (x == 1) {
				int k;
				setcolor(WHITE);
				settextstyle(10, 0, 1);
				outtextxy(200, 5, "MECH WINGS");
				settextstyle(7, 0, 3);
				outtextxy(10, 50, "SELECT CLASS:");
				outtextxy(10, 100, "(1). INCOME");
				outtextxy(10, 150, "(2). EXPENSE");
				outtextxy(10, 300, "ENTER YOUR CHOICE: ");
				gotoxy(39, 20);
				cin >> k;
				if (k == 1) {
					inc.read();
				} else if(k==2) {
					exp.read();
				}
			} else if (x == 2) {
				int y;
				setcolor(WHITE);
				settextstyle(10, 0, 1);
				outtextxy(200, 5, "MECH WINGS");
				settextstyle(7, 0, 3);
				outtextxy(10, 50, "SELECT CLASS:");
				outtextxy(10, 100, "(1). INCOME");
				outtextxy(10, 150, "(2). EXPENSE");
				outtextxy(10, 300, "ENTER YOUR CHOICE: ");
				gotoxy(39, 20);
				cin >> y;
				if (y == 1) {
					clrscr();
					cleardevice();
					setcolor(WHITE);
					settextstyle(10, 0, 1);
					outtextxy(200, 5, "MECH WINGS");
					settextstyle(1, 0, 1);
					fin_inc.open("income", ios::binary);
					if (!fin_inc) {
						outtextxy(10, 100, "NO CATEGORY FOUND");
					} else {
						int c, n = 0;
						gotoxy(1, 9);
						while (fin_inc.read((char*) &inc, sizeof(inc))) {
							if(inc.getprime()!='*')
						      {	cout << n + 1 << endl << endl;
							outtextxy(12, 120 + (n * 35), inc.showname());
							n++;}
						}
						fin_inc.close();
						outtextxy(10, 100, "CHOOSE THE CATEGORY TO BE DELETED:");
						gotoxy(46, 7);
						cin >> c;
						int k = 0;
						{
							fin_inc.open("income", ios::binary);
							ofstream fout("temp", ios::binary);
							while (fin_inc.read((char*) &inc, sizeof(inc))) {
								if(inc.getprime()!='*')
							       {	if ((k + 1) != c) 
								       { fout.write((char*) &inc, sizeof(inc));}
								       k++;
								       

								   }   if(inc.getprime()=='*')
								       {fout.write((char*) &inc, sizeof(inc)); }
							
							}
							fin_inc.close();
							fout.close();
							remove("income");
							rename("temp", "income");
						}
					}
				} else if (y == 2) {
					clrscr();
					cleardevice();
					setcolor(WHITE);
					settextstyle(10, 0, 1);
					outtextxy(200, 5, "MECH WINGS");
					settextstyle(1, 0, 1);
					fin_exp.open("expence", ios::binary);
					if (!fin_exp) {
						outtextxy(10, 100, "NO CATEGORY FOUND");
					} else {
						int c, n = 0;
						gotoxy(1, 9);
						while (fin_exp.read((char*) &exp, sizeof(exp))) {
							cout << n + 1 << endl << endl;
							outtextxy(12, 120 + (n * 35), exp.showname());
							n++;
						}
						fin_exp.close();
						outtextxy(10, 100, "CHOCE THE CATEGORY TO BE DELETED:");
						gotoxy(46, 7);
						cin >> c;
						int k = 0;
						if (n == 1)
							remove("expence");
						else {
							fin_exp.open("expence", ios::binary);
							ofstream fout("temp", ios::binary);
							while (fin_exp.read((char*) &exp, sizeof(exp))) {
								if ((k + 1) != c) {
									fout.write((char*) &exp, sizeof(exp));
								}
								k++;
							}
							fin_exp.close();
							fout.close();
							remove("expence");
							rename("temp", "expence");
						}
					}
				}
			}
		} else if (i == 2) {
			setcolor(WHITE);
			settextstyle(10, 0, 1);
			outtextxy(200, 5, "MECH WINGS");
			fin_inc.open("income", ios::binary);
			fin_exp.open("expence", ios::binary);
			settextstyle(1, 0, 1);
			if (!fin_exp && !fin_inc) {
				clrscr();
				cleardevice();
				setcolor(WHITE);
				settextstyle(10, 0, 1);
				outtextxy(200, 5, "MECH WINGS");
				outtextxy(200, 100, "NO CATEGORY FOUND");
				getch();
				fin_exp.close();
				fin_exp.close();
			} else {

				fin_inc.close();
				fin_exp.close();
				int k = 0;
				do {
					clrscr();
					cleardevice();
					outtextxy(5, 50, "MENU:");
					outtextxy(5, 100, "(1).DISPLAY INCOME");
					outtextxy(5, 150, "(2).DISPLAY EXPENSE");
					outtextxy(5, 200, "(3).OPTIONS");
					outtextxy(5, 250, "(4).VIEW STATS");
					outtextxy(5, 300, "(5)EXIT");
					outtextxy(5, 350, "ENTER CHOICE:");
					gotoxy(40, 23);
					cin >> k;
					if (k == 1) {
						clrscr();
						cleardevice();
						settextstyle(1, 0, 1);
						fin_inc.open("income", ios::binary);
						int y = 5;
						while (fin_inc.read((char*) &inc, sizeof(inc))) {
							y = y + 2;
							inc.view_detail(y);
						}
						fin_inc.close();
						setcolor(GREEN);
						outtextxy(10, 35, "INCOME:");
						setcolor(WHITE);
						line(40, 60, 40, 400);
						outtextxy(40, 60, "NAME");
						line(100, 60, 100, 400);
						outtextxy(110, 60, "TYPE");
						line(195, 60, 195, 400);
						outtextxy(200, 60, "AMOUNT");
						line(295, 60, 295, 400);
						outtextxy(300, 60, "DATE CREATED");
						line(445, 60, 445, 400);
						outtextxy(450, 60, "INTEREST");
						line(545, 60, 545, 400);
						outtextxy(550, 60, "GROSS");
						line(620, 60, 620, 400);
						line(40, 60, 620, 60);
						line(40, 400, 620, 400);

					} else if (k == 2) {

						clrscr();
						cleardevice();
						settextstyle(1, 0, 1);
						fin_exp.open("expence", ios::binary);
						int y = 5;
						while (fin_exp.read((char*) &exp, sizeof(exp))) {
							y = y + 2;
							exp.view_detail(y);
						}
						fin_exp.close();
						setcolor(RED);
						outtextxy(10, 35, "EXPENSE:");
						setcolor(WHITE);
						line(40, 60, 40, 400);
						outtextxy(40, 60, "NAME");
						line(100, 60, 100, 400);
						outtextxy(110, 60, "TYPE");
						line(195, 60, 195, 400);
						outtextxy(200, 60, "AMOUNT");
						line(295, 60, 295, 400);
						outtextxy(300, 60, "DATE CREATED");
						line(445, 60, 445, 400);
						outtextxy(450, 60, "INTEREST");
						line(545, 60, 545, 400);
						outtextxy(550, 60, "GROSS");
						line(620, 60, 620, 400);
						line(40, 60, 620, 60);
						line(40, 400, 620, 400);

					} else if (k == 3) {
						int x;
						do {
							clrscr();
							cleardevice();
							setcolor(WHITE);
							settextstyle(10, 0, 1);
							outtextxy(200, 5, "MECH WINGS");
							settextstyle(1, 0, 1);
							outtextxy(5, 50, "MENU");
							outtextxy(5, 100,"(1).CHANGE PRIMARY SAVINGS CATEGORY");
							outtextxy(5, 150, "(2).CHANGE SAVINGS AMOUNT");
							outtextxy(5, 200, "(3).CHANGE BILL AMOUNT");
							outtextxy(5, 250, "(4).EXIT");
							outtextxy(5, 300, "ENTER CHOICE:");
							gotoxy(40, 20);
							cin >> x;
							if (x == 1) {
								int y=0,prime_count = 0,s_count=0;
								clrscr();
								cleardevice();
								setcolor(WHITE);
								settextstyle(10, 0, 1);
								outtextxy(200, 5, "MECH WINGS");
								settextstyle(1, 0, 1);
								fin_inc.open("income", ios::binary);
								while (fin_inc.read((char*) &inc, sizeof(inc))) {
									if (inc.gettype() == 1 && inc.getprime()
											== '#') {

										s_count++;
										y++;

									} else if (inc.gettype() == 1&&inc.getprime()=='*') {     prime_count++;
										y++;
									}
								}
								fin_inc.close();
								fin_inc.open("income", ios::binary);
								if(s_count==0)
								{outtextxy(20,100,"THERE IS NO SAVINGS CATEGORY OTHER THAN PRIME CATEGORY"); }
								if (s_count && y != 0) {
									int c = 0, n = 0, check = 0;
									gotoxy(1, 9);
									while (fin_inc.read((char*) &inc,
											sizeof(inc))) {

										if (inc.gettype() == 1&&inc.getprime()=='#') {
											cout << n + 1 << endl << endl;
											outtextxy(12, 120 + (n * 35),
													inc.showname());
											n++;
										}
									}
									fin_inc.close();
									fstream f("income",
											ios::binary | ios::in | ios::out);
									outtextxy(10, 100,
											"CHOCE THE CATEGORY TO BE CHANGED TO PRIMARY:");
									outtextxy(50, 600,
											"note:-only one primary category could exist");
									gotoxy(71, 7);
									cin >> c;
									while (f.read((char*) &inc, sizeof(inc))) {
												       if(inc.gettype() == 1&&inc.getprime()=='*')
									       {	inc.update_prime(1);
											f.seekp((int) (-sizeof(inc)),
													ios::cur);
											f.write((char*) &inc, sizeof(inc));

										 }
									      else{	if (inc.gettype() == 1&&inc.getprime()=='#') {
											check++;
										}
										if (check == c) {
											inc.update_prime();
											f.seekp((int) (-sizeof(inc)),
													ios::cur);
											f.write((char*) &inc, sizeof(inc));

										}  }

									}
							    f.close();	} else if (y == 0) {
									outtextxy(200, 100, "NO CATEGORY FOUND");
								}
							getch();
							} else if (x == 2) {
								int c = 0, n = 0, check = 0;
								float amt = 0;
								clrscr();
								cleardevice();
								setcolor(WHITE);
								settextstyle(10, 0, 1);
								outtextxy(200, 5, "MECH WINGS");
								settextstyle(1, 0, 1);
								outtextxy(10, 100,
										"ENTER THE AMOUNT TO BE ADDED/SUBRACTED:");
								gotoxy(71, 7);
								cin >> amt;
								gotoxy(1, 12);
								fin_inc.open("income", ios::binary);
								while (fin_inc.read((char*) &inc, sizeof(inc))) {
									if (inc.gettype() == 1) {
										cout << n + 1 << endl << endl;
										outtextxy(12, 170 + (n * 35),
												inc.showname());
										n++;
									}
								}
								fin_inc.close();

									outtextxy(10, 150,
										"CHOOSE THE CATEGORY TO BE UPDATED:");
								gotoxy(71, 11);
								cin >> c;
								fstream f("income",
										ios::binary | ios::in | ios::out);

								while (f.read((char*) &inc, sizeof(inc))) {
									if (inc.gettype() == 1) {
										check++;
									}
									if (check == c) {
										inc.update_amount(amt);
										f.seekp((int) (-sizeof(inc)), ios::cur);
										f.write((char*) &inc, sizeof(inc));
										break;
									}
								}
								f.close();
							} else if (x == 3) {
								int c = 0, n = 0, check = 0;
								float amt = 0;
								clrscr();
								cleardevice();
								setcolor(WHITE);
								settextstyle(10, 0, 1);
								outtextxy(200, 5, "MECH WINGS");
								settextstyle(1, 0, 1);
								outtextxy(10, 100,
										"ENTER THE AMOUNT TO BE ADDED/SUBRACTED:");
								gotoxy(71, 7);
								cin >> amt;
								gotoxy(1, 12);
								fin_exp.open("expence", ios::binary);
								while (fin_exp.read((char*) &exp, sizeof(exp))) {
									if (exp.gettype() == 1) {
										cout << n + 1 << endl << endl;
										outtextxy(12, 170 + (n * 35),
												exp.showname());
										n++;
									}
								}
								fin_exp.close();
								outtextxy(10, 150,
										"CHOOSE THE CATEGORY TO BE UPDATED:");
								gotoxy(71, 11);
								cin >> c;
								fstream f("expence",
										ios::binary | ios::in | ios::out);

								while (f.read((char*) &exp, sizeof(exp))) {
									if (inc.gettype() == 1) {
										check++;
									}
									if (check == c) {
										exp.update_amount(amt);
										f.seekp((int) (-sizeof(exp)), ios::cur);
										f.write((char*) &exp, sizeof(exp));
										break;
									}
								}
								f.close();
							}
						} while (x != 4);
					} else if (k == 4) {
						clrscr();
						cleardevice();
						setcolor(WHITE);
						settextstyle(10, 0, 1);
						outtextxy(200, 5, "MECH WINGS");
						settextstyle(1, 0, 1);
						setcolor(GREEN);
						outtextxy(40, 50, "INCOME:");
						setcolor(RED);
						outtextxy(370, 50, "EXPENSE:");
						setcolor(WHITE);
						line(30, 80, 30, 300);
						outtextxy(40, 80, "NAME");
						line(130, 80, 130, 300);
						outtextxy(140, 80, "AMOUNT");
						line(220, 80, 220, 300);
						line(360, 80, 360, 300);
						outtextxy(370, 80, "NAME");
						line(470, 80, 470, 300);
						outtextxy(480, 80, "AMOUNT");
						line(560, 80, 560, 300);
						line(30, 80, 220, 80);
						line(360, 80, 560, 80);
						line(30, 300, 220, 300);
						line(360, 300, 560, 300);
						outtextxy(40, 320, "TOTAL :");
						outtextxy(370, 320, "TOTAL :");
						outtextxy(220, 380, "NET TOTAL  =");
						fin_inc.open("income", ios::binary);
						int y = 6;
						while (fin_inc.read((char*) &inc, sizeof(inc))) {
							y = y + 2;
							inc.view_info(y);
						}
						fin_inc.close();
						fin_exp.open("expence", ios::binary);
						y = 6;
						while (fin_exp.read((char*) &exp, sizeof(exp))) {
							y = y + 2;
							exp.view_info(y);
						}
						fin_exp.close();
						float total_inc = 0, total_exp = 0;
						fin_inc.open("income", ios::binary);
						while (fin_inc.read((char*) &inc, sizeof(inc))) {
							total_inc += inc.display_main();
						}
						fin_inc.close();
						fin_exp.open("expence", ios::binary);
						while (fin_exp.read((char*) &exp, sizeof(exp))) {
							total_exp += exp.display_main();
						}
						fin_exp.close();
						count c;
						struct date d;
						getdate(&d);
						fstream f("count", ios::binary | ios::in | ios::out);
						f.read((char*) &c, sizeof(c));
						f.close();


						gotoxy(61, 21);
						cout << total_exp;
						gotoxy(45, 25);
						float total = total_inc - total_exp;


						if(c.cs)
						cout<<total_inc;
						else
						cout<<total;
						gotoxy(18, 21);
					       if(c.cs==0)
					    cout << total_inc;
					    else
				    cout<<inc.return_amt()+inc.return_amt(1);

						if ((c.cl != 0 || c.cs != 0) &&( (c.lmonth+c.lyear*12)
								< (int(d.da_mon)+int(d.da_year)*12))) {
							c.cl = 0;
							c.lmonth = d.da_mon;  c.lyear=d.da_year;
							c.cs = 0;
						}
							if (c.cs || c.cl) {
							outtextxy(30, 400,"note: if the total do not match it is already calculated");
							outtextxy(30, 450, "for this month");
						}
						if (total >= 0) {
							if (c.cs == 0 && c.lmonth == int(d.da_mon)) {
								inc.add_remain(total);
								c.cs++;
							}
						}
						if (total < 0) {
						       getch();
							if (c.cl == 0 && c.lmonth == int(d.da_mon)) {
								inc.add_remain(total_inc);
								exp.take_loan(total);
								c.cl++;
							}
						}
						f.open("count",ios::in|ios::out|ios::binary|ios::ate);
						f.seekp(0, ios::beg);
						f.write((char*) &c, sizeof(c));
						f.close();

					}
					getch();
				} while (k != 5);
			}
		}

	} while (i != 3);
getch();
}



struct adress {
	int plotno;
	char st[30];
	char area[50];
	char city[20];
	long int pc;
};
struct place {
	char area[20];
	int ir, ip, ia, ig;
	struct restarunt {
		char name[50];
		adress a;
		float rating;
		int i;
	} r[20];
	struct phamachies {
		char name[50];
		adress a;
		int i;
	} p[20];
	struct atm {
		char name[50];
		adress a;
		int i;
	} a[20];
	struct gasstation {
		char name[50];
		adress a;
		int i;
	} g[20];
};
void insert(place p, int k = 0) {
    fstream f;
	int n=0;
   clrscr();    cleardevice();
 //  setbkcolor(LIGHTGRAY);
	if (k == 0) {

		n++;
		cout << "\n\t enter the area to be added";
		gets(p.area);
	     //	f.write((char*)&p,sizeof(p));
		k = 1;    p.ir=0;p.ip=0;p.ia=0;p.ig=0;
	}
	if (k) {
		int c;

			if(n==0)
			{

	    ifstream fin("place",ios::binary);
		if(!fin)
		{cout<<"\n\tfile does not exist";}
		else{	int j=0;
				cout<<"\n\tarea";
			  while(fin.read((char*)&p,sizeof(p)))
			  {
				cout << "\n\t\t" << j + 1 << '.';
				puts(p.area);
				cout << '\n';j++;
			}
			cout << "\n\n\tenter your choice:";
			cin>>j;
			fin.close();
				f.open("place",ios::binary|ios::in|ios::out|ios::ate);
				f.seekg((j-1)*sizeof(p),ios::beg);
			}

			      }

		clrscr();cleardevice();
	   //   setbkcolor(LIGHTGRAY);
		//f.seekg(,ios::end);
		cout << "\n\t enter the place to be inserted";
		cout << "\n\t\tmenu\n\t\t----\n\t1.restarunt\n\t2.atm\n\t3.pharmacy";
		cout << "\n\n\tenter your choice";
		cin >> c;
		clrscr();
		cleardevice();
		if (c == 1) {
			cout << "\n\t enter the name of the restarunt:";
			gets(p.r[p.ir].name);
			cout << "\n\t enter the adress of the restarunt";
			cout << "\n\n\tplot number:";
			cin >> p.r[p.ir].a.plotno;
			cout << "\n\tstreet name:";
			gets(p.r[p.ir].a.st);
			cout << "\tcity name ";
			gets(p.r[p.ir].a.city);
			cout << "\t pin code";
			cin >> p.r[p.ir].a.pc;
			p.ir++;
		} else if (c == 2) {
			cout << "\n\t enter the name of the atm:";
			gets(p.a[p.ia].name);
			cout << "\n\t enter the adress of the atm";
			cout << "\n\n\tplot number:";
			cin >> p.a[p.ia].a.plotno;
			cout << "\n\tstreet name:";
			gets(p.a[p.ia].a.st);
			cout << "\tcity name ";
			gets(p.a[p.ia].a.city);
			cout << "\t pin code";
			cin >> p.a[p.ia].a.pc;
			p.ia++;
		} else if (c == 3) {
			cout << "\n\t enter the name of the pharmacy:";
			gets(p.p[p.ip].name);
			cout << "\n\t enter the adress of the pharmacy";
			cout << "\n\n\tplot number:";
			cin >> p.p[p.ip].a.plotno;
			cout << "\n\tstreet name:";
			gets(p.p[p.ip].a.st);
			cout << "\tcity name ";
			gets(p.p[p.ip].a.city);
			cout << "\t pin code";
			cin >> p.p[p.ip].a.pc;
			p.ip++;
		}
	  if(n!=0)
	 { f.open("place",ios::in|ios::out|ios::binary|ios::ate);
	  //f.seekp((int)(-sizeof(p)),ios::cur);
	  f.write((char*)&p,sizeof(p));    }
	  else
	   f.write((char*)&p,sizeof(p));

	}
f.close();}
void pl_ace() {
	place p;
	int ch, i=0;
	char c[5];
		int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	   setbkcolor( LIGHTGRAY);
		setpalette(7,0);

	do {  i=0;
			clrscr();
			cleardevice();
			settextstyle(10, 0, 1);
			setcolor( WHITE);
			outtextxy(200, 5, "MECH WINGS");

		cout << "\n\n\tmenu \n\t1.to go to the place you like\n\t2.admin\n\t3.exit";
		cout << "\n\n\tenter your choice:";
		cin >> ch;
	      clrscr();
		cleardevice();
	      //	setbkcolor(LIGHTGRAY);
		if (ch == 1) {
	 int j = 0;
			ifstream fin("place",ios::binary);
			if(!fin)
			{cout<<"\n\tarea does not exist:";ch=0;getch();}
		else
			{cout<<"\n\tarea";
			  while(fin.read((char*)&p,sizeof(p)))
			  {
				cout << "\n\t\t" << j + 1 << '.';
				puts(p.area);
				cout << '\n';j++;
			}
			cout << "\n\n\tenter your choice:";
			cin >>j;
			clrscr();
			 cleardevice();
			// setbkcolor(LIGHTGRAY);
			cout<<"\n\n\tplaces:";
			cout << "\n\t1.restarunt\n\n\t2.atm\n\n\t3.pharmacy";
			cout << "\n\n\tenter your option:";
			cin >> ch;
			fin.close();
				fin.open("place",ios::binary|ios::ate);
				fin.seekg((j-1)*sizeof(p),ios::beg);
			     fin.read((char*)&p,sizeof(p));
			}
			clrscr();
			if (ch == 1) {
		      for(i=0;i<p.ir;i++)
		    {                clrscr();
		    cleardevice();

  // setbkcolor(LIGHTGRAY);
					cout << "\n" << i + 1 << ".name:\t\t";
					puts(p.r[i].name);
					cout << "\tadress:\n\tplot no:\t\t"
							<< p.r[i].a.plotno << "\n\tstreet name:\t\t";
					puts(p.r[i].a.st);
					cout << "\tcity:\t\t\t";
					puts(p.r[i].a.city);
					cout << "\tpin:\t\t\t" << p.r[i].a.pc;
			     getch();	    }

			} else if (ch == 2) {
				     for(int i=0;i<p.ia ;i++)
				      { clrscr();
				      cleardevice();

  // setbkcolor(LIGHTGRAY);
					cout << '\n' << i + 1 << ".name:\t\t";
					puts(p.a[i].name);
					cout << "\tadress:\n\tplot no:\t\t"
							<< p.a[i].a.plotno << "\n\tstreet name:\t\t";
					puts(p.a[i].a.st);
					cout << "\tcity:\t\t\t";
					puts(p.a[i].a.city);
					cout << "\tpin:\t\t\t" << p.a[i].a.pc; getch();       }

			} else if (ch == 3){
				       for(int i=0;i<p.ip;i++)
				       { clrscr();
				       cleardevice();

//   setbkcolor(LIGHTGRAY);
					cout << '\n' << i + 1 << ".name:\t\t";
					puts(p.p[i].name);
					cout << "\tadress:\n\tplot no:\t\t" << p.p[i].a.plotno
					<< "\n\tstreet name:\t\t";
					puts(p.p[i].a.st);
					cout << "\tcity:\t\t\t";
					puts(p.p[i].a.city);
					cout << "\tpin:\t\t\t" << p.p[i].a.pc;               getch();
				}ch=0;}
	 getch();	} else if (ch == 2) {
			char x[10];
			clrscr();
			cleardevice();

			int k = 1;
			while (k <= 3 && k > 0) {
				cout << "\n\tenter the password:";
				cin >> x;
				if (strcmpi(x, "123") == 0) {
					clrscr();
		cleardevice();
	     //	setbkcolor(LIGHTGRAY);
					int ch = 0;

					k = -1;
					cout
							<< "\n\n\t\tmenu\n\t\t----\n\t1.to add an new area\n\t2.to add an existing place in a area";
					cout << "\n\tenter your choice:";
					cin >> ch;
					if (ch == 1) {
						insert(p);
					} else if (ch == 2) {

						insert(p, 1);
					}
				} else {  clrscr();
		cleardevice();
	       //	setbkcolor(LIGHTGRAY);
					cout << "\n\tplease enter the correct password";
					cout << "\n\n\tyou have(" << 3 - k
							<< ")more turns to enter the password correctely";
					k++;
					cout << "\n\t\t please wait for some time";
					for (int i = 5; i >= 0; i--)
						delay(900);
				}
			}
			if (k > 0) {       clrscr();
		cleardevice();
	    //	setbkcolor(LIGHTGRAY);
				cout << "\n\t you have exceded your limit try again later ";
			}
		}

		clrscr();
		cleardevice();
	} while (ch!=3);
}




