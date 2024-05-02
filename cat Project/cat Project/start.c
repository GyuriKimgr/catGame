#include <stdio.h>		// 헤더 선언
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include"start.h"
#include"miniGame.h"
int code = 0;
int storyStart = 0;

#pragma once


#define UP 0		// define 선언
#define DOWN 1

#define color 9		// 선택된 글자색
#define default 15	// 기본 글자색

void setconsleview() {		// 콘솔창 크기
	system("mode con:cols=80 lines=30");
}
void gotoxy(int x, int y) {		// 커서 좌표
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void slowPrint(unsigned long speed, const char* s) { //타자 효과 함수
	int i = 0;
	while (s[i] != 0) {
		printf("%c", s[i++]);
		fflush(stdout);
		Sleep(speed);
	}
}
void hideCursor() { //깜박이는 커서 숨김
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
}

int story() {
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
	printf("■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□\n");
	printf("□                                                                            ■\n");
	slowPrint(1, "■      오늘도 지긋지긋한 아르바이트를 하러 간다...                           □\n");
	printf("□                                                                            ■\n");
	slowPrint(1, "■      매일매일이 똑같은 갑갑한 일상의 반복..                                □\n");
	printf("□                                                                            ■\n");
	slowPrint(1, "■      지루하다. 평생을 이렇게 살아가는걸까 ?                                □\n");
	printf("□                                                                            ■\n");
	slowPrint(1, "■      ... 어, 저게 뭐지?                                                    □\n");
	printf("□                                                                            ■\n");
	slowPrint(1, "■      (자세히 살펴본다)                                                     □\n");
	printf("□                                                                            ■\n");
	printf("■     /|____/|                                                               □\n");
	printf("□   =( °w ° )=                                                             ■\n");
	printf("■     )      (  //                                                           □\n");
	printf("□    ( __ __  )//                                                            ■\n");
	printf("■                                                                            □\n");
	slowPrint(1, "□-> 고양이가 짠~~!!!                                                         ■\n");
	printf("■                                                                            □\n");
	slowPrint(1, "□   못 보던 고양이다. 귀여워~ 어떻게 할까?                                   ■\n");
	printf("■                                                                            □\n");
	printf("□                                                                            ■\n");
	slowPrint(1, "■                            Enter를 눌러 다음으로 넘어가기 (DAY 1) >>>>>    □\n");
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
		printf("미니게임\n");
		gotoxy(x, 22);
		printf("게임종료\n");


		if (y == 18) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 18);
			printf("시작하기\n");

		}
		else if(y == 20){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 18);
			printf("시작하기\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 20);
			printf("미니게임\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 22);
			printf("게임종료\n");
		}
		else{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 18);
			printf("시작하기\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 20);
			printf("미니게임\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 22);
			printf("게임종료\n");
			}

		char ch = _getch();


		switch (ch) {
		case 72:
			if (y > 18)y-=2;
			break;
		case 80:
			if (y < 22)y+=2;
			break;
		case 13:
			if (y == 18)return 1;
			if (y == 20)return 2;
			else return 0;
		}
	}
}

int startScreen(void) {
	int code = 0;
	while(1){
		setconsleview();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);

		printf("■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□\n");
		printf("□                                                                            ■\n");
		printf("■                 _  _  _ _|_   _ _ _|_   _  _ _  . _  __|_                  □\n");
		printf("□                 _VV(/_(/_ |   (_(_| |   |_)| (_) |(/_(_ |             *    ■\n");
		printf("■                                        |       L|                          □\n");
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


		code = drawmenu();
		if (code == 1) {
			storyStart = 1;
			story();
			break;
		}
		else if (code == 2) {
			storyStart = 0;
			mini = 1;
			int miniResult = miniGame();
			if (miniResult == 3) {
				continue;
			}
			else if (miniResult == 0) {
				exit(0);
			}break;
		}
		else if (code == 0) {
			exit(0);
		}
	}
	return 0;
}
