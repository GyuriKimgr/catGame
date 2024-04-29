#include "start.h"
#include "day.h"
#include "Ending.h"


int drawing1() {		// 베드엔딩
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
	system("cls");
	int x = 0, y = 0;
	gotoxy(x, y + 1);
	printf("                                << BAD ENDING >>\n");
	gotoxy(x, y + 2);
	printf("                                   Total: %d\n", heart);
	gotoxy(x, y + 4);
	printf("                                        ( ㅠ ㅠ )\n");
	gotoxy(x, y + 5);
	printf("           ____________                   V \n");
	gotoxy(x, y + 6);
	printf("          |   |      | ＼\n");
	gotoxy(x, y + 7);
	printf("          |   |      |   ＼________\n");
	gotoxy(x, y + 8);
	printf("          |   |참소주|     ____|_|_| .\n");
	gotoxy(x, y + 9);
	printf("          |   |      |    /             .\n");
	gotoxy(x, y + 10);
	printf("          |___|______|__/           ____.____\n");
	gotoxy(x, y + 11);
	printf("                                   |         |\n");
	gotoxy(x, y + 12);
	printf("                                    |~~~~ ~~~|\n");
	gotoxy(x, y + 13);
	printf("                                     |__잔__|\n");

}

int drawing2() {	// 노멀엔딩
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
	system("cls");
	int x = 0, y = 0;
	gotoxy(x, y + 1);
	printf("                              << NOMAL ENDING >>\n");
	gotoxy(x, y + 2);
	printf("                                  Total: %d\n", heart);
	gotoxy(x, y + 4);
	printf("                   ♥          |＼  _  /|            ♥ \n");
	gotoxy(x, y + 5);
	printf("                    ♥         /   > <  ＼         ♥\n");
	gotoxy(x, y + 6);
	printf("                        (''＼ {   = Y =   } /'')\n");
	gotoxy(x, y + 7);
	printf("                         ＼ ＼  ＼_ ^  _/   / /\n");
	gotoxy(x, y + 8);
	printf("                           ＼ ＼/  *o*  ＼//\n");
	gotoxy(x, y + 9);
	printf("                               |          |\n");
	gotoxy(x, y + 10);
	printf("                               |          |\n");
	gotoxy(x, y + 11);
	printf("                               /   // ＼  ＼\n");
	gotoxy(x, y + 12);
	printf("                             /   / ||   ＼ ＼\n");
	gotoxy(x, y + 13);
	printf("                     ((    (,,_/   ))     ＼_,,)   ))\n");
	gotoxy(x, y + 14);
	printf("                                  (/\n");
}

int drawing3() { // 트루엔딩
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
	system("cls");
	int x = 0, y = 0;
	gotoxy(x, y + 1);
	printf("                               << TRUE ENDING >>\n");
	gotoxy(x, y + 2);
	printf("                                  Total: %d\n", heart);
	gotoxy(x, y + 4);
	printf("                                    _____\n");
	gotoxy(x, y + 5);
	printf("                                   `=====`\n");
	gotoxy(x, y + 6);
	printf("                                   .  |  .\n");
	gotoxy(x, y + 7);
	printf("                      (~~~~~＼   ＼`-'''-'/      /~~~~~)\n");
	gotoxy(x, y + 8);
	printf("                       ~~(~~~＼    } 6 6 {     /~~~)~~\n");
	gotoxy(x, y + 9);
	printf("                           ~(~~＼ =.  Y  ,=   /~~)~\n");
	gotoxy(x, y + 10);
	printf("                             ~~(    /^^^＼    )~~\n");
	gotoxy(x, y + 11);
	printf("                                  /       ＼\n");
	gotoxy(x, y + 12);
	printf("                                  (  )-(  )\n");
	gotoxy(x, y + 13);
	printf("                                  '''   '''\n");
}


int drawing4() {	//히든엔딩
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default);
	system("cls");
	int x = 0, y = 0;
	gotoxy(x, y + 1);
	printf("                               << HIDDEN ENDING >>\n");
	gotoxy(x, y + 2);
	printf("                                   Total: %d\n", heart);
	gotoxy(x, y + 4);
	printf("            *             *                                 *             *\n");
	gotoxy(x, y + 5);
	printf("    *                   *         |＼=/|            ♥          *             *\n");
	gotoxy(x, y + 6);
	printf("                  *               /6 6＼             ♥               *\n");
	gotoxy(x, y + 7);
	printf("                                 =＼ Y_/=         ♥\n");
	gotoxy(x, y + 8);
	printf("                                  /|||＼  /      ====\n");
	gotoxy(x, y + 9);
	printf("                                 ( |||  )/       !!!!\n");
	gotoxy(x, y + 10);
	printf("                               =========================\n");
	gotoxy(x, y + 11);
	printf("                             XXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	gotoxy(x, y + 12);
	printf("                           XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	gotoxy(x, y + 13);
	printf("                         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	gotoxy(x, y + 14);
	printf("                           ||     |-|-|          |-|-|    ||\n");
	gotoxy(x, y + 15);
	printf("               |＼=/|      ||     #####          #####    ||\n");
	gotoxy(x, y + 16);
	printf("               )    (      ||     _____   @@@@   _____    ||\n");
	gotoxy(x, y + 17);
	printf("              =＼  _/=     ||     |-|-|   @@*@   |-|-|    ||\n");
	gotoxy(x, y + 18);
	printf("            ＼  /   ＼     ||     #####   @@@@   #####    ||\n");
	gotoxy(x, y + 19);
	printf("             ＼(______)   ****************____***************\n");

}


int hidden_ending() {	//히든엔딩
	drawing4();
	printf("================================================================================\n");
	slowPrint(1, "고양이를 따라가보면... 저 멀리 작은 고양이가 보인다.\n");
	slowPrint(1, "상태를 살펴보니 아픈 것 같다. 근처의 동물병원으로 가 치료를 해주자.\n");
	slowPrint(1, ">> 두마리의 고양이 집사가 되었다. (~￣▽￣)~ \n");
	printf("================================================================================\n");
	exit(0);
}


int Ending() {
	setconsleview();

	if (-23 <= heart && heart <= 10) { // 베드엔딩
		drawing1();
		printf("================================================================================\n");
		slowPrint(1, "평소보다 진상이 많아 참지 못하고 진상 손님의 얼굴을 때려버렸다...\n");
		slowPrint(1, "헉... 점장이 내일부터 나오지 않아도 된다고 했다.\n");
		slowPrint(1, "쓸쓸하게 집으로 돌아간다...\n");
		slowPrint(1, ">> 이제 두번다시 고양이를 보지 못하게 되었다...\n");
		printf("================================================================================\n");
	}

	else if (11 <= heart && heart <= 19) {	// 노멀엔딩
		drawing2();
		printf("================================================================================\n");
		slowPrint(1, "힘들었던 하루가 끝났다. 집으로 얼른 가야지~\n");
		slowPrint(1, "고양이가 짠~~ (=^oㅅo^=)\n");
		slowPrint(1, "저녁에 보이지 않았는데 오늘은 웬일이지?\n");
		slowPrint(1, "고양이가 달려와서 플레이어 품에 안긴다.\n");
		slowPrint(1, "플레이어가 고양이를 집으로 데리고 간다.\n");
		slowPrint(1, ">> 플레이어는 집사가 되었다.\n");
		printf("================================================================================\n");

	}

	else if (20 <= heart && heart <= 31) {	// 트루엔딩
		drawing3();
		printf("================================================================================\n");
		slowPrint(1, "힘들었던 하루가 끝났다. 집으로 얼른 가야지~\n");
		slowPrint(1, "고양이가 짠~~ (=^>ㅅ<^=)\n");
		slowPrint(1, "저녁에 보이지 않았는데 오늘은 웬일이지?\n");
		slowPrint(1, "고양이가 달려오더니 플레이어의 등을 타고 올라왔다.\n");
		slowPrint(1, ">> 고양이가 집사가 되었다.\n");
		printf("================================================================================\n");
	}
}

