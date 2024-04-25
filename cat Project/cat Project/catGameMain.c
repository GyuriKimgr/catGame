#include "day.h"

int main() {
		hideCursor();
		startScreen();
		char key = _getch(); //ENTER를 입력하여 게임시작받기
		if (key == 13) {
			gameLogic();

			Ending();
		}
}