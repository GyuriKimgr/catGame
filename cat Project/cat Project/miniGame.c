#include "start.h"
#include "miniGame.h"

#include <time.h>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

#define Right 77
#define Left 75
#define WIDTH 80  //����
#define HEIGHT 20 //����
#define GAME_DURATION 60  // ���� �ð�(��)
#define MAPX 3
#define MAPY 2

int starX = 0;
int starY = 0;
int score = 0;
int x = 0;
int y = 0;

time_t startTime;

void timeCnt() {
    time_t currentTime = time(NULL);
    int remainingTime = GAME_DURATION - (int)difftime(currentTime, startTime);
    printf("���� �ð�: %d\n", remainingTime);
}
void playBoard() {
    gotoxy(20, 10);
    printf("�������������������\n");
    gotoxy(20, 11);
    printf("��                                ��\n");
    gotoxy(20, 12);
    printf("��                                ��\n");
    gotoxy(20, 13);
    printf("��                                ��\n");
    gotoxy(20, 14);
    printf("��                                ��\n");
    gotoxy(20, 15);
    printf("��                                ��\n");
    gotoxy(20, 16);
    printf("��                                ��\n");
    gotoxy(20, 17);
    printf("��                                ��\n");
    gotoxy(20, 18);
    printf("��                                ��\n");
    gotoxy(20, 19);
    printf("��                                ��\n");
    gotoxy(20, 20);
    printf("��                                ��\n");
    gotoxy(20, 21);
    printf("��                                ��\n");
    gotoxy(20, 22);
    printf("��                                ��\n");
    gotoxy(20, 23);
    printf("��                                ��\n");
    gotoxy(20, 24);
    printf("��                                ��\n");
    gotoxy(20, 25);
    printf("�������������������\n");

    int playerX = 22, playerY = 22;
    starX = (rand() % (30)) + 22;
    starY = 11;
    gotoxy(playerX, playerY);
    printf(" /��/�� \n");
    gotoxy(playerX, playerY + 1);
    printf("( o.o ) \n");
    gotoxy(playerX, playerY + 2);
    printf(" > ^ <  \n");

    gotoxy(starX, starY);
    printf("��");
    while (1) {
        // ���� �÷��̾�� ����� ��
        if (starX == playerX && starY == playerY + 1) {
            score++;
            starX = (rand() % (30)) + 22; // ���ο� ���� ���� ��ġ
            starY = 11; // ���� ���� ��ġ �ʱ�ȭ
        }
        // ���� �Ʒ��� �������� ����
        if (starY < 24) {
            Sleep(100);
            gotoxy(starX, starY);
            printf("   "); // ���� ��ġ�� �� �����
            starY++; // �Ʒ��� �̵�
            gotoxy(starX, starY);
            printf("��"); // ���ο� ��ġ�� �� ���
        }
        else {

            gotoxy(starX, starY);
            printf("   \n");
            gotoxy(playerX, playerY);
            printf(" /��/�� \n");
            gotoxy(playerX, playerY + 1);
            printf("( o.o ) \n");
            gotoxy(playerX, playerY + 2);
            printf(" > ^ <  \n");
            starX = (rand() % (30)) + 22; // ���ο� ���� ���� ��ġ
            starY = 11; // ���� ���� ��ġ �ʱ�ȭ
        }

            // Ű �Է��� ��ٸ��� �ʰ� �ݺ��ϴ� ���� ����ؼ� Ȯ��
            if (_kbhit()) {
                char key = _getch();
                switch (key) {
                case 75: // ���� �̵�
                    if (key==75&&playerX > 20) {
                        gotoxy(playerX, playerY);
                        printf("       ");
                        gotoxy(playerX, playerY + 1);
                        printf("       ");
                        gotoxy(playerX, playerY + 2);
                        printf("       ");
                        playerX -=3;
                        gotoxy(playerX, playerY);
                        printf(" /��/�� \n");
                        gotoxy(playerX, playerY + 1);
                        printf("( o.o ) \n");
                        gotoxy(playerX, playerY + 2);
                        printf(" > ^ <  \n");
                    }
                    break;
                case 77: // ������ �̵�
                    if (key==77&&playerX < 45) {
                        gotoxy(playerX, playerY);
                        printf("      ");
                        gotoxy(playerX, playerY + 1);
                        printf("      ");
                        gotoxy(playerX, playerY + 2);
                        printf("      ");
                        playerX += 3;
                        gotoxy(playerX, playerY);
                        printf(" /��/�� \n");
                        gotoxy(playerX, playerY + 1);
                        printf("( o.o ) \n");
                        gotoxy(playerX, playerY + 2);
                        printf(" > ^ <  \n");
                    }
                    break;
                }
            }
        }
    }
//void drawBoard() {
//    system("cls");
//    // ������ ���� �ð� ���
//    time_t currentTime = time(NULL);
//    int remainingTime = GAME_DURATION - (int)difftime(currentTime, startTime);
//    printf("���� �ð�: %d\n", remainingTime);
//
//    for (int y = 0; y < HEIGHT; y++) {
//        for (int x = 0; x < WIDTH; x++) {
//            if (y == HEIGHT - 1 && x == playerX)
//                putchar(PLAYER);
//            else if (y == starY && x == starX)
//                putchar(STAR);
//            else
//                putchar(' ');
//        }
//        putchar('\n');
//    }
//}
void updateStar() {
    starY++;
    if (starY == y - 1) {
        if (starX == x) {
            score++;
        }
        starX = (rand() % (x / 10)) * 10;
        starY = 0;
    }
    Sleep(100);
}

//void move() {
//  
//    if (_kbhit()) {
//    char key = _getch();
//    if (key == 75 && playerX > 0)
//        playerX -= 10;
//    else if (key == 77 && playerX < WIDTH - 1)
//        playerX += 10;
//    }
//    Sleep(1);
//}


int miniGame() {
    system("cls");
    startTime = time(NULL);     // ���� ���� �ð� �ʱ�ȭ
    while (1) {
        // ���� �ð� ����
        time_t currentTime = time(NULL);
        // ������ ������ �ð� �̻� �������� Ȯ��
        if (difftime(currentTime, startTime) >= GAME_DURATION)
            break;      // �ð� ����
        timeCnt();
        playBoard();
    }

    // ���� ���� �� ���� ���� �޽��� ���
    system("cls");
    int x = 17, y = 5;
    gotoxy(x, y);
    printf(" �ââ�      �ââ�     ��    ��   �âââ�\n");
    gotoxy(x, y + 1);
    printf("��     ��  ��      ��  �� �â� ��  ��\n");
    gotoxy(x, y + 2);
    printf("��         �ââââ�  ��  ��  ��  �ââ�\n");
    gotoxy(x, y + 3);
    printf("��    �â� ��      ��  ��  ��  ��  ��\n");
    gotoxy(x, y + 4);
    printf(" �âââ�  ��      ��  ��      ��  �âââ�\n");
    gotoxy(x + 1, y + 6);
    printf("  ����   ��      �� �����  �����\n");
    gotoxy(x + 1, y + 7);
    printf(" ��     �� ��      �� ��        ��      ��\n");
    gotoxy(x + 1, y + 8);
    printf(" ��     ��  ��    ��  ����    �����\n");
    gotoxy(x + 1, y + 9);
    printf(" ��     ��   ��  ��   ��        ��      ��\n");
    gotoxy(x + 1, y + 10);
    printf("  ����       ��     �����  ��      ��\n\n");
    gotoxy(x + 16, y + 15);
    printf("YOUR SCORE: %d\n", score);

    return 0;
}


