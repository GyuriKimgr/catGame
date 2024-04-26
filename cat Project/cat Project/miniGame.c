#include "start.h"
#include "miniGame.h"

#include <time.h>
#include <conio.h>
#include <windows.h>

#define WIDTH 80  //가로
#define HEIGHT 20 //높이
#define STAR '@'
#define PLAYER '^'
#define GAME_DURATION 60  // 게임 시간(초)

int playerX = WIDTH / 2;
int starX = 0;
int starY = 0;
int score = 0;

time_t startTime;


void drawBoard() {
    system("cls");

    // 게임의 남은 시간 계산
    time_t currentTime = time(NULL);
    int remainingTime = GAME_DURATION - (int)difftime(currentTime, startTime);
    printf("남은 시간: %d\n", remainingTime);


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

    startTime = time(NULL);     // 게임 시작 시간 초기화

    while (1) {
        // 현재 시간 갱신
        time_t currentTime = time(NULL);
        // 게임이 지정된 시간 이상 지났는지 확인
        if (difftime(currentTime, startTime) >= GAME_DURATION)
            break;      // 시간 종료
        drawBoard();
        updateStar();
        move();
       
    }

    // 게임 종료 후 게임 오버 메시지 출력
    system("cls");
    int x = 17, y = 5;
    gotoxy(x, y);
    printf(" ▣▣▣      ▣▣▣     ▣    ▣   ▣▣▣▣\n");
    gotoxy(x, y + 1);
    printf("▣     ▣  ▣      ▣  ▣ ▣▣ ▣  ▣\n");
    gotoxy(x, y + 2);
    printf("▣         ▣▣▣▣▣  ▣  ▣  ▣  ▣▣▣\n"); 
    gotoxy(x, y + 3);
    printf("▣    ▣▣ ▣      ▣  ▣  ▣  ▣  ▣\n"); 
    gotoxy(x, y + 4); 
    printf(" ▣▣▣▣  ▣      ▣  ▣      ▣  ▣▣▣▣\n");
    gotoxy(x + 1, y + 6);
    printf("  ■■■   ■      ■ ■■■■  ■■■■\n");
    gotoxy(x + 1, y + 7);
    printf(" ■     ■ ■      ■ ■        ■      ■\n");
    gotoxy(x + 1, y + 8);
    printf(" ■     ■  ■    ■  ■■■    ■■■■\n");
    gotoxy(x + 1, y + 9);
    printf(" ■     ■   ■  ■   ■        ■      ■\n");
    gotoxy(x + 1, y + 10);
    printf("  ■■■       ■     ■■■■  ■      ■\n\n");
    gotoxy(x + 16, y + 15);
    printf("YOUR SCORE: %d\n", score);
    
    return 0;
}
