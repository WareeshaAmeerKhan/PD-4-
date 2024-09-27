#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
main()
{
int x=70,y=20;
gotoxy(x,y);
cout<<"WAREESHA AMEER KHAN";
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}