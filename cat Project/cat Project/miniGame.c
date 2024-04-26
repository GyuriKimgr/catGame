#include "start.h"
#include "miniGame.h"

#include <time.h>
#include <conio.h>

#define WIDTH 20
#define HEIGHT 10
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
        starX = rand() % WIDTH;
        starY = 0;
    }
}



void move() {
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
    }
}
    

    



// 고양이 ASCII 아트
int catArt() {
    printf(" /＼/＼ \n");
    printf("( o.o ) \n");
    printf(" > ^ <  \n");
}






int miniGame() {
    catArt();

    while (1) {
        system("cls");
        move();
        catArt();
        drawBoard();
        updateStar();
        Sleep(100);
    }
    


}
