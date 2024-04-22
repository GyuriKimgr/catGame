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

#define color 9
#define default 15
 
void setconsleview() {
	system("mode con:cols=80 lines=30");
}
void gotoxy(int x, int y) {
	HANDLE consolehandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { x, y };
	SetConsoleCursorPosition(consolehandle, pos);
}

int keyControl() {
	
}

int drawmenu() {
	int x = 65, y = 18;
	gotoxy(x, y);

	while (1) {

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
		gotoxy(x, 18);
		printf("시작하기\n");
		gotoxy(x, 20);
		printf("게임종료\n");

		
			if (y == 18) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
				gotoxy(x, 18);
				printf("시작하기\n");
				
			}
		    else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
				gotoxy(x, 18);
				printf("시작하기\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
				gotoxy(x, 20);
				printf("게임종료\n");
			}
		char ch;

		ch = _getch();


			switch (ch) {
			case 72:
				if (y > 18)y--;
				break;
			case 80:
				if (y < 20) y++;
				break;
			}
		
		
	}
}
int main() {
	setconsleview();
	
	printf("■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□\n");
	printf("□                                                                            ■\n");
	printf("■                 _   _  _ _|_   _ _ _|_   _  _ _  . _  __|_                 □\n");
	printf("□                 _\VV(/_(/_ |   (_(_| |   |_)| (_) |(/_(_ |           '      ■\n");
	printf("■                                         |       L|                         □\n");
	printf("□    '      *         *          ,MMM8&&&&.                     *            ■\n");
	printf("■                          *     MMM88&&&&&                                  □\n");
	printf("□                                MMMM88&&&&    .    *                        ■\n");
	printf("■      *                         MM88&&&&&&                                  □\n");
	printf("□                   *            'MM88&&&&'                   *              ■\n");
	printf("■            '                         *                                *    □\n");
	printf("□              *       /|/|_      __/||      *                               ■\n");
	printf("■                     /    -|    /-  ~|  .             *                     □\n");
	printf("□                    |    = Y = T_ =  /                                      ■\n");
	printf("■        '       *    )==* (`    `) ~(                             *         □\n");
	printf("□  *                 /     |     /    |          *                           ■\n");
	printf("■                   /      |     ) ~  (                                      □\n");
	printf("□                  /       |    /    ~ |                                     ■\n");
	printf("■             *   |        /   |~   ~  |                                     □\n");
	printf("□    __________/|_|__    _/_/|_|__~____/_/|_/|_/|_/|_/|_                     ■\n");
	printf("■    |  |  |  |  |  | ) ) |  |  | ((  |  |  |  |  |  |                       □\n");
	printf("□    |  |  |  |  |  | )_) |  |  |  )) |  |  |  |  |  |                       ■\n");
	printf("■    |  |  |  |  |  |  |  |  |  | (/  |  |  |  |  |  |                       □\n");
	printf("□                                                                            ■\n");
	printf("■                                                                            □\n");
	printf("□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■\n");
	
	drawmenu();

}

