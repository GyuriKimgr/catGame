#include "start.h"



void slowPrint(unsigned long speed, const char* s) { //타자 효과 함수
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
	slowPrint(1, "★ Day.1 고양이를 마주쳤다. 어떻게 할까?\n");
	slowPrint(1, "1.간식을 준다. \n");
	slowPrint(1, "2.따뜻한 눈빛으로 쳐다만 본다. \n");
	slowPrint(1, "3.'저리가'라고 소리친다. \n");
	printf("================================================================================\n");

	while (1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
		gotoxy(x, 12);
		printf("1.간식을 준다. \n");
		gotoxy(x, 13);
		printf("2.따뜻한 눈빛으로 쳐다만 본다. \n");
		gotoxy(x, 14);
		printf("3.'저리가'라고 소리친다. \n");


		if (y == 12) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 12);
			printf("1.간식을 준다. \n");

		}

		else if (y == 13) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 12);
			printf("1.간식을 준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 13);
			printf("2.따뜻한 눈빛으로 쳐다만 본다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 14);
			printf("3.'저리가'라고 소리친다. \n");
		}

		else if (y == 14) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 12);
			printf("1.간식을 준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 13);
			printf("2.따뜻한 눈빛으로 쳐다만 본다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 14);
			printf("3.'저리가'라고 소리친다. \n");
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
			break;
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
	slowPrint(1, "★ Day.2 어제 봤던 고양이를 또 마주쳤다. 어떻게 할까?\n");
	slowPrint(1, "1.간식을 준다. \n");
	slowPrint(1, "2.꼬리를 만져본다. \n");
	slowPrint(1, "3.손으로 놀아준다. \n");
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
	slowPrint(1, "★ Day.3 고양이가 낮잠을 자고 있다. 어떻게 할까?\n");
	slowPrint(1, "1.따듯한 잠자리를 위해 핫팩을 끼워준다. \n");
	slowPrint(1, "2.후~ 바람을 불어서 깨운다. \n");
	slowPrint(1, "3.아무것도 하지 않은채 지나간다. \n");
	printf("================================================================================\n");
}

int day4() {
	printf("================================================================================\n");
	slowPrint(1, "★ Day.4 고양이가 비닐봉지를 가지고 놀고있다. 어떻게 할까?\n");
	slowPrint(1, "1.봉투 손잡이에 목이 졸릴 위험이 있다. 비닐봉지를 뺏는다. \n");
	slowPrint(1, "2.비닐봉지를 뭉쳐서 던져준다. \n");
	slowPrint(1, "3.고양이인척 함께 비닐봉지와 싸운다. \n");
	printf("================================================================================\n");
}

int day5() {
	printf("================================================================================\n");
	slowPrint(1, "★ Day.5 고양이가 높은 나무위에 올라가있다. 위급한 상황이다. 어떻게 할까?\n");
	slowPrint(1, "1.나무를 타서 고양이를 구출한다. \n");
	slowPrint(1, "2.119에 신고한다. \n");
	slowPrint(1, "3.나는 고소공포증이다.. 그냥 지나친다. \n");
	printf("================================================================================\n");
}
int day6() {
	printf("================================================================================\n");
	slowPrint(1, "★ Day.6 고양이와 강아지가 싸우는 모습을 발견했다. 어떻게 할까?\n");
	slowPrint(1, "1.고양이 편을 들고, 강아지를 쫓아낸다. \n");
	slowPrint(1, "2.강아지 편을 들고, 고양이를 쫓아낸다. \n");
	slowPrint(1, "3.나는 둘 다 사랑하며, 중립을 유지할 것이다.\n");
	printf("================================================================================\n");

}
int day7() {
	printf("================================================================================\n");
	slowPrint(1, "★ Day.7 고양이가 a++한우 등급 세일 전단지를 빤히 보고있다. 어떻게 할까?\n");
	slowPrint(1, "1.당장 슈퍼에 달려가서 한우를 사와서 준다. \n");
	slowPrint(1, "2.나는 돈이 없다... 고양이와 함께 전단지를 보기만 한다. \n");
	slowPrint(1, "3.한우를 샀지만... 역시 내가 먹고싶다. 고양이한테 주지 않는다. \n");
	printf("================================================================================\n");

}
int day8() {
	printf("================================================================================\n");
	slowPrint(1, "★ Day.8 비가 온다. 고양이가 추위에 덜덜 떨고있다. 어떻게 할까?\n");
	slowPrint(1, "1.우산을 씌워준다. \n");
	slowPrint(1, "2.박스집을 만들어준다. \n");
	slowPrint(1, "3.지붕 밑으로 옮겨준다.\n");
	printf("================================================================================\n");

}
int day9() {
	printf("================================================================================\n");
	slowPrint(1, "★ Day.9 고양이가 갑자기 바짓가랑이를 물고 운다. 어떻게 할까?\n");
	slowPrint(1, "1.무슨일이지...? 하고 따라간다.  \n");
	slowPrint(1, "2.진정시키기 위해 쓰다듬는다.  \n");
	slowPrint(1, "3.배가 고픈것 같으니 사료를 준다. \n");
	printf("================================================================================\n");

}
int day10() {
	printf("================================================================================\n");
	slowPrint(1, "★ Day.10 고양이가 내 뒤를 따라온다. 어떻게 할까?\n");
	slowPrint(1, "1.아르바이트 하는 곳까지 따라오게 냅둔다. \n");
	slowPrint(1, "2.심심한가보다. 나뭇가지로 놀아준다. \n");
	slowPrint(1, "3.뛴다. \n");
	printf("================================================================================\n");

}


int main() {
	setconsleview();
	cat1();
	day1();
}