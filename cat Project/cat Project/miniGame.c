#include "start.h"
#include "miniGame.h"

#include <time.h>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

#define WIDTH 80    // ����
#define HEIGHT 20   // ����
#define MAX_STARS 5 // ������ ���� �ִ� ����
#define STAR '@'
#define PLAYER '^'

int playerX = WIDTH / 2;
int score = 0;

// �� ���� X ��ǥ�� Y ��ǥ�� �����ϴ� �迭
int starX[MAX_STARS];
int starY[MAX_STARS];

void initializeStars() {
    for (int i = 0; i < MAX_STARS; i++) {
        starX[i] = (rand() % (WIDTH / 10)) * 10; // 10�� ��� ��ġ�� �� ����
        starY[i] = rand() % (HEIGHT / 2);       // ��� ���ʿ� ���� ��ġ�� �� ����
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
    printf("�����ð�: %d��\n", remainingTime);
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
    printf(" /��/�� \n");
    printf("( o.o ) \n");
    printf(" > ^ <  \n");
}

int miniGame() {
    catArt();
    drawBoard(60); // �ʱ� �ð� (60�ʷ� ����)
    time_t startTime = time(0); // ���� ���� �ð� ���

    initializeStars();

    while (1) {
        int remainingTime = 60 - (time(0) - startTime);
        if (remainingTime <= 0) {
            system("cls");
            printf("�ð�����! ���ӿ���.\n\n");
            printf("�������ھ� : %d\n", score);
            break;
        }
        drawBoard(remainingTime);
        updateStars();
        move();
    }
    return 0;
}

