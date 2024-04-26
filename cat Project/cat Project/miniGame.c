#include "start.h"
#include "miniGame.h"

#include <time.h>
#include <conio.h>
#include <windows.h>

#define WIDTH 80  //����
#define HEIGHT 20 //����
#define STAR '@'
#define PLAYER '^'
#define GAME_DURATION 60  // ���� �ð�(��)

int playerX = WIDTH / 2;
int starX = 0;
int starY = 0;
int score = 0;

time_t startTime;


void drawBoard() {
    system("cls");

    // ������ ���� �ð� ���
    time_t currentTime = time(NULL);
    int remainingTime = GAME_DURATION - (int)difftime(currentTime, startTime);
    printf("���� �ð�: %d\n", remainingTime);


    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (y == HEIGHT - 1 && x == playerX)
                putchar(PLAYER);
            else if (y == starY && x == starX)
                putchar(STAR);
            else
                putchar(' ');
        }
        putchar('\n');
    }
    printf("Score: %d\n", score);
}



void updateStar() {
    starY++;
    if (starY == HEIGHT - 1) {
        if (starX == playerX) {
            score++;
        }
        starX = (rand() % (WIDTH / 10)) * 10;
        starY = 0;
    }
    Sleep(100);
}

void move() {
  
    if (_kbhit()) {
    char key = _getch();
    if (key == 75 && playerX > 0)
        playerX -= 10;
    else if (key == 77 && playerX < WIDTH - 1)
        playerX += 10;
        else if (key == 'q')
            exit(0);
    }
    Sleep(1);
}





// ����� ASCII ��Ʈ
void catArt() {
    printf(" /��/�� \n");
    printf("( o.o ) \n");
    printf(" > ^ <  \n");
}






int miniGame() {
    system("cls");
    catArt();
    drawBoard();

    startTime = time(NULL);     // ���� ���� �ð� �ʱ�ȭ

    while (1) {
        // ���� �ð� ����
        time_t currentTime = time(NULL);
        // ������ ������ �ð� �̻� �������� Ȯ��
        if (difftime(currentTime, startTime) >= GAME_DURATION)
            break;      // �ð� ����
        drawBoard();
        updateStar();
        move();
       
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
