#include "day.h"
#include "miniGame.h"
#include "start.h"

int main() {
	hideCursor();
	while (1) {
	startScreen();
	char key = _getch(); //ENTER를 입력하여 게임시작받기
	if (storyStart == 1 && key == 13) {	//ENTER 입력하면
		gameLogic();	// 게임 로직 실행
		int endingResult = Ending();		// 엔딩 표시
		if (endingResult == 4) {
			initialize();
			continue;
		}
		else if(endingResult == 0) {
			exit(0);
		}
	}
	}
	return 0;
}