#include "day.h"

int main() {
		hideCursor();
		startScreen();
		char key = _getch(); //ENTER�� �Է��Ͽ� ���ӽ��۹ޱ�
		if (key == 13) {
			gameLogic();

			Ending();
		}
}