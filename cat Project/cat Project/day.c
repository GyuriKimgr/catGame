#include "start.h"

int heart = 0;

void slowPrint(unsigned long speed, const char* s) { //Ÿ�� ȿ�� �Լ�
	int i = 0;
	while (s[i] != 0) {
		printf("%c", s[i++]);
		fflush(stdout);
		Sleep(speed);
	}
}
int cat1() {
	int x = 20, y = 0;
	gotoxy(x, y);
	printf("                         _\n");
	gotoxy(x, y+1);
	printf("                         \\\n");
	gotoxy(x, y+2);
	printf("        |\\_/|           ||\n");
	gotoxy(x, y+3);
	printf("        )- - '._.-""""-.=-  //\n");
	gotoxy(x, y+4);
	printf("       = \Y_= /          \//\n");
	gotoxy(x, y+5);
	printf("         `''`\       /    /\n");
	gotoxy(x, y+6);
	printf("             |    \ |   /\n");
	gotoxy(x, y+7);
	printf("              \\   /- \ \\ \n");
	gotoxy(x, y+8);
	printf("             ((_| ((_/\n");


}
int day1() {
	int x = 0, y = 12;
	printf("\n");
	printf("================================================================================\n");
	slowPrint(1, "�� Day.1 ����̸� �����ƴ�. ��� �ұ�?\n");
	slowPrint(1, "1.������ �ش�. \n");
	slowPrint(1, "2.������ �������� �Ĵٸ� ����. \n");
	slowPrint(1, "3.'������'��� �Ҹ�ģ��. \n");
	printf("================================================================================\n");

	while (1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
		gotoxy(x, 12);
		printf("1.������ �ش�. \n");
		gotoxy(x, 13);
		printf("2.������ �������� �Ĵٸ� ����. \n");
		gotoxy(x, 14);
		printf("3.'������'��� �Ҹ�ģ��. \n");


		if (y == 12) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 12);
			printf("1.������ �ش�. \n");

		}
		else if (y == 13) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 12);
			printf("1.������ �ش�. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 13);
			printf("2.������ �������� �Ĵٸ� ����. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 14);
			printf("3.'������'��� �Ҹ�ģ��. \n");
		}

		else if (y == 14) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 12);
			printf("1.������ �ش�. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 13);
			printf("2.������ �������� �Ĵٸ� ����. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 14);
			printf("3.'������'��� �Ҹ�ģ��. \n");
		}

		int ch = _getch();
		switch (ch) {
		case 72:
			if (y > 12) y--;
			break;
		case 80:
			if (y < 14) y++;
			break;
		case 13:
			if (y == 12) {
				heart += 3;
				return 0;
			}
			else if (y == 13) {
				heart += 2;
				return 0;
			}
			else if (y == 14) {
				heart -= 3;
				return 0;
			}
		}
	}


}
int cat2() {
	printf("    ( ?  )               _\n");
	printf("      v                  \\\n");
	printf("        |\\_/|           ||\n");
	printf("        )- - '._.-""""-.=-  //\n");
	printf("       = \Y_= /          \//\n");
	printf("         `''`\       /    /\n");
	printf("             |    \ |   /\n");
	printf("              \\   /- \ \\ \n");
	printf("             ((_| ((_/\n");


}
int day2() {
	printf("================================================================================\n");
	slowPrint(1, "�� Day.2 ���� �ô� ����̸� �� �����ƴ�. ��� �ұ�?\n");
	slowPrint(1, "1.������ �ش�. \n");
	slowPrint(1, "2.������ ��������. \n");
	slowPrint(1, "3.������ ����ش�. \n");
	printf("================================================================================\n");
}

int cat3() {
	printf("         (zzz...)\n");
	printf("          v\n");
	printf("  |\\      _,,,,--,,_\n");
	printf(" / , `. - '`' - ,\\ - ;,\n");
	printf("|, 4 - ) ), , __,\\ (;;\n");
	printf("'---''(.'--'  `-'`.)`'\n");
}

int day3() {
	printf("================================================================================\n");
	slowPrint(1, "�� Day.3 ����̰� ������ �ڰ� �ִ�. ��� �ұ�?\n");
	slowPrint(1, "1.������ ���ڸ��� ���� ������ �����ش�. \n");
	slowPrint(1, "2.��~ �ٶ��� �Ҿ �����. \n");
	slowPrint(1, "3.�ƹ��͵� ���� ����ä ��������. \n");
	printf("================================================================================\n");
}

int day4() {
	printf("================================================================================\n");
	slowPrint(1, "�� Day.4 ����̰� ��Һ����� ������ ����ִ�. ��� �ұ�?\n");
	slowPrint(1, "1.���� �����̿� ���� ���� ������ �ִ�. ��Һ����� ���´�. \n");
	slowPrint(1, "2.��Һ����� ���ļ� �����ش�. \n");
	slowPrint(1, "3.�������ô �Բ� ��Һ����� �ο��. \n");
	printf("================================================================================\n");
}

int day5() {
	printf("================================================================================\n");
	slowPrint(1, "�� Day.5 ����̰� ���� �������� �ö��ִ�. ������ ��Ȳ�̴�. ��� �ұ�?\n");
	slowPrint(1, "1.������ Ÿ�� ����̸� �����Ѵ�. \n");
	slowPrint(1, "2.119�� �Ű��Ѵ�. \n");
	slowPrint(1, "3.���� ��Ұ������̴�.. �׳� ����ģ��. \n");
	printf("================================================================================\n");
}
int day6() {
	printf("================================================================================\n");
	slowPrint(1, "�� Day.6 ����̿� �������� �ο�� ����� �߰��ߴ�. ��� �ұ�?\n");
	slowPrint(1, "1.����� ���� ���, �������� �ѾƳ���. \n");
	slowPrint(1, "2.������ ���� ���, ����̸� �ѾƳ���. \n");
	slowPrint(1, "3.���� �� �� ����ϸ�, �߸��� ������ ���̴�.\n");
	printf("================================================================================\n");

}
int day7() {
	printf("================================================================================\n");
	slowPrint(1, "�� Day.7 ����̰� a++�ѿ� ��� ���� �������� ���� �����ִ�. ��� �ұ�?\n");
	slowPrint(1, "1.���� ���ۿ� �޷����� �ѿ츦 ��ͼ� �ش�. \n");
	slowPrint(1, "2.���� ���� ����... ����̿� �Բ� �������� ���⸸ �Ѵ�. \n");
	slowPrint(1, "3.�ѿ츦 ������... ���� ���� �԰�ʹ�. ��������� ���� �ʴ´�. \n");
	printf("================================================================================\n");

}
int day8() {
	printf("================================================================================\n");
	slowPrint(1, "�� Day.8 �� �´�. ����̰� ������ ���� �����ִ�. ��� �ұ�?\n");
	slowPrint(1, "1.����� �����ش�. \n");
	slowPrint(1, "2.�ڽ����� ������ش�. \n");
	slowPrint(1, "3.���� ������ �Ű��ش�.\n");
	printf("================================================================================\n");

}
int day9() {
	printf("================================================================================\n");
	slowPrint(1, "�� Day.9 ����̰� ���ڱ� ���������̸� ���� ���. ��� �ұ�?\n");
	slowPrint(1, "1.����������...? �ϰ� ���󰣴�.  \n");
	slowPrint(1, "2.������Ű�� ���� ���ٵ�´�.  \n");
	slowPrint(1, "3.�谡 ���°� ������ ��Ḧ �ش�. \n");
	printf("================================================================================\n");

}
int day10() {
	printf("================================================================================\n");
	slowPrint(1, "�� Day.10 ����̰� �� �ڸ� ����´�. ��� �ұ�?\n");
	slowPrint(1, "1.�Ƹ�����Ʈ �ϴ� ������ ������� ���д�. \n");
	slowPrint(1, "2.�ɽ��Ѱ�����. ���������� ����ش�. \n");
	slowPrint(1, "3.�ڴ�. \n");
	printf("================================================================================\n");

}


int main() {
	setconsleview();
	int dayCnt = 1;
	while (dayCnt <= 10) {
		switch (dayCnt) {
		case 1:
			system("cls");
			cat1();
			day1();
		case 2:
			system("cls");
			cat2();
			day2();

		}
		char key = _getch();
		while (1) {
			if (key == 13) {
				dayCnt++;
			}
		}
		break;
	}
}