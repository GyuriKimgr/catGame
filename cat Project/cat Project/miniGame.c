#include "start.h"
#include "miniGame.h"

#include <time.h>
#include <conio.h>
#include <windows.h>

#define WIDTH 80  //가로
#define WIDTH 80   //가로
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
    if (_kbhit()) {
        int key = _getch();

        if (key == 224){
            key = _getch();

            switch (key) {
            case 75: // 왼쪽 화살표
                if (playerX > 0)
                    playerX--;
                    break;
            case 77: // 오른쪽 화살표
                if (playerX < WIDTH - 1)
                    playerX++;
                    break;
            }
        }
        else if (key == 'q') {
            exit(0);
    }
    Sleep(1);
}

        }
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
    catArt();

    while (1) {
        system("cls");
        move();
        catArt();
        drawBoard();
        updateStar();
    }
    


}
