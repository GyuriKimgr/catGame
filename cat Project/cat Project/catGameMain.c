#include "day.h"
#include "miniGame.h"

void restartGame() {
	initialize(); // 초기화 작업 수행
	Menu();	// 메뉴 표시
	char key = _getch(); // 사용자 입력 대기
	if (key == 13) { // 엔터 키 입력 시
		gameLogic(); // 게임 로직 실행
		Ending(); // 엔딩 표시
	}
}

int main() {
	hideCursor();
	while (1) {
	startScreen();
	char key = _getch(); //ENTER를 입력하여 게임시작받기
	if (key == 13) {	//ENTER 입력하면
		gameLogic();	// 게임 로직 실행
		Ending();		// 엔딩 표시
		restartGame();	// 초기화 후 게임 다시 시작
	
	}
	}
	return 0;
}