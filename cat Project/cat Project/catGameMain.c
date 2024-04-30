#include "day.h"
#include "miniGame.h"

void restartGame() {
	initialize(); // �ʱ�ȭ �۾� ����
	Menu();	// �޴� ǥ��
	char key = _getch(); // ����� �Է� ���
	if (key == 13) { // ���� Ű �Է� ��
		gameLogic(); // ���� ���� ����
		Ending(); // ���� ǥ��
	}
}

int main() {
	hideCursor();
	while (1) {
	startScreen();
	char key = _getch(); //ENTER�� �Է��Ͽ� ���ӽ��۹ޱ�
	if (key == 13) {	//ENTER �Է��ϸ�
		gameLogic();	// ���� ���� ����
		Ending();		// ���� ǥ��
		restartGame();	// �ʱ�ȭ �� ���� �ٽ� ����
	
	}
	}
	return 0;
}