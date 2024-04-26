#include "start.h"
#include "miniGame.h"

#include <time.h>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

#define WIDTH 80    // 가로
#define HEIGHT 20   // 높이
#define MAX_STARS 5 // 생성할 별의 최대 개수
#define STAR '@'
#define PLAYER '^'

int playerX = WIDTH / 2;
int score = 0;

// 각 별의 X 좌표와 Y 좌표를 저장하는 배열
int starX[MAX_STARS];
int starY[MAX_STARS];

void initializeStars() {
    for (int i = 0; i < MAX_STARS; i++) {
        starX[i] = (rand() % (WIDTH / 10)) * 10; // 10의 배수 위치에 별 생성
        starY[i] = rand() % (HEIGHT / 2);       // 상단 반쪽에 랜덤 위치에 별 생성
    }
}

void drawBoard(int remainingTime) {
    system("cls");
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (y == HEIGHT - 1 && x == playerX)
                putchar(PLAYER);
            else {
                int isStar = 0;
                for (int i = 0; i < MAX_STARS; i++) {
                    if (y == starY[i] && x == starX[i]) {
                        putchar(STAR);
                        isStar = 1;
                        break;
                    }
                }
                if (!isStar)
                    putchar(' ');
            }
        }
        putchar('\n');
    }

    gotoxy(0, 22);
    printf("Score: %d\n", score);

    gotoxy(2, 1);
    printf("남은시간: %d초\n", remainingTime);
}

void updateStars() {
    for (int i = 0; i < MAX_STARS; i++) {
        starY[i]++;
        if (starY[i] >= HEIGHT - 1) {
            if (starX[i] == playerX) {
                score++;
            }
            starX[i] = (rand() % (WIDTH / 10)) * 10;
            starY[i] = rand() % (HEIGHT / 2);
        }
    }
    Sleep(100);
}

void move() {
    if (_kbhit()) {
        int key = _getch();
        if (key == 75 && playerX > 0)
            playerX -= 10;
        else if (key == 77 && playerX < WIDTH - 1)
            playerX += 10;
        else if (key == 'q')
            exit(0);
    }
    Sleep(1);
}

void catArt() {
    printf(" /＼/＼ \n");
    printf("( o.o ) \n");
    printf(" > ^ <  \n");
}

int miniGame() {
    catArt();
    drawBoard(60); // 초기 시간 (60초로 설정)
    time_t startTime = time(0); // 게임 시작 시간 기록

    initializeStars();

    while (1) {
        int remainingTime = 60 - (time(0) - startTime);
        if (remainingTime <= 0) {
            system("cls");
            printf("시간종료! 게임오버.\n\n");
            printf("최종스코어 : %d\n", score);
            break;
        }
        drawBoard(remainingTime);
        updateStars();
        move();
    }
    return 0;
}

