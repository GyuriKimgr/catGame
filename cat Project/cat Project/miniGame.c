#include "start.h"
#include "miniGame.h"

#include <time.h>

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
    char key = _getch();
    if (key == 0 || key == 224) { // 방향키 입력 확인
        key = _getch(); // 실제 방향키 값 가져오기
        if (key == 75 && playerX > 0)
            playerX--;
        else if (key == 77 && playerX < WIDTH - 1)
            playerX++;
        else if (key == 'q')
            exit(0);
    }
}





// 고양이 ASCII 아트
int catArt() {
    printf(" /＼/＼ \n");
    printf("( o.o ) \n");
    printf(" > ^ <  \n");
};






int miniGame() {
    system("cls");
    catArt();
    move();
    drawBoard();

    updateStar();
}
