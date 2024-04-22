#include <stdio.h>		// 헤더 선언
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#pragma once
#define pause system("pause > nul")		// DEFINE 선언

#define UP 0
#define DOWN 1
#define SUBMIT 2

//void SetColor(int color) {
//
//	SetConsoleTextAttribute(GetSTDHandle(STD_OUTPUT_HANDLE), color);
//}	// 글자색
/*void CursorView(char show) {
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}*/	// 커서 깜빡임과 크기
//void gotoxy(int x, int y) {
//	HANDLE consolehandle = GetStdHandle(STD_OUTPUT_HANDLE);
//	COORD pos = { x, y };
//	SetConsoleCursorPosition(consolehandle, pos);
//}
	// 커서 좌표

