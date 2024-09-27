#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
main()
{
system("cls");
int x=3,y=3;
gotoxy(x,y);
cout<<"H";
y=y+1;
gotoxy(x,y);
cout<<"A";
y=y+1;
gotoxy(x,y);
cout<<"S";
y=y+1;
gotoxy(x,y);
cout<<"S";
y=y+1;
gotoxy(x,y);
cout<<"A";
y=y+1;
gotoxy(x,y);
cout<<"N";
gotoxy(0,10);
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}