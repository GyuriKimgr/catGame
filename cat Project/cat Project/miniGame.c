#include "start.h"
#include "miniGame.h"

#include <time.h>
#include <conio.h>
#include <windows.h>

#define WIDTH 60   //가로
#define HEIGHT 20 //높이
#define STAR '@'
#define PLAYER '^'

int playerX = WIDTH / 2;
int starX = 0;
int starY = 0;
int score = 0;


void drawBoard() {
    system("cls");
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
    Sleep(10);
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
    Sleep(10);
}





// 고양이 ASCII 아트
void catArt() {
    printf(" /＼/＼ \n");
    printf("( o.o ) \n");
    printf(" > ^ <  \n");
}






int miniGame() {
    system("cls");
    catArt();
    drawBoard();
    while (1) {
        drawBoard();
        updateStar();
        move();
    }
    return 0;
}
