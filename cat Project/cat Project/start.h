#include <stdio.h>		// 헤더 선언
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#pragma once	
int storyStart;
#define UP 0		// DEFINE 선언
#define DOWN 1

#define color 9
#define default 15

void setconsleview();
void hideCursor();
void slowPrint(unsigned long speed, const char* s);
void gotoxy(int x, int y);
int story();
int drawmenu();
int startScreen(void);

