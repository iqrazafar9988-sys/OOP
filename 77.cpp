#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

// Function to move the cursor
void gotoxy(int x, int y)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;
    CursorPosition.X = x; // column
    CursorPosition.Y = y; // row
    SetConsoleCursorPosition(console, CursorPosition);
}

int main()
{
    
    for(int i=2,j=2;j<=12;j++)
    {
    	gotoxy(i,j);
    	cout<<"*";
    	Sleep(100);
	}
	
	getch();
}
