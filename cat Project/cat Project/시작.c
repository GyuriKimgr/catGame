#include <stdio.h>		// 헤더 선언
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
//#include<catFunc.h>

//#pragma once
//
//#define pause system("pause > nul")		// DEFINE 선언
//
//#define UP 0
//#define DOWN 1
//#define SUBMIT 2
//
void setconsleview() {
	system("mode con:cols=80 lines=30");
}
//
//int main(void) {
//	CursorView(0);	// 커서의 깜빡임을 숨겨준다
//	system("COLOR OF");	// 화면 색깔을 검정, 글씨 색깔을 하얀색으로 설정
//	//mainPtr;
//	pause;
//	return 0;
//}
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
	printf("□                  /       |    /    ~ |                   ---------------   ■\n");
	printf("■             *   |        /   |~   ~  |                  |    시작하기   |  □\n");
	printf("□    __________/|_|__    _/_/|_|__~____/_/|_/|_/|_/|_/|_   ---------------   ■\n");
	printf("■    |  |  |  |  |  | ) ) |  |  | ((  |  |  |  |  |  |     ---------------   □\n");
	printf("□    |  |  |  |  |  | )_) |  |  |  )) |  |  |  |  |  |    |    게임종료   |  ■\n");
	printf("■    |  |  |  |  |  |  |  |  |  | (/  |  |  |  |  |  |     ---------------   □\n");
	printf("□                                                                            ■\n");
	printf("■                                                                            □\n");
	printf("□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■\n");
	
}
