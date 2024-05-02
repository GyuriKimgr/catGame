#include "start.h"
#include "miniGame.h"

#include <time.h>
#define Right 77
#define Left 75
#define WIDTH 80  //가로
#define HEIGHT 20 //높이
#define GAME_DURATION 10  // 게임 시간(초)
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
    gotoxy(25, 3);
    int digitCount = printf("남은 시간: %d", remainingTime);
    for (int i = 0; i < digitCount; i++) {
        printf("\b"); //이전에 출력된 내용을 덮어씌웁니다.
    }
    // 덮어씌울 숫자 출력
    gotoxy(35, 3);
    printf("%d \n", remainingTime);

}

void playBoard() {
    system("cls");
    timeCnt();
    gotoxy(25, 5);
    printf("별을 0개 먹었다냥!");
    gotoxy(20, 10);
    printf("■■■■■■■■■■■■■■■■■■\n");
    gotoxy(20, 11);
    printf("■                                ■\n");
    gotoxy(20, 12);
    printf("■                                ■\n");
    gotoxy(20, 13);
    printf("■                                ■\n");
    gotoxy(20, 14);
    printf("■                                ■\n");
    gotoxy(20, 15);
    printf("■                                ■\n");
    gotoxy(20, 16);
    printf("■                                ■\n");
    gotoxy(20, 17);
    printf("■                                ■\n");
    gotoxy(20, 18);
    printf("■                                ■\n");
    gotoxy(20, 19);
    printf("■                                ■\n");
    gotoxy(20, 20);
    printf("■                                ■\n");
    gotoxy(20, 21);
    printf("■                                ■\n");
    gotoxy(20, 22);
    printf("■                                ■\n");
    gotoxy(20, 23);
    printf("■                                ■\n");
    gotoxy(20, 24);
    printf("■                                ■\n");
    gotoxy(20, 25);
    printf("■■■■■■■■■■■■■■■■■■\n");

    int playerX = 22, playerY = 22;
    starX = (rand() % (30)) + 22;
    starY = 11;
    gotoxy(playerX, playerY);
    printf(" /＼/＼ \n");
    gotoxy(playerX, playerY + 1);
    printf("( o.o ) \n");
    gotoxy(playerX, playerY + 2);
    printf(" > ^ <  \n");

    gotoxy(starX, starY);
    printf("★");
    while (1) {
        gotoxy(0, 0);
        timeCnt();
        // 별이 플레이어에게 닿았을 때
        if ((starX >= playerX - 2 && starX <= playerX + 2) && (starY >= playerY && starY <= playerY + 2)) {
            score++;
            starX = (rand() % (30)) + 22; // 새로운 별의 가로 위치
            starY = 11; // 별의 세로 위치 초기화

            gotoxy(25, 5);
            printf("별을 %d개 먹었다냥!", score);
        }
        // 별이 아래로 떨어지는 로직
        if (starY < 24) {
            Sleep(100);
            gotoxy(starX, starY);
            printf("   "); // 이전 위치의 별 지우기
            starY++; // 아래로 이동
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
            gotoxy(starX, starY);
            printf("★"); // 새로운 위치에 별 출력
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
        }

        else {
            gotoxy(starX, starY);
            printf("   \n");
            gotoxy(playerX, playerY);
            printf(" /＼/＼ \n");
            gotoxy(playerX, playerY + 1);
            printf("( o.o ) \n");
            gotoxy(playerX, playerY + 2);
            printf(" > ^ <  \n");
            starX = (rand() % (30)) + 22; // 새로운 별의 가로 위치
            starY = 11; // 별의 세로 위치 초기화
        }

        // 키 입력을 기다리지 않고 반복하는 동안 계속해서 확인
        if (_kbhit()) {
            char key = _getch();
            switch (key) {
            case 75: // 왼쪽 이동
                if (playerX > 22) {
                    gotoxy(playerX, playerY);
                    printf("          ");
                    gotoxy(playerX, playerY + 1);
                    printf("          ");
                    gotoxy(playerX, playerY + 2);
                    printf("          ");
                    playerX-=4;
                    gotoxy(playerX, playerY);
                    printf(" /＼/＼ \n");
                    gotoxy(playerX, playerY + 1);
                    printf("( o.o ) \n");
                    gotoxy(playerX, playerY + 2);
                    printf(" > ^ <  \n");
                }
                break;
            case 77: // 오른쪽 이동
                if (playerX < 42) {
                    gotoxy(playerX, playerY);
                    printf("          ");
                    gotoxy(playerX, playerY + 1);
                    printf("          ");
                    gotoxy(playerX, playerY + 2);
                    printf("          ");
                    playerX+=4;
                    gotoxy(playerX, playerY);
                    printf(" /＼/＼ \n");
                    gotoxy(playerX, playerY + 1);
                    printf("( o.o ) \n");
                    gotoxy(playerX, playerY + 2);
                    printf(" > ^ <  \n");
                }
                break;
            }
        }
        if (difftime(time(NULL), startTime) >= GAME_DURATION)
            return 0;
    }
    }
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

    void miniGameReset() {
        starX = 0;
        starY = 0;
        score = 0;
        x = 0;
        y = 0;
        startTime = 0;
    }

    int menuMini() {
        int z = 33, j = 22;
        gotoxy(z, j);
        while (1) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
            gotoxy(z, 22);
            printf("메인으로 돌아가기\n");
            gotoxy(z, 23);
            printf("종료\n");

            if (j == 22) {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
                gotoxy(z, 22);
                printf("메인으로 돌아가기\n");
            }
            else if (j == 23) {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
                gotoxy(z, 22);
                printf("메인으로 돌아가기\n");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
                gotoxy(z, 23);
                printf("종료\n");
            }
            char ch = _getch();
            switch (ch) {
            case 72:
                if (j > 22) j--;
                break;
            case 80:
                if (j < 23) j++;
                break;
            case 13:
                if (j == 22) {
                    miniGameReset();
                    return 3;
                }
                if (j == 23)return 0;
            }
           
        }
    }

    int miniGame() {
        system("cls");
        startTime = time(NULL);     // 게임 시작 시간 초기화
        int endGame = 0;
        while (!endGame) {
            // 현재 시간 갱신
            time_t currentTime = time(NULL);
            // 게임이 지정된 시간 이상 지났는지 확인
            if (difftime(currentTime, startTime) >= GAME_DURATION)
                endGame = 1;     // 시간 종료
            playBoard();
            if (endGame)
                break;
        }
        system("cls");  // 게임 종료 후 게임 오버 메시지 출력
        int x = 17, y = 5;
        gotoxy(x, y);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
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
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
        printf("  ■■■   ■      ■ ■■■■  ■■■■\n");
        gotoxy(x + 1, y + 7);
        printf(" ■     ■ ■      ■ ■        ■      ■\n");
        gotoxy(x + 1, y + 8);
        printf(" ■     ■  ■    ■  ■■■    ■■■■\n");
        gotoxy(x + 1, y + 9);
        printf(" ■     ■   ■  ■   ■        ■      ■\n");
        gotoxy(x + 1, y + 10);
        printf("  ■■■       ■     ■■■■  ■      ■\n\n");
        gotoxy(x + 10, y + 15);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
        printf("나한테 별을 %d개만큼 먹여줬다냥!", score);
        gotoxy(17, 19);
        printf(" /＼/＼ \n");
        gotoxy(17, 20);
        printf("( o.o ) \n");
        gotoxy(17, 21);
        printf(" > ^ <  \n");
        return menuMini();
    }
