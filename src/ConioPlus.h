#ifndef CONIOPLUS_HPP
#define CONIOPLUS_HPP

#include <string>

#if defined(linux) || defined(__APPLE__)

#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>
#include <cstdio>
#include <cstdlib>

const int BLACK = 0;
const int BLUE  = 4;
const int GREEN = 6;
const int CYAN = 2;
const int RED = 1;
const int PURPLE = 5;
const int YELLOW = 3;
const int WHITE = 7;

bool kbhit();
int getch();

#else

#include <conio.h>
#include <windows.h>
#include <time.h>

const int BLACK = 0;
const int BLUE = 9;
const int GREEN = 10;
const int CYAN = 11;
const int RED = 12;
const int PURPLE = 13;
const int YELLOW = 14;
const int WHITE = 15;

#define kbhit _kbhit
#define getch _getch

#endif

void gotoxy(int x, int y);
void hidecursor();
void showcursor();
void color(int a, int b);
void clearcolor();
void clearscreen();
double gettime();
int readkey(double limit_time);
std::string colorname(int x);
int getcolor(std::string x);
#endif