#include <stdio.h>		// 헤더 선언
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include"start.h"

#pragma once


#define UP 0
#define DOWN 1

#define color 9
#define default 15

void setconsleview() {
	system("mode con:cols=80 lines=30");
}
void gotoxy(int x, int y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int story() {
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
	printf("■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□\n");
	printf("□                                                                            ■\n");
	printf("■   오늘도 지긋지긋한 아르바이트를 하러 간다...                              □\n");
	printf("□                                                                            ■\n");
	printf("■   매일매일이 똑같은 갑갑한 일상의 반복..                                   □\n");
	printf("□                                                                            ■\n");
	printf("■   지루하다. 평생을 이렇게 살아가는걸까?                                    □\n");
	printf("□                                                                            ■\n");
	printf("■   ... 어, 저게 뭐지?                                                       □\n");
	printf("□                                                                            ■\n");
	printf("■   (자세히 살펴본다)                                                        □\n");
	printf("□                                                                            ■\n");
	printf("■     /|____/|                                                               □\n");
	printf("□   =( °w ° )=                                                             ■\n");
	printf("■     )      (  //                                                           □\n");
	printf("□    ( __ __  )//                                                            ■\n");
	printf("■                                                                            □\n");
	printf("□  -> 고양이가 짠~~!!!                                                       ■\n");
	printf("■                                                                            □\n");
	printf("□   못 보던 고양이다. 귀여워~ 어떻게 할까?                                   ■\n");
	printf("■                                                                            □\n");
	printf("□                                                                            ■\n");
	printf("■                            Enter를 눌러 다음으로 넘어가기 (DAY 1) >>>>>    □\n");
	printf("□                                                                            ■\n");
	printf("■                                                                            □\n");
	printf("□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■\n");
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
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 18);
			printf("시작하기\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 20);
			printf("게임종료\n");
		}

		char ch = _getch();


		switch (ch) {
		case 72:
			if (y > 18)--y;
			break;
		case 80:
			if (y < 20)++y;
			break;
		case 13:
			if (y == 18)return 1;
			else return 0;

		}
	}
}

int startScreen(void) {
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

	
	int code = drawmenu();
	if (code == 1) {
		story();
	}
	else {
		exit(0);
	}
	return 0;
}
