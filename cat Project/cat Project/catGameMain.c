#include "day.h"
#include "miniGame.h"

int main() {
		hideCursor();
		startScreen();
		char key = _getch(); //ENTER�� �Է��Ͽ� ���ӽ��۹ޱ�
		if (mini != 1 && key == 13) {
			gameLogic();
			Ending();
		}
}