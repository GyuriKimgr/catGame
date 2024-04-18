#include <stdio.h>		// 헤더 선언
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#pragma once

#define pause system("pause > nul")		// DEFINE 선언
#define cls system("cls")

#define UP 0
#define DOWN 1
#define SUBMIT 2

void SetColor(int color){
	SetConsoleTextAttribute(GetSTDHandle(STD_OUTPUT_HANDLE), color);
}
void CursorView(char show) {
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}
void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetSTDHandle(STD_OUTPUT_HANDLE), pos);
}
void mainPtr(void);

int main(void) {
	CursorView(0);
	system("COLOR OF");
	mainPtr;
	pause;
	return 0;
}
int drawMenu() {
	int x = 15, y = 20;
	printf("\n\n\n");
	printf("/////////////////////////////////////////////////////////");
	printf("//													   //");
	printf("//	 _   _  _ _|_  _ _ _|_  _   _ _   .  _  _ _|_	   //");
	printf("//	_\VV(/_(/_ |  (_(_| |  |_) | (_)  | (/_(_  |	   //");
	printf("//						   |		 L|				   //");
	printf("//													   //");
	printf("//
	printf("//
	printf("//							
	printf("//							



}
