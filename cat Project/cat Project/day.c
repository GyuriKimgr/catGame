#include "start.h"
#include "day.h"

int heart = 0;
int hidden = 0;

int cat1() {
	int x = 20, y = 5;
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
	int x = 0, y = 18;
	printf("\n");
	printf("================================================================================\n");
	slowPrint(1, "★ Day.1 고양이를 마주쳤다. 어떻게 할까?\n");
	slowPrint(1, "1.간식을 준다. \n");
	slowPrint(1, "2.따뜻한 눈빛으로 쳐다만 본다. \n");
	slowPrint(1, "3.'저리가'라고 소리친다. \n");
	printf("================================================================================\n");

	while (1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
		gotoxy(x, 17);
		printf("1.간식을 준다. \n");
		gotoxy(x, 18);
		printf("2.따뜻한 눈빛으로 쳐다만 본다. \n");
		gotoxy(x, 19);
		printf("3.'저리가'라고 소리친다. \n");


		if (y == 17) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 17);
			printf("1.간식을 준다. \n");

		}

		else if (y == 18) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.간식을 준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 18);
			printf("2.따뜻한 눈빛으로 쳐다만 본다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 19);
			printf("3.'저리가'라고 소리친다. \n");
		}

		else if (y == 19) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.간식을 준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 18);
			printf("2.따뜻한 눈빛으로 쳐다만 본다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 19);
			printf("3.'저리가'라고 소리친다. \n");
		}

		int ch = _getch();
		switch (ch) {
		case 72:
			if (y > 17) y--;
			break;
		case 80:
			if (y < 19) y++;
			break;
		case 13:
			if (y == 17) {
				heart += 3;
				return 0;
			}
			else if (y == 18) {
				heart += 2;
				return 0;
			}
			else if (y == 19) {
				heart -= 3;
				return 0;
			}
		}
	}

}

int cat2() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
	int x = 20, y = 5;
	gotoxy(x, y);
	printf("    ( ?  )               _\n");
	gotoxy(x, y + 1);
	printf("      v                  \\\n");
	gotoxy(x, y + 2);
	printf("        |\\_/|           ||\n");
	gotoxy(x, y + 3);
	printf("        )- - '._.-""""-.=-  //\n");
	gotoxy(x, y + 4);
	printf("       = \Y_= /          \//\n");
	gotoxy(x, y + 5);
	printf("         `''`\       /    /\n");
	gotoxy(x, y + 6);
	printf("             |    \ |   /\n");
	gotoxy(x, y + 7);
	printf("              \\   /- \ \\ \n");
	gotoxy(x, y + 8);
	printf("             ((_| ((_/\n");


}

int day2() {
	int x = 0, y = 17;
	printf("\n");
	printf("================================================================================\n");
	slowPrint(1, "★ Day.2 어제 봤던 고양이를 또 마주쳤다. 어떻게 할까?\n");
	slowPrint(1, "1.간식을 준다. \n");
	slowPrint(1, "2.꼬리를 만져본다. \n");
	slowPrint(1, "3.손으로 놀아준다. \n");
	printf("================================================================================\n");

	while (1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
		gotoxy(x, 17);
		printf("1.간식을 준다. \n");
		gotoxy(x, 18);
		printf("2.꼬리를 만져본다.\n");
		gotoxy(x, 19);
		printf("3.손으로 놀아준다. \n");


		if (y == 17) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 17);
			printf("1.간식을 준다. \n");

		}

		else if (y == 18) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.간식을 준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 18);
			printf("2.꼬리를 만져본다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 19);
			printf("3.손으로 놀아준다. \n");
		}

		else if (y == 19) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.간식을 준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 18);
			printf("2.꼬리를 만져본다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 19);
			printf("3.손으로 놀아준다.\n");
		}

		int ch = _getch();
		switch (ch) {
		case 72:
			if (y > 17) y--;
			break;
		case 80:
			if (y < 19) y++;
			break;
		case 13:
			if (y == 17) {
				heart += 3;
				return 0;
			}
			else if (y == 18) {
				heart -= 3;
				return 0;
			}
			else if (y == 19) {
				heart += 1;
				return 0;
			}
		}
	}


}

int cat3() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
	int x = 20, y = 8;
	gotoxy(x, y);
	printf("         (zzz...)\n");
	gotoxy(x, y+1);
	printf("          v\n");
	gotoxy(x, y+2);
	printf("  |\\      _,,,,--,,_\n");
	gotoxy(x, y+3);
	printf(" / , `. - '`' - ,\\ - ;,\n");
	gotoxy(x, y+4);
	printf("|, 4 - ) ), , __,\\ (;;\n");
	gotoxy(x, y+5);
	printf("'---''(.'--'  `-'`.)`'\n");
}

int day3() {
	int x = 0, y = 17;
	printf("\n");
	printf("================================================================================\n");
	slowPrint(1, "★ Day.3 고양이가 낮잠을 자고 있다. 어떻게 할까?\n");
	slowPrint(1, "1.따뜻한 잠자리를 위해 핫팩을 끼워준다. \n");
	slowPrint(1, "2.후~ 바람을 불어서 깨운다. \n");
	slowPrint(1, "3.아무것도 하지 않은채 지나간다. \n");
	printf("================================================================================\n");

	while (1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
		gotoxy(x, 17);
		printf("1.따뜻한 잠자리를 위해 핫팩을 끼워준다. \n");
		gotoxy(x, 18);
		printf("2.후~ 바람을 불어서 깨운다. \n");
		gotoxy(x, 19);
		printf("3.아무것도 하지 않은채 지나간다. \n");


		if (y == 17) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 17);
			printf("1.따뜻한 잠자리를 위해 핫팩을 끼워준다. \n");

		}

		else if (y == 18) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.따뜻한 잠자리를 위해 핫팩을 끼워준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 18);
			printf("2.후~ 바람을 불어서 깨운다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 19);
			printf("3.아무것도 하지 않은채 지나간다. \n");
		}

		else if (y == 19) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.따뜻한 잠자리를 위해 핫팩을 끼워준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 18);
			printf("2.후~ 바람을 불어서 깨운다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 19);
			printf("3.아무것도 하지 않은채 지나간다. \n");
		}

		int ch = _getch();
		switch (ch) {
		case 72:
			if (y > 17) y--;
			break;
		case 80:
			if (y < 19) y++;
			break;
		case 13:
			if (y == 17) {
				heart += 3;
				return 0;
			}
			else if (y == 18) {
				heart -= 3;
				return 0;
			}
			else if (y == 19) {
				heart += 0;
				return 0;
			}
		}
	}


}

int cat4() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
	int x = 20, y = 2;
	gotoxy(x, y);
	printf("                      __     __,\n");
	gotoxy(x, y + 1);
	printf("                      ＼,`~""~` / \n");
	gotoxy(x, y + 2);
	printf("      .-=-.           /    -  - ＼\n");
	gotoxy(x, y + 3);
	printf("     / .-. ＼         {  =    Y  }=\n");
	gotoxy(x, y + 4);
	printf("    (_/   ＼ ＼       ＼      / \n");
	gotoxy(x, y + 5);
	printf("           ＼ ＼      _/` ' ` '`b\n");
	gotoxy(x, y + 6);
	printf("            ＼ `.__.-'`         ＼-. \n");
	gotoxy(x, y + 7);
	printf("             |               _.' `'-.__)＼\n");
	gotoxy(x, y + 8);
	printf("             ＼    ;_..--'  /              |\n");
	gotoxy(x, y + 9);
	printf("              |   /  /      |              | \n");
	gotoxy(x, y + 10);
	printf("              ＼ __)__)      ＼           /\n");
	gotoxy(x, y + 11);
	printf("                               '.  __   .'\n");

}

int day4() {
	int x = 0, y = 17;
	printf("\n");
	printf("================================================================================\n");
	slowPrint(1, "★ Day.4 고양이가 비닐봉지를 가지고 놀고있다. 어떻게 할까?\n");
	slowPrint(1, "1.봉투 손잡이에 목이 졸릴 위험이 있다. 봉지를 뺐는다. \n");
	slowPrint(1, "2.봉지를 뭉쳐서 던져준다. \n");
	slowPrint(1, "3.고양이인척 함께 봉지와 싸운다. \n");
	printf("================================================================================\n");

	while (1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
		gotoxy(x, 17);
		printf("1.봉투 손잡이에 목이 졸릴 위험이 있다. 봉지를 뺐는다. \n");
		gotoxy(x, 18);
		printf("2.봉지를 뭉쳐서 던져준다. \n");
		gotoxy(x, 19);
		printf("3.고양이인척 함께 봉지와 싸운다. \n");


		if (y == 17) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 17);
			printf("1.봉투 손잡이에 목이 졸릴 위험이 있다. 봉지를 뺐는다. \n");

		}

		else if (y == 18) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.봉투 손잡이에 목이 졸릴 위험이 있다. 봉지를 뺐는다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 18);
			printf("2.봉지를 뭉쳐서 던져준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 19);
			printf("3.고양이인척 함께 봉지와 싸운다. \n");
		}

		else if (y == 19) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.봉투 손잡이에 목이 졸릴 위험이 있다. 봉지를 뺐는다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 18);
			printf("2.봉지를 뭉쳐서 던져준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 19);
			printf("3.고양이인척 함께 봉지와 싸운다. \n");
		}

		int ch = _getch();
		switch (ch) {
		case 72:
			if (y > 17) y--;
			break;
		case 80:
			if (y < 19) y++;
			break;
		case 13:
			if (y == 17) {
				heart -= 3;
				return 0;
			}
			else if (y == 18) {
				heart += 3;
				return 0;
			}
			else if (y == 19) {
				heart += 0;
				return 0;
			}
		}
	}


}

int cat5() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
	int x = 20, y = 6;
	gotoxy(x, y);
	printf("                       / ＼_ / ＼\n");
	gotoxy(x, y + 1);
	printf("       ＼  ""            (  - ㅅ - )\n");
	gotoxy(x, y + 2);
	printf("   _____/ /_____  _____(   _u_u  )_______//  \n");
	gotoxy(x, y + 3);
	printf("  /   _  _____________________________＼\n");
	gotoxy(x, y + 4);
	printf("|   /                         ||\n");
	gotoxy(x, y + 5);
	printf("     ---""___.                  U\n");
	gotoxy(x, y + 6);
	printf("  __-----=\'\n");
	gotoxy(x, y + 7);
	printf(" |'\n");


}

int day5() {
	int x = 0, y = 18;
	printf("\n");
	printf("================================================================================\n");
	slowPrint(1, "★ Day.5 고양이가 높은 나무위에 올라가있다. 위급한 상황이다. 어떻게 할까?\n");
	slowPrint(1, "1.나무를 타서 고양이를 구출한다. \n");
	slowPrint(1, "2.119에 신고한다. \n");
	slowPrint(1, "3.나는 고소공포증이다...그냥 지나친다. \n");
	printf("================================================================================\n");

	while (1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
		gotoxy(x, 17);
		printf("1.나무를 타서 고양이를 구출한다. \n");
		gotoxy(x, 18);
		printf("2.119에 신고한다. \n");
		gotoxy(x, 19);
		printf("3.나는 고소공포증이다...그냥 지나친다. \n");


		if (y == 17) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 17);
			printf("1.나무를 타서 고양이를 구출한다. \n");

		}

		else if (y == 18) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.나무를 타서 고양이를 구출한다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 18);
			printf("2.119에 신고한다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 19);
			printf("3.나는 고소공포증이다...그냥 지나친다. \n");
		}

		else if (y == 19) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.나무를 타서 고양이를 구출한다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 18);
			printf("2.119에 신고한다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 19);
			printf("3.나는 고소공포증이다...그냥 지나친다. \n");
		}

		int ch = _getch();
		switch (ch) {
		case 72:
			if (y > 17) y--;
			break;
		case 80:
			if (y < 19) y++;
			break;
		case 13:
			if (y == 17) {
				heart += 3;
				return 0;
			}
			else if (y == 18) {
				heart += 1;
				return 0;
			}
			else if (y == 19) {
				heart -= 3;
				return 0;
			}
		}
	}
}

int cat6() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
	int x = 20, y = 9;
	gotoxy(x, y);
	printf("          __\n");
	gotoxy(x, y + 1);
	printf(" \ ______/ V`- ,              /＼     _. - ._.) \n");
	gotoxy(x, y + 2);
	printf("  }        /~~              /-  `- '  (  `--'\n");
	gotoxy(x, y + 3);
	printf(" /_)^ --,r'         vs      `-  , ) -   > ) ＼\n");
	gotoxy(x, y + 4);
	printf("|b      |b                     (.' ＼)  (.'  -'\n");


}

int day6() {
	int x = 0, y = 18;
	printf("\n");
	printf("================================================================================\n");
	slowPrint(1, "★ Day.6 고양이와 강아지가 싸우고있다. 어떻게 할까?\n");
	slowPrint(1, "1.고양이 편을 들고, 강아지를 쫓아낸다. \n");
	slowPrint(1, "2.강아지 편을 들고, 고양이를 쫓아낸다. \n");
	slowPrint(1, "3.나는 둘 다 사랑하며, 중립을 유지할 것이다. \n");
	printf("================================================================================\n");

	while (1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
		gotoxy(x, 17);
		printf("1.고양이 편을 들고, 강아지를 쫓아낸다. \n");
		gotoxy(x, 18);
		printf("2.강아지 편을 들고, 고양이를 쫓아낸다. \n");
		gotoxy(x, 19);
		printf("3.나는 둘 다 사랑하며, 중립을 유지할 것이다. \n");


		if (y == 17) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 17);
			printf("1.고양이 편을 들고, 강아지를 쫓아낸다. \n");

		}

		else if (y == 18) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.고양이 편을 들고, 강아지를 쫓아낸다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 18);
			printf("2.강아지 편을 들고, 고양이를 쫓아낸다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 19);
			printf("3.나는 둘 다 사랑하며, 중립을 유지할 것이다. \n");
		}

		else if (y == 19) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.고양이 편을 들고, 강아지를 쫓아낸다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 18);
			printf("2.강아지 편을 들고, 고양이를 쫓아낸다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 19);
			printf("3.나는 둘 다 사랑하며, 중립을 유지할 것이다. \n");
		}

		int ch = _getch();
		switch (ch) {
		case 72:
			if (y > 17) y--;
			break;
		case 80:
			if (y < 19) y++;
			break;
		case 13:
			if (y == 17) {
				heart += 3;
				return 0;
			}
			else if (y == 18) {
				heart -= 3;
				return 0;
			}
			else if (y == 19) {
				heart += 0;
				return 0;
			}
		}
	}
}

int cat7() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
	int x = 20, y = 10;
	gotoxy(x, y);
	printf("    /|_/|  !!    _______\n");
	gotoxy(x, y + 1);
	printf("   ( o.o )      /       |\n");
	gotoxy(x, y + 2);
	printf("   ( _uu_)     |         ===3\n");
	gotoxy(x, y + 3);
	printf("                \_______/\n");


}

int day7() {
	int x = 0, y = 18;
	printf("\n");
	printf("================================================================================\n");
	slowPrint(1, "★ Day.7 고양이가 a++한우 등급 세일 전단지를 빤히 보고있다. 어떻게 할까?\n");
	slowPrint(1, "1.당장 슈퍼에 달려가서 한우를 사와서 준다. \n");
	slowPrint(1, "2.나는 돈이 없다... 고양이와 함께 전단지를 보기만 한다. \n");
	slowPrint(1, "3.한우를 샀지만... 역시 내가 먹고싶다. 고양이한테 주지 않는다. \n");
	printf("================================================================================\n");

	while (1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
		gotoxy(x, 17);
		printf("1.당장 슈퍼에 달려가서 한우를 사와서 준다. \n");
		gotoxy(x, 18);
		printf("2.나는 돈이 없다... 고양이와 함께 전단지를 보기만 한다. \n");
		gotoxy(x, 19);
		printf("3.한우를 샀지만... 역시 내가 먹고싶다. 고양이한테 주지 않는다. \n");


		if (y == 17) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 17);
			printf("1.당장 슈퍼에 달려가서 한우를 사와서 준다. \n");

		}

		else if (y == 18) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.당장 슈퍼에 달려가서 한우를 사와서 준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 18);
			printf("2.나는 돈이 없다... 고양이와 함께 전단지를 보기만 한다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 19);
			printf("3.한우를 샀지만... 역시 내가 먹고싶다. 고양이한테 주지 않는다. \n");
		}

		else if (y == 19) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.당장 슈퍼에 달려가서 한우를 사와서 준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 18);
			printf("2.나는 돈이 없다... 고양이와 함께 전단지를 보기만 한다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 19);
			printf("3.한우를 샀지만... 역시 내가 먹고싶다. 고양이한테 주지 않는다. \n");
		}

		int ch = _getch();
		switch (ch) {
		case 72:
			if (y > 17) y--;
			break;
		case 80:
			if (y < 19) y++;
			break;
		case 13:
			if (y == 17) {
				heart += 5;
				return 0;
			}
			else if (y == 18) {
				heart += 0;
				return 0;
			}
			else if (y == 19) {
				heart += 0;
				return 0;
			}
		}
	}
}

int cat8() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
	int x = 20, y = 5;
	gotoxy(x, y);
	printf("   /       /       /    _\n");
	gotoxy(x, y + 1);
	printf("        ./        ./     \\\n");
	gotoxy(x, y + 2);
	printf("   ./   |\\_/|           ||\n");
	gotoxy(x, y + 3);
	printf("        )- - '._.-""""-.=-  //\n");
	gotoxy(x, y + 4);
	printf("       = \Y_= /          \//\n");
	gotoxy(x, y + 5);
	printf("    /    `''`\       /    /\n");
	gotoxy(x, y + 6);
	printf("/            |    \ |   /\n");
	gotoxy(x, y + 7);
	printf("  ./          \\   /- \ \\ \n");
	gotoxy(x, y + 8);
	printf("       /     ((_| ((_/\n");

}

int day8() {
	int x = 0, y = 18;
	printf("\n");
	printf("================================================================================\n");
	slowPrint(1, "★ Day.8 비가 온다. 고양이가 추위에 덜덜 떨고있다. 어떻게 할까?\n");
	slowPrint(1, "1.우산을 씌워준다. \n");
	slowPrint(1, "2.박스집을 만들어준다. \n");
	slowPrint(1, "3.지붕 밑으로 옮겨준다. \n");
	printf("================================================================================\n");

	while (1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
		gotoxy(x, 17);
		printf("1.우산을 씌워준다. \n");
		gotoxy(x, 18);
		printf("2.박스집을 만들어준다. \n");
		gotoxy(x, 19);
		printf("3.지붕 밑으로 옮겨준다. \n");


		if (y == 17) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 17);
			printf("1.우산을 씌워준다. \n");

		}

		else if (y == 18) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.우산을 씌워준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 18);
			printf("2.박스집을 만들어준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 19);
			printf("3.지붕 밑으로 옮겨준다. \n");
		}

		else if (y == 19) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.우산을 씌워준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 18);
			printf("2.박스집을 만들어준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 19);
			printf("3.지붕 밑으로 옮겨준다. \n");
		}

		int ch = _getch();
		switch (ch) {
		case 72:
			if (y > 17) y--;
			break;
		case 80:
			if (y < 19) y++;
			break;
		case 13:
			if (y == 17) {
				heart += 3;
				return 0;
			}
			else if (y == 18) {
				heart -= 1;
				return 0;
			}
			else if (y == 19) {
				heart += 1;
				return 0;
			}
		}
	}
}

int cat9() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
	int x = 20, y = 3;
	gotoxy(x, y);
	printf("                      __     __,\n");
	gotoxy(x, y + 1);
	printf("                      ＼,`~""~` /    |          |\n");
	gotoxy(x, y + 2);
	printf("      .-=-.           /    -  - ＼ |          |\n");
	gotoxy(x, y + 3);
	printf("     / .-. ＼         {  =    Y  }=|          |\n");
	gotoxy(x, y + 4);
	printf("    (_/   ＼ ＼       ＼      /    |          |\n");
	gotoxy(x, y + 5);
	printf("           ＼ ＼      _/` ' ` '`b   |          |\n");
	gotoxy(x, y + 6);
	printf("            ＼ `.__.-'`         ＼-.           |\n");
	gotoxy(x, y + 7);
	printf("             |               _.' `'-.__)/\n");
	gotoxy(x, y + 8);
	printf("             ＼    ;_..--'       /     ;      |\n");
	gotoxy(x, y + 9);
	printf("              |   /  /         /   .         | \n");
	gotoxy(x, y + 10);
	printf("              ＼ __)__)      ＼_____--___    /\n");



}

int day9() {
	int x = 0, y = 18;
	printf("\n");
	printf("================================================================================\n");
	slowPrint(1, "★ Day.9 고양이가 갑자기 바짓가랑이를 물고 운다. 어떻게 할까?\n");
	slowPrint(1, "1.무슨일이지...? 고양이를 따라간다. \n");
	slowPrint(1, "2.진정시키기 위해 쓰다듬는다. \n");
	slowPrint(1, "3.배가 고픈것 같으니 사료를 준다. \n");
	printf("================================================================================\n");

	while (1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
		gotoxy(x, 17);
		printf("1.무슨일이지...? 고양이를 따라간다. \n");
		gotoxy(x, 18);
		printf("2.진정시키기 위해 쓰다듬는다. \n");
		gotoxy(x, 19);
		printf("3.배가 고픈것 같으니 사료를 준다. \n");


		if (y == 17) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 17);
			printf("1.무슨일이지...? 고양이를 따라간다. \n");

			int ch = _getch();
			switch (ch) {
			case 72:
				if (y > 17) y--;
				break;
			case 80:
				if (y < 19) y++;
				break;
			case 13:
				break;
			}
			hidden_ending();
		}
		

		else if (y == 18) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.무슨일이지...? 고양이를 따라간다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 18);
			printf("2.진정시키기 위해 쓰다듬는다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 19);
			printf("3.배가 고픈것 같으니 사료를 준다. \n");
		}

		else if (y == 19) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.무슨일이지...? 고양이를 따라간다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 18);
			printf("2.진정시키기 위해 쓰다듬는다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 19);
			printf("3.배가 고픈것 같으니 사료를 준다. \n");
		}

		int ch = _getch();
		switch (ch) {
		case 72:
			if (y > 17) y--;
			break;
		case 80:
			if (y < 19) y++;
			break;
		case 13:
			if (y == 17) {
				heart += 2;
				hidden = 1;
				return 0;
			}
			else if (y == 18) {
				heart -= 1;
				return 0;
			}
			else if (y == 19) {
				heart += 1;
				return 0;
			}
		}
	}
}

int cat10() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
	int x = 20, y = 9;
	gotoxy(x, y);
	printf("      (...) \n");
	gotoxy(x, y + 1);
	printf("         v   /＼     _. - ._.) \n");
	gotoxy(x, y + 2);
	printf("            /-  `- '  (  `--'\n");
	gotoxy(x, y + 3);
	printf("            `-  , ) -   > ) ＼\n");
	gotoxy(x, y + 4);
	printf("             (.' ＼)  (.'  -'  ,,,\n");

}

int day10() {
	int x = 0, y = 18;
	printf("\n");
	printf("================================================================================\n");
	slowPrint(1, "★ Day.10 고양이가 내 뒤를 따라온다. 어떻게 할까?\n");
	slowPrint(1, "1.아르바이트 하는 곳까지 따라오게 냅둔다. \n");
	slowPrint(1, "2.심심한가보다. 나뭇가지로 놀아준다. \n");
	slowPrint(1, "3.뛴다. \n");
	printf("================================================================================\n");

	while (1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
		gotoxy(x, 17);
		printf("1.아르바이트 하는 곳까지 따라오게 냅둔다. \n");
		gotoxy(x, 18);
		printf("2.심심한가보다. 나뭇가지로 놀아준다. \n");
		gotoxy(x, 19);
		printf("3.뛴다. \n");


		if (y == 17) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 17);
			printf("1.아르바이트 하는 곳까지 따라오게 냅둔다. \n");

		}

		else if (y == 18) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.아르바이트 하는 곳까지 따라오게 냅둔다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 18);
			printf("2.심심한가보다. 나뭇가지로 놀아준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 19);
			printf("3.뛴다. \n");
		}

		else if (y == 19) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 17);
			printf("1.아르바이트 하는 곳까지 따라오게 냅둔다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
			gotoxy(x, 18);
			printf("2.심심한가보다. 나뭇가지로 놀아준다. \n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			gotoxy(x, 19);
			printf("3.뛴다. \n");
		}

		int ch = _getch();
		switch (ch) {
		case 72:     // 위
			if (y > 17) y--;
			break;
		case 80:		// 아래
			if (y < 19) y++;
			break;
		case 13:		
			if (y == 17) {
				heart += 3;
				return 0;
			}
			else if (y == 18) {
				heart += 1;
				return 0;
			}
			else if (y == 19) {
				heart -= 3;
				return 0;
			}
		}
	}
}

int gameLogic() {
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
		case 3:
			system("cls");
			cat3();
			day3();
		case 4:
			system("cls");
			cat4();
			day4();

		case 5:
			system("cls");
			cat5();
			day5();

		case 6:
			system("cls");
			cat6();
			day6();
		case 7:
			system("cls");
			cat7();
			day7();

		case 8:
			system("cls");
			cat8();
			day8();

		case 9:
			system("cls");
			cat9();
			day9();

		case 10:
			system("cls");
			cat10();
			day10();


		}
		char key = _getch();
		if (hidden == 1) {
			break;
		}
		

		if (key == 13) {
				dayCnt++;
		}
		break;
	}
	return 0;
}