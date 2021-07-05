#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#pragma warning (disable:4996)

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77


char team[100][21] = { "" }, exc1[100][1000] = { "" }, key;
int score[100] = { 0 }, win[100] = { 0 }, draw[100] = { 0 }, lose[100] = { 0 }, exc2[100] = { 0 };
int answer, num, num1, num2, game_cnt, x, y, p;




void game();
void KBO();
void K_League();
void KBL();
void KOVO();
void Random_Game();
void run_horse();
void Bingo();
void gawibawibo();

void gotoxy(int x, int y);
typedef enum { NOCURSOR, SOLIDCURSOR, NORMALCURSOR } CURSOR_TYPE;
void setcursortype(CURSOR_TYPE c);

void background();
void background2();
void background3();
void background4();
void background5();
void backgorund6();

void name();
void WDL();
void ex();
void rank();

int Menu(); //詭景 摹鷗
int** myAlloc(int num);
int same_num(int** user, int tmp, int num);//醞犒 羹觼
int del_num(int** user, int check, int num);//璋濠 餉薯, xル衛煎 羹檣雖
int check_bingo(int** user, int num, int mode);//綵堅 �挫�
int input_num(int* check_ary, int num, int* count, int mode);
void init_bingo(int** init, int num); //綵堅 蟾晦��
void Monitor(int** user, int** com, int num, int d);//�飛� 轎溘
void one(int** com1, int** com2, int num, int mode);//蕨難賅萄
void two(int** user, int** com, int num, int mode); //渠瞪賅萄

void rsp();
void rock(int x, int y, int i);
void sissors(int x, int y, int i);
void paper(int x, int y, int i);

int main() {
	answer = 0x00, num1 = 1, num = 0, key = NULL;
	background4();
	gotoxy(40, 4); printf("錳ж朝 Щ煎斜極擊 摹鷗п輿撮蹂.");
	gotoxy(40, 14); printf("1. 辦蝓 蕨難 啪歜");
	gotoxy(40, 17); printf("2. 虜菟晦");
	gotoxy(40, 20); printf("3. 謙猿ж晦");
	gotoxy(36, 14); printf("﹥"); gotoxy(0, 29);
	while (1) { //36, 13 19
		if (answer == 13)
			break;
		else if (answer == 0x00 || 0xE0) {
			answer = _getch();
		}
		if (answer == UP) {
			if (num1 != 1)
				num1--;
			gotoxy(36, 11 + (num1 + 1) * 3); printf("  "); gotoxy(36, 11 + num1 * 3); printf("﹥"); gotoxy(0, 29);
		}
		if (answer == DOWN) {
			if (num1 != 3)
				num1++;
			gotoxy(36, 11 + (num1 - 1) * 3); printf("  "); gotoxy(36, 11 + num1 * 3); printf("﹥"); gotoxy(0, 29);
		}
	}
	system("cls");
	if (num1 == 1) {
		game();
	}
	else if (num1 == 2) {
		background();
		gotoxy(43, 1); printf("ぜ 偃熱蒂 瞳橫輿撮蹂 (譆渠 100ぜ)");
		gotoxy(4, 3); scanf("%d", &num);
		gotoxy(43, 1); printf("                    ");
		gotoxy(4, 3); printf("    ");
		background2();
		name();
		WDL();
		ex();
		rank();
	}
	else if (num1 == 3) {
		background3();
		gotoxy(45, 4);
		printf("Щ煎斜極擊 謙猿м棲棻.");
		gotoxy(0, 10);
		exit(0);
	}
	return 0;
}

void background() {
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖弛\n");
	printf("弛弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t   弛弛\n");
	printf("弛戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
}

void background2() {
	system("cls");
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖弛\n");
	printf("弛弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t   弛弛\n");
	printf("弛戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎弛\n");
	for (int i = 2; i < num; i++) {
		printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
		printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
		printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
		printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
		printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
		printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	}
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
}

void background3() {
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	for (int i = 1; i < num; i++) {
		printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
		printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	}
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
}

void background4() {
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖弛\n");
	printf("弛弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t   弛弛\n");
	printf("弛弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t   弛弛\n");
	printf("弛弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t   弛弛\n");
	printf("弛弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t   弛弛\n");
	printf("弛弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t   弛弛\n");
	printf("弛戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t    弛\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
}

void background5() {
	printf("\n\n\t\t\t\t    忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t\t    弛    \t\t\t    弛\n");
	printf("\t\t\t\t    弛    \t\t\t    弛\n\n\n");
	printf("\t\t\t    忙式式式式式式式式式式式式式式式忖    \t     忙式式式式式式式式式式式式式式忖\n");
	printf("\t\t\t    弛     \t    弛     \t     弛    \t    弛\n");
	printf("\t\t\t    弛     \t    弛     \t     弛    \t    弛\n\n\n");
	printf("\t\t\t忙式式式式式式式忖\t忙式式式式式式式忖\t忙式式式式式式式忖\t忙式式式式式式式忖\n");
	printf("\t\t\t弛\t弛\t弛\t弛\t弛\t弛\t弛\t弛\n");
	printf("\t\t\t弛\t弛\t弛\t弛\t弛\t弛\t弛\t弛\n");
}

void background6() {
	gotoxy(40, 18); printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖");
	gotoxy(40, 19); printf("弛\t\t\t       弛");
	gotoxy(40, 20); printf("弛\t\t\t       弛");
	gotoxy(40, 21); printf("弛\t\t\t       弛");
	gotoxy(40, 22); printf("弛\t\t\t       弛");
	gotoxy(40, 23); printf("弛\t\t\t       弛");
	gotoxy(40, 24); printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎");
}

void name() {
	gotoxy(30, 6);
	printf("ぜ 偃熱 : %d", num);
	gotoxy(30, 1);
	printf("ぜ 檜葷 (и旋 譆渠 10旋濠, 艙僥 譆渠 20旋濠)\n");
	for (int i = 0; i < num; i++) {
		gotoxy(4, 3);
		printf("%dぜ : ", i + 1);
		scanf("%s", &team[i]);
		gotoxy(4, 3);
		printf("                                         ");
		gotoxy(30, 9 + i * 2);
		printf("%dぜ : %s", i + 1, team[i]);
	}
	gotoxy(30, 1);
	printf("                                                      ");
	gotoxy(4, 3);
	printf("                                          ");
}

void WDL() {
	gotoxy(30, 10 + num * 2);
	printf("瞪瞳擎 蝓葬 鼠蝓睡 ぬ寡牖戲煎 薑溺");
	for (int i = 0; i < num; i++) {
		gotoxy(30, 1);
		printf("%sぜ曖 蝓葬, 鼠蝓睡, ぬ寡 熱蒂 離滔渠煎 殮溘", team[i]);
		gotoxy(4, 3);
		printf("蝓葬 熱 : ");
		scanf("%d", &win[i]);
		gotoxy(4, 3);
		printf("                         ");
		gotoxy(4, 3);
		printf("鼠蝓睡 熱 : ");
		scanf("%d", &draw[i]);
		gotoxy(4, 3);
		printf("                         ");
		gotoxy(4, 3);
		printf("ぬ寡 熱 : ");
		scanf("%d", &lose[i]);
		gotoxy(4, 3);
		printf("                         ");
		gotoxy(30, 1);
		printf("                                                                    ");
		gotoxy(30, 12 + num * 2 + i * 2);
		printf("%sぜ曖 瞪瞳", team[i]);
		gotoxy(60, 12 + num * 2 + i * 2);
		printf("%d  %d  %d", win[i], draw[i], lose[i]);
	}
}

void ex() {
	for (int i = 0; i < num; i++) {
		gotoxy(30, 1);
		printf("%sぜ 蕨諼瞳檣 餌о 殮溘(嗥橫噙晦 X, 橈戲賊 0 殮溘)", team[i]);
		gotoxy(4, 3);
		scanf(" %s", exc1[i]);
		gotoxy(30, 14 + (num - 1) + num * 3 + i * 2);
		printf("%sぜ 蕨諼瞳檣 餌о", team[i]);
		if (strcmp(exc1[i], "0") == 0) {
			gotoxy(70, 14 + (num - 1) + num * 3 + i * 2);
			printf("橈擠");
			exc2[i] = 0;
		}
		else {
			gotoxy(70, 14 + (num - 1) + num * 3 + i * 2);
			printf("%s", exc1[i]);
			gotoxy(30, 1);
			printf("                                                                          ");
			gotoxy(4, 3);
			printf("                                                                 ");
			gotoxy(30, 1);
			printf("蕨諼 餌о曖 醞蹂紫朝 橫替薑紫檣雖 殮溘(0~100)");
			gotoxy(4, 3);
			scanf("%d", &exc2[i]);
			if (exc2[i] < 0 || exc2[i] > 100)
				exc2[i] = 0;
			gotoxy(90, 14 + (num - 1) + num * 3 + i * 2);
			printf("醞蹂紫 : %d", exc2[i]);
		}
		gotoxy(30, 1);
		printf("                                                                 ");
		gotoxy(4, 3);
		printf("                                                                 ");
	}
	Sleep(1000);
}

void rank()
{
	int c = 0;
	key = NULL;
	int i = 0;
	int cnt = 0;//濠褐爾棻 贖 璋濠曖 偃熱蒂 撬.
	int rank[100] = { 0 };
	system("cls");
	background3();
	gotoxy(30, 2); printf("蛔熱  ぜ檜葷");
	gotoxy(66, 2); printf("  蝓  鼠  ぬ");
	for (int i = 0; i < num; i++)
		score[i] = win[i] - lose[i];
	for (int i = 0; i < num; i++) {
		cnt = 0; //衙廓 i 夥莞 陽 蟾晦��.
		for (int j = 0; j < num; j++) {
			if (score[i] < score[j])
			{ //濠褐爾棻 觼棻賊 cnt 1隸陛.
				cnt++;
			}
		}
		rank[i] = cnt + 1;

	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (rank[i] == rank[j]) {
				if (i < j)
					rank[j]++;
			}
		}
		gotoxy(30, 2 + rank[i] * 2); printf("%3d蛔 : %s\n", rank[i], team[i]);
		gotoxy(66, 2 + rank[i] * 2); printf("%4d%4d%4d", win[i], draw[i], lose[i]);
	}
	gotoxy(35, 5 + num * 2);
	for (int i = 0; i < num; i++)
		score[i] = score[i] - score[i] * (exc2[i] / 100.0);
	for (int i = 0; i < num; i++) {
		cnt = 0; //衙廓 i 夥莞 陽 蟾晦��.
		for (int j = 0; j < num; j++) {
			if (score[i] < score[j])
			{ //濠褐爾棻 觼棻賊 cnt 1隸陛.
				cnt++;
			}
		}
		rank[i] = cnt + 1;
	}
	for (int i = 0; i < num; i++) {
		if (rank[i] == 1) {
			c++;
			if (c == 1)
				printf("蕨諼餌о擊 んли 闡У攪曖 辦蝓 蕨難 : %sぜ ", team[i]);
			else
				printf(" %sぜ", team[i]);
		}
	}
	gotoxy(35, 9 + num * 2); printf("嬴鼠 酈釭 援腦賊 籀擠 �飛橉虞� 給嬴骨棲棻.");
	while ((key = _getch()) != NULL) {
		system("cls");
		main();
		break;
	}
}

void game()
{
	game_cnt = 0, num1 = 1;
	background4();
	gotoxy(43, 4); printf("錳ж朝 啪歜擊 摹鷗п輿撮蹂.");
	gotoxy(48, 12); printf("1. KBO");
	gotoxy(48, 14); printf("2. K League");
	gotoxy(48, 16); printf("3. KBL");
	gotoxy(48, 18); printf("4. KOVO");
	gotoxy(48, 20); printf("5. Random Game");
	gotoxy(48, 22); printf("6. 菴煎 陛晦");
	gotoxy(45, 12); printf("﹥"); gotoxy(0, 29);
	while (1) { //36, 13 19
		if (game_cnt == 0) {
			answer = 0x00;
			game_cnt++;
		}
		else {
			if (answer == 13)
				break;
			else if (answer == 0x00 || 0xE0) {
				answer = _getch();
			}
			if (answer == UP) {
				if (num1 != 1) {
					num1--;
					gotoxy(45, 12 + num1 * 2); printf("  "); gotoxy(45, 12 + (num1 - 1) * 2); printf("﹥"); gotoxy(0, 29);
				}
				else {
					num1 = 6;
					gotoxy(45, 12); printf("  "); gotoxy(45, 12 + (num1 - 1) * 2); printf("﹥"); gotoxy(0, 29);
				}
			}
			if (answer == DOWN) {
				if (num1 != 6) {
					num1++;
					gotoxy(45, 12 + (num1 - 2) * 2); printf("  "); gotoxy(45, 12 + (num1 - 1) * 2); printf("﹥"); gotoxy(0, 29);
				}
				else {
					num1 = 1;
					gotoxy(45, 22); printf("  "); gotoxy(45, 12 + (num1 - 1) * 2); printf("﹥"); gotoxy(0, 29);
				}
			}
		}
	}
	system("cls");

	switch (num1) {
	case 1:
		KBO();
		break;
	case 2:
		K_League();
		break;
	case 3:
		KBL();
		break;
	case 4:
		KOVO();
		break;
	case 5:
		Random_Game();
		break;
	case 6:
		main();
	}
}

void KBO() {
	num1 = 2, num2 = 1; game_cnt = 0, x = 35, y = 13, key = NULL;
	int cnt = 0, rank[10] = { 0 };
	char name[10][10] = { "鳴撩", "舒骯", "KT", "LG", "и��", "煜等", "KIA", "酈遺", "NC", "SSG" };
	int win[10] = { 40,33,40,41,26,29,25,36,35,37 };
	int draw[10] = { 0,0,0,0,0,1,0,0,2,1 };
	int lose[10] = { 30,36,27,29,44,39,32,35,31,29 };
	int score[10] = { 0 };
	background4();
	gotoxy(45, 4); printf("Ы溯檜橫曖 辦蝓ぜ 蕨難");
	for (int i = 0; i < 5; i++) {
		gotoxy(40, 13 + i * 2); printf("%d. %s", 2 * i + 1, name[2 * i]);
		gotoxy(65, 13 + i * 2); printf("%d. %s", 2 * i + 2, name[2 * i + 1]);
	}
	gotoxy(x, y); printf("﹥"); gotoxy(0, 29);
	while (1) { //36, 13 19
		if (game_cnt == 0) {
			answer = 0x00;
			game_cnt++;
		}
		else {
			if (answer == 13)
				break;
			else if (answer == 0x00 || 0xE0) {
				answer = _getch();
			}
			if (answer == UP) {
				if (num1 != 2)
					num1 -= 2;
				y = 11 + num1;
				gotoxy(x, y + 2); printf("  "); gotoxy(x, y); printf("﹥"); gotoxy(0, 29);
			}
			if (answer == DOWN) {
				if (num1 != 10)
					num1 += 2;
				y = 11 + num1;
				gotoxy(x, y - 2); printf("  "); gotoxy(x, y); printf("﹥"); gotoxy(0, 29);
			}
			if (answer == LEFT) {
				if (num2 != 1)
					num2--;
				x = 35;
				gotoxy(x + 25, y); printf("  "); gotoxy(x, y); printf("﹥");
			}
			if (answer == RIGHT) {
				if (num2 != 2)
					num2++;
				x = 60;
				gotoxy(x - 25, y); printf("  "); gotoxy(x, y); printf("﹥");
			}
		}
	}
	switch (num1) {
	case 2:
		switch (num2) {
		case 1:
			p = 0;
			break;
		case 2:
			p = 1;
			break;
		}
		break;
	case 4:
		switch (num2) {
		case 1:
			p = 2;
			break;
		case 2:
			p = 3;
			break;
		}
		break;
	case 6:
		switch (num2) {
		case 1:
			p = 4;
			break;
		case 2:
			p = 5;
			break;
		}
		break;
	case 8:
		switch (num2) {
		case 1:
			p = 6;
			break;
		case 2:
			p = 7;
			break;
		}
		break;
	case 10:
		switch (num2) {
		case 1:
			p = 8;
			break;
		case 2:
			p = 9;
			break;
		}
		break;
	}
	gotoxy(45, 24);
	printf("Ы溯檜橫曖 摹鷗 : %sぜ", name[p]);
	gotoxy(0, 29);
	Sleep(1000);
	system("cls");
	num = 10;
	background3();
	gotoxy(30, 2); printf("蛔熱  ぜ檜葷");
	gotoxy(66, 2); printf("  蝓  鼠  ぬ");
	for (int i = 0; i < num; i++)
		score[i] = win[i] - lose[i];
	for (int i = 0; i < num; i++) {
		cnt = 0; //衙廓 i 夥莞 陽 蟾晦��.
		for (int j = 0; j < num; j++) {
			if (score[i] < score[j])
			{ //濠褐爾棻 觼棻賊 cnt 1隸陛.
				cnt++;
			}
		}
		rank[i] = cnt + 1;

	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (rank[i] == rank[j]) {
				if (i < j)
					rank[j]++;
			}
		}
		gotoxy(30, 2 + rank[i] * 2); printf("%3d蛔 : %s\n", rank[i], name[i]);
		gotoxy(66, 2 + rank[i] * 2); printf("%4d%4d%4d", win[i], draw[i], lose[i]);
	}
	for (int i = 0; i < num; i++) {
		if (rank[i] == 1) {
			if (i == p) {
				gotoxy(40, 5 + num * 2);
				printf("Ы溯檜橫曖 蕨難擎 ⑷營 1嬪殮棲棻");
			}
			else {
				gotoxy(35, 5 + num * 2);
				printf("Ы溯檜橫曖 蕨難擎 ⑷營 1嬪諦 棻落棲棻");
			}
		}
	}
	gotoxy(35, 9 + num * 2); printf("嬴鼠 酈釭 援腦賊 籀擠 �飛橉虞� 給嬴骨棲棻.\n ");
	while ((key = _getch()) != NULL) {
		system("cls");
		main();
	}
}

void K_League() {
	num1 = 2, num2 = 1; game_cnt = 0, x = 35, y = 11, key = NULL;
	int cnt = 0, rank[10] = { 0 };
	char name[12][10] = { "惜輿", "FC憮選", "撩陴", "鬼錳", "檣繭", "熱錳", "薯輿", "んо", "渠掘", "熱錳", "瞪磁", "選骯" };
	int win[12] = { 4,4,4,4,5,5,4,7,9,9,9,10 };
	int draw[12] = { 3,5,6,8,5,6,10,6,6,6,6,7 };
	int lose[12] = { 12,8,8,7,8,8,5,5,4,4,3,2 };
	int score[12] = { 0 };
	background4();
	gotoxy(45, 4); printf("Ы溯檜橫曖 辦蝓ぜ 蕨難");
	for (int i = 0; i < 6; i++) {
		gotoxy(40, 11 + i * 2); printf("%d. %s", 2 * i + 1, name[2 * i]);
		gotoxy(65, 11 + i * 2); printf("%d. %s", 2 * i + 2, name[2 * i + 1]);
	}
	gotoxy(x, y); printf("﹥"); gotoxy(0, 29);
	while (1) { //36, 13 19
		if (game_cnt == 0) {
			answer = 0x00;
			game_cnt++;
		}
		else {
			if (answer == 13)
				break;
			else if (answer == 0x00 || 0xE0) {
				answer = _getch();
			}
			if (answer == UP) {
				if (num1 != 2)
					num1 -= 2;
				y = 9 + num1;
				gotoxy(x, y + 2); printf("  "); gotoxy(x, y); printf("﹥"); gotoxy(0, 29);
			}
			if (answer == DOWN) {
				if (num1 != 12)
					num1 += 2;
				y = 9 + num1;
				gotoxy(x, y - 2); printf("  "); gotoxy(x, y); printf("﹥"); gotoxy(0, 29);
			}
			if (answer == LEFT) {
				if (num2 != 1)
					num2--;
				x = 35;
				gotoxy(x + 25, y); printf("  "); gotoxy(x, y); printf("﹥");
			}
			if (answer == RIGHT) {
				if (num2 != 2)
					num2++;
				x = 60;
				gotoxy(x - 25, y); printf("  "); gotoxy(x, y); printf("﹥");
			}
		}
	}
	switch (num1) {
	case 2:
		switch (num2) {
		case 1:
			p = 0;
			break;
		case 2:
			p = 1;
			break;
		}
		break;
	case 4:
		switch (num2) {
		case 1:
			p = 2;
			break;
		case 2:
			p = 3;
			break;
		}
		break;
	case 6:
		switch (num2) {
		case 1:
			p = 4;
			break;
		case 2:
			p = 5;
			break;
		}
		break;
	case 8:
		switch (num2) {
		case 1:
			p = 6;
			break;
		case 2:
			p = 7;
			break;
		}
		break;
	case 10:
		switch (num2) {
		case 1:
			p = 8;
			break;
		case 2:
			p = 9;
			break;
		}
		break;
	case 12:
		switch (num2) {
		case 1:
			p = 10;
			break;
		case 2:
			p = 11;
			break;
		}
	}
	gotoxy(45, 24);
	printf("Ы溯檜橫曖 摹鷗 : %sぜ", name[p]);
	gotoxy(0, 29);
	Sleep(1000);
	system("cls");
	num = 12;
	background3();
	gotoxy(30, 2); printf("蛔熱  ぜ檜葷");
	gotoxy(66, 2); printf("  蝓  鼠  ぬ");
	for (int i = 0; i < num; i++)
		score[i] = win[i] - lose[i];
	for (int i = 0; i < num; i++) {
		cnt = 0; //衙廓 i 夥莞 陽 蟾晦��.
		for (int j = 0; j < num; j++) {
			if (score[i] < score[j])
			{ //濠褐爾棻 觼棻賊 cnt 1隸陛.
				cnt++;
			}
		}
		rank[i] = cnt + 1;

	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (rank[i] == rank[j]) {
				if (i < j)
					rank[j]++;
			}
		}
		gotoxy(30, 2 + rank[i] * 2); printf("%3d蛔 : %s\n", rank[i], name[i]);
		gotoxy(66, 2 + rank[i] * 2); printf("%4d%4d%4d", win[i], draw[i], lose[i]);
	}
	for (int i = 0; i < num; i++) {
		if (rank[i] == 1) {
			if (i == p) {
				gotoxy(40, 5 + num * 2);
				printf("Ы溯檜橫曖 蕨難擎 ⑷營 1嬪殮棲棻");
			}
			else {
				gotoxy(35, 5 + num * 2);
				printf("Ы溯檜橫曖 蕨難擎 ⑷營 1嬪諦 棻落棲棻");
			}
		}
	}
	gotoxy(35, 9 + num * 2); printf("嬴鼠 酈釭 援腦賊 籀擠 �飛橉虞� 給嬴骨棲棻.\n ");
	while ((key = _getch()) != NULL) {
		system("cls");
		main();
	}
}

void KBL() {
	num1 = 2, num2 = 1; game_cnt = 0, x = 35, y = 13, key = NULL;
	int cnt = 0, rank[10] = { 0 };
	char name[10][20] = { "選骯 ⑷渠賅綠蝶", "寰曄 KGC", "堅曄 螃葬螞", "檣繭 瞪濠楠萄", "璽錳 LG", "憮選 SK", "賬渦蝶", "錳輿 DB", "瞪輿 KCC", "睡骯 KT" };
	int win[10] = { 32,30,28,27,19,24,24,24,36,26 };
	int lose[10] = { 30,36,27,29,44,39,32,35,31,29 };
	int score[10] = { 0 };
	background4();
	gotoxy(45, 4); printf("Ы溯檜橫曖 辦蝓ぜ 蕨難");
	for (int i = 0; i < 5; i++) {
		gotoxy(40, 13 + i * 2); printf("%d. %s", 2 * i + 1, name[2 * i]);
		gotoxy(65, 13 + i * 2); printf("%d. %s", 2 * i + 2, name[2 * i + 1]);
	}
	gotoxy(x, y); printf("﹥"); gotoxy(0, 29);
	while (1) { //36, 13 19
		if (game_cnt == 0) {
			answer = 0x00;
			game_cnt++;
		}
		else {
			if (answer == 13)
				break;
			else if (answer == 0x00 || 0xE0) {
				answer = _getch();
			}
			if (answer == UP) {
				if (num1 != 2)
					num1 -= 2;
				y = 11 + num1;
				gotoxy(x, y + 2); printf("  "); gotoxy(x, y); printf("﹥"); gotoxy(0, 29);
			}
			if (answer == DOWN) {
				if (num1 != 10)
					num1 += 2;
				y = 11 + num1;
				gotoxy(x, y - 2); printf("  "); gotoxy(x, y); printf("﹥"); gotoxy(0, 29);
			}
			if (answer == LEFT) {
				if (num2 != 1)
					num2--;
				x = 35;
				gotoxy(x + 25, y); printf("  "); gotoxy(x, y); printf("﹥");
			}
			if (answer == RIGHT) {
				if (num2 != 2)
					num2++;
				x = 60;
				gotoxy(x - 25, y); printf("  "); gotoxy(x, y); printf("﹥");
			}
		}
	}
	switch (num1) {
	case 2:
		switch (num2) {
		case 1:
			p = 0;
			break;
		case 2:
			p = 1;
			break;
		}
		break;
	case 4:
		switch (num2) {
		case 1:
			p = 2;
			break;
		case 2:
			p = 3;
			break;
		}
		break;
	case 6:
		switch (num2) {
		case 1:
			p = 4;
			break;
		case 2:
			p = 5;
			break;
		}
		break;
	case 8:
		switch (num2) {
		case 1:
			p = 6;
			break;
		case 2:
			p = 7;
			break;
		}
		break;
	case 10:
		switch (num2) {
		case 1:
			p = 8;
			break;
		case 2:
			p = 9;
			break;
		}
		break;
	}
	gotoxy(45, 24);
	printf("Ы溯檜橫曖 摹鷗 : %sぜ", name[p]);
	gotoxy(0, 29);
	Sleep(1000);
	system("cls");
	num = 10;
	background3();
	gotoxy(30, 2); printf("蛔熱  ぜ檜葷");
	gotoxy(66, 2); printf("  蝓  ぬ");
	for (int i = 0; i < num; i++)
		score[i] = win[i] - lose[i];
	for (int i = 0; i < num; i++) {
		cnt = 0; //衙廓 i 夥莞 陽 蟾晦��.
		for (int j = 0; j < num; j++) {
			if (score[i] < score[j])
			{ //濠褐爾棻 觼棻賊 cnt 1隸陛.
				cnt++;
			}
		}
		rank[i] = cnt + 1;

	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (rank[i] == rank[j]) {
				if (i < j)
					rank[j]++;
			}
		}
		gotoxy(30, 2 + rank[i] * 2); printf("%3d蛔 : %s\n", rank[i], name[i]);
		gotoxy(66, 2 + rank[i] * 2); printf("%4d%4d", win[i], lose[i]);
	}
	for (int i = 0; i < num; i++) {
		if (rank[i] == 1) {
			if (i == p) {
				gotoxy(40, 5 + num * 2);
				printf("Ы溯檜橫曖 蕨難擎 ⑷營 1嬪殮棲棻");
			}
			else {
				gotoxy(35, 5 + num * 2);
				printf("Ы溯檜橫曖 蕨難擎 ⑷營 1嬪諦 棻落棲棻");
			}
		}
	}
	gotoxy(35, 9 + num * 2); printf("嬴鼠 酈釭 援腦賊 籀擠 �飛橉虞� 給嬴骨棲棻.\n ");
	while ((key = _getch()) != NULL) {
		system("cls");
		main();
	}
}

void KOVO() {
	num1 = 1, num2 = 1; game_cnt = 0, x = 35, y = 13, key = NULL;
	int cnt = 0, rank[10] = { 0 };
	char name[7][20] = { "渠ио奢", "辦葬蘋萄", "KB槳п爾я", "OK旎懦斜瑜", "и措瞪溘", "⑷渠議Я驍", "鳴撩�倣�" };
	int win[10] = { 26,23,19,19,18,15,6 };
	int lose[10] = { 10,13,17,17,18,21,30 };
	int score[10] = { 0 };
	background4();
	gotoxy(45, 4); printf("Ы溯檜橫曖 辦蝓ぜ 蕨難");
	for (int i = 0; i < 7; i++) {
		gotoxy(50, 10 + i * 2); printf("%d. %s", i + 1, name[i]);
	}
	gotoxy(45, 10); printf("﹥"); gotoxy(0, 29);
	while (1) { //36, 13 19
		if (game_cnt == 0) {
			answer = 0x00;
			game_cnt++;
		}
		else {
			if (answer == 13)
				break;
			else if (answer == 0x00 || 0xE0) {
				answer = _getch();
			}
			if (answer == UP) {
				if (num1 != 1)
					num1--;
				gotoxy(45, 10 + num1 * 2); printf("  "); gotoxy(45, 10 + (num1 - 1) * 2); printf("﹥"); gotoxy(0, 29);
			}
			if (answer == DOWN) {
				if (num1 != 7)
					num1++;
				gotoxy(45, 10 + (num1 - 2) * 2); printf("  "); gotoxy(45, 10 + (num1 - 1) * 2); printf("﹥"); gotoxy(0, 29);
			}
		}
	}
	for (int i = 1; i <= 7; i++) {
		if (num1 == i)
			p = i;
	}
	gotoxy(45, 24);
	printf("Ы溯檜橫曖 摹鷗 : %sぜ", name[p - 1]);
	gotoxy(0, 29);
	Sleep(1000);
	system("cls");
	num = 7;
	background3();
	gotoxy(30, 2); printf("蛔熱  ぜ檜葷");
	gotoxy(66, 2); printf("  蝓  ぬ");
	for (int i = 0; i < num; i++)
		score[i] = win[i] - lose[i];
	for (int i = 0; i < num; i++) {
		cnt = 0; //衙廓 i 夥莞 陽 蟾晦��.
		for (int j = 0; j < num; j++) {
			if (score[i] < score[j])
			{ //濠褐爾棻 觼棻賊 cnt 1隸陛.
				cnt++;
			}
		}
		rank[i] = cnt + 1;

	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (rank[i] == rank[j]) {
				if (i < j)
					rank[j]++;
			}
		}
		gotoxy(30, 2 + rank[i] * 2); printf("%3d蛔 : %s\n", rank[i], name[i]);
		gotoxy(66, 2 + rank[i] * 2); printf("%4d%4d", win[i], lose[i]);
	}
	for (int i = 0; i < num; i++) {
		if (rank[i] == 1) {
			if (i + 1 == p) {
				gotoxy(40, 5 + num * 2);
				printf("Ы溯檜橫曖 蕨難擎 ⑷營 1嬪殮棲棻");
			}
			else {
				gotoxy(35, 5 + num * 2);
				printf("Ы溯檜橫曖 蕨難擎 ⑷營 1嬪諦 棻落棲棻");
			}
		}
	}
	gotoxy(35, 9 + num * 2); printf("嬴鼠 酈釭 援腦賊 籀擠 �飛橉虞� 給嬴骨棲棻.\n ");
	while ((key = _getch()) != NULL) {
		system("cls");
		main();
	}
}

void Random_Game() {
	answer = 0x00, num1 = 1;
	background4();
	gotoxy(43, 4); printf("錳ж朝 楠渾啪歜擊 摹鷗п輿撮蹂.");
	gotoxy(48, 13); printf("1. 唳輿葆 啪歜");
	gotoxy(48, 16); printf("2. 綵堅");
	gotoxy(48, 19); printf("3. 陛嬪夥嬪爾");
	gotoxy(48, 22); printf("4. 菴煎 陛晦");
	gotoxy(45, 13); printf("﹥"); gotoxy(0, 29);
	while (1) { //36, 13 19
		if (answer == 13)
			break;
		else if (answer == 0x00 || 0xE0) {
			answer = _getch();
		}
		if (answer == UP) {
			if (num1 != 1)
				num1--;
			gotoxy(45, 10 + (num1 + 1) * 3); printf("  "); gotoxy(45, 10 + num1 * 3); printf("﹥"); gotoxy(0, 29);
		}
		if (answer == DOWN) {
			if (num1 != 4)
				num1++;
			gotoxy(45, 10 + (num1 - 1) * 3); printf("  "); gotoxy(45, 10 + num1 * 3); printf("﹥"); gotoxy(0, 29);
		}
	}

	system("cls");


	switch (num1) {
	case 1:
		run_horse();
		break;
	case 2:
		Bingo();
		break;
	case 3:
		gawibawibo();
		break;
	case 4:
		game();
	}
}

void run_horse() {
	key = NULL;
	srand(time(NULL));
	int h[8] = { 17,17,17,17,17,17,17,17 }, rank[8] = { 0 }, cnt = 0, random1, random2;
	char A = 'H', a[10] = "";
	printf("\t\t\t\t\t\t唳輿葆 啪歜\n\n\n\n\n\n");
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛\t\t\t\t\t\t\t\t\t\t\t\t\t\t弛\n");
	for (int i = 0; i < 8; i++) {
		printf("弛\t%d廓 蜓 弛 H", i + 1);
		for (int j = 0; j < 12; j++)
			printf("\t");
		printf("弛\n弛");
		for (int j = 0; j < 14; j++)
			printf("\t");
		printf("弛\n");
	}
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n");

	gotoxy(1, 2);
	printf("Ы溯檜橫曖 辦蝓 蕨難(璋濠煎 殮溘) : ");
	scanf("%d", &p);
	gotoxy(1, 4);
	printf("衛濛ж衛溥賊 模僥濠煎 'start'蒂 賦輿撮蹂 : ");
	scanf("%s", &a);

	if (strcmp(a, "start") == 0) {
		setcursortype(NOCURSOR);
		while (cnt != 8) {
			random1 = rand() % 2 + 1;
			random2 = rand() % 8;
			if (rank[random2] == 0) {
				if (h[random2] >= 110) {
					random1 = 1;
					h[random2] += random1;
					gotoxy(h[random2] - random1, random2 * 2 + 8);
					printf(" ");
					gotoxy(h[random2], random2 * 2 + 8);
					rank[random2] = ++cnt;
					printf("%c", A);
					Sleep(10);
				}
				else if (h[random2] == 109) {
					random1 = 1;
					h[random2] += random1;
					gotoxy(h[random2] - random1, random2 * 2 + 8);
					printf(" ");
					gotoxy(h[random2], random2 * 2 + 8);
					printf("%c", A);
					Sleep(10);
				}
				else {
					h[random2] += random1;
					gotoxy(h[random2] - random1, random2 * 2 + 8);
					printf(" ");
					gotoxy(h[random2], random2 * 2 + 8);
					printf("%c", A);
					Sleep(10);
				}
			}
		}
	}
	system("cls");
	gotoxy(0, 2);
	printf("\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n\t\t\t\t弛\t\t\t       弛\n");
	for (int i = 0; i < 8; i++) {
		gotoxy(0, rank[i] * 2 + 2);
		printf("\t\t\t\t弛\t%d蛔\t%d廓 蜓\t       弛\n", rank[i], i + 1);
		printf("\t\t\t\t弛\t\t\t       弛\n");
	}
	gotoxy(0, 20);
	printf("\t\t\t\t弛\t\t\t       弛\n");
	printf("\t\t\t\t弛\t蕨難и 蜓 : %d廓 蜓     弛\n", p);
	printf("\t\t\t\t弛\t\t\t       弛\n");
	if (rank[0] == p) {
		for (int j = 0; j < 4; j++)
			printf("\t");
		printf("弛\t蕨難 撩奢!\t       弛\n\t\t\t\t弛\t\t\t       弛\n");
		printf("\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n");
	}
	else {
		printf("\t\t\t\t弛\t蕨難 褒ぬ...\t       弛\n\t\t\t\t弛\t\t\t       弛\n");
		printf("\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n\n");
	}
	gotoxy(28, 27); printf("嬴鼠 酈釭 援腦賊 籀擠 �飛橉虞� 給嬴骨棲棻.\n ");
	while ((key = _getch()) != NULL) {
		system("cls");
		main();
	}
}

void Bingo()
{
	key = NULL;
	int* user = 0, * com = 0, * com1 = 0, * com2 = 0, mode, num = 5; //num=綵堅 觼晦
	srand(time(NULL));

	while (1)
	{
		mode = Menu();
		switch (mode)
		{
		case 1:
			one(com1, com2, num, mode);
			break;
		case 2:
			two(user, com, num, mode);
			break;
		case 3:
			system("cls");
			main();
		}
		system("pause");
		system("cls");
	}
	return 0;
}
int Menu()
{
	int sel;
	printf("1. 蕨難辨 啪歜\n");
	printf("2. Ы溯檜辨 啪歜\n");
	printf("3. 詭檣戲煎\n");

	while (1)
	{
		printf("#詭景 殮溘(1~3) : ");
		scanf("%d", &sel);

		if (sel > 3 || sel < 1)
			printf("澀跤 殮溘ж樟蝗棲棻.\n\n");
		else
			break;
	}

	return sel;
}
int** myAlloc(int num)  //綵堅 啪歜 餌檜鍔
{
	int** tmp, i;

	tmp = (int**)malloc(num * sizeof(int*));

	for (i = 0; i < num; i++)
		tmp[i] = (int*)malloc(num * sizeof(int));

	return tmp;
}
void one(int** com1, int** com2, int num, int mode)//蕨難 賅萄
{
	srand(time(NULL));
	int* check_ary, i, j, tmp, count = 0;
	int x = 0, y = 0, d = 0;
	com1 = myAlloc(num);
	com2 = myAlloc(num);
	check_ary = (int*)malloc((num * num) * sizeof(int));

	init_bingo(com1, num);
	init_bingo(com2, num);

	char ji[10] = { "" };
	system("cls");
	printf("援陛 檜望梱 憲嬴蜃醮爾撮蹂 註翕湮翕湮? (com1,com2 醞 鷗):");
	scanf("%s", ji);
	int kim = 0;

	while (1)
	{

		system("cls");
		Monitor(com1, com2, num, d);


		if (check_bingo(com1, num, 2) == 5)
		{
			printf("綵堅 5偃煎 闡У攪 1曖 蝓葬 殮棲棻.\n");
			Sleep(500);
			kim = 1;
			break;
		}
		if (check_bingo(com2, num, 2) == 5)
		{
			printf("綵堅 5偃煎 闡У攪 2曖 蝓葬 殮棲棻.\n");
			Sleep(500);
			kim = 2;
			break;
		}


		tmp = input_num(check_ary, num, &count, 2);
		printf("\ncom1檜 摹鷗и 高擎 (%d) 殮棲棻.", tmp);
		Sleep(700);
		system("cls");
		Monitor(com1, com2, num, d);
		tmp = input_num(check_ary, num, &count, 2);
		printf("\ncom2陛 摹鷗и 高擎 (%d) 殮棲棻.", tmp);
		Sleep(700);

		for (i = 0; i < (num * num); i++)
		{
			del_num(com1, check_ary[i], num);
			del_num(com2, check_ary[i], num);
		}

		system("cls");
		Monitor(com1, com2, num, d);


		for (i = 0; i < (num * num); i++)
		{
			del_num(com1, check_ary[i], num);
			del_num(com2, check_ary[i], num);
		}

		fflush(stdin);
	}

	if (kim == 1) {
		if (strcmp(ji, "com1") == 0)
			printf("蕨難 撩奢~~~!!\n");
		else
			printf("縑啪啪 檜匙紫 跤ж棲??蕨難 褒ぬ\n");
	}
	else if (kim == 2) {
		if (strcmp(ji, "com2") == 0)
			printf("蕨難 撩奢~~~!!\n");
		else
			printf("縑啪啪 檜匙紫 跤ж棲??蕨難 褒ぬ\n");
	}
	gotoxy(0, 28); printf("嬴鼠 酈釭 援腦賊 籀擠 �飛橉虞� 給嬴骨棲棻.\n ");
	while ((key = _getch()) != NULL) {
		system("cls");
		main();
	}
}
void two(int** user, int** com, int num, int mode)
{
	char key = NULL;
	int* check_ary;
	int i, tmp, count = 0;
	int x = 0, y = 0, d = 1;
	user = myAlloc(num);
	com = myAlloc(num);


	check_ary = (int*)malloc((num * num) * sizeof(int));

	init_bingo(user, num);
	init_bingo(com, num);

	while (1)
	{

		system("cls");
		Monitor(user, com, num, d);

		if (check_bingo(user, num, mode) == 5)
		{
			printf("綵堅 5偃煎 渡褐曖 蝓葬 殮棲棻.\n");
			scanf("%d", &num);
			break;
		}
		if (check_bingo(com, num, mode) == 5)
		{
			printf("綵堅 5偃煎 闡У攪曖 蝓葬 殮棲棻.\n");
			scanf("%d", &num);
			break;
		}


		if ((tmp = input_num(check_ary, num, &count, 1)) == 0)
			break;


		for (i = 0; i < (num * num); i++)
		{
			del_num(user, check_ary[i], num);
			del_num(com, check_ary[i], num);
		}

		system("cls");
		Monitor(user, com, num, d);

		tmp = input_num(check_ary, num, &count, mode);
		printf("\n闡У攪陛 摹鷗и 高擎 (%d) 殮棲棻.", tmp);
		getchar();
		while (key != NULL)
			key = _getch();

		for (i = 0; i < (num * num); i++)
		{
			del_num(user, check_ary[i], num);
			del_num(com, check_ary[i], num);
		}

		fflush(stdin);
		getchar();
	}
	gotoxy(0, 28); printf("嬴鼠 酈釭 援腦賊 籀擠 �飛橉虞� 給嬴骨棲棻.\n ");
	while ((key = _getch()) != NULL) {
		system("cls");
		main();
	}
}
void Monitor(int** user, int** com, int num, int d)
{
	int i, j;
	if (d == 1) {
		printf("\t[user] \t\t\t\t [computer]\n");
		for (i = 0; i < num; i++)
		{
			printf("|");

			for (j = 0; j < num; j++)
			{
				if (user[i][j] == 88)
					printf("%4c", user[i][j]);
				else
					printf("%4d", user[i][j]);
			}

			printf("  |\t |");

			for (j = 0; j < num; j++)
			{
				if (com[i][j] == 88)
					printf("%4c", com[i][j]);
				else
					printf("%4d", com[i][j]);
			}

			printf("  |\n");
		}
	}


	if (d == 0) {
		printf("\t[com1] \t\t\t\t [com2]\n");
		for (i = 0; i < num; i++)
		{
			printf("|");

			for (j = 0; j < num; j++)
			{
				if (user[i][j] == 88)
					printf("%4c", user[i][j]);
				else
					printf("%4d", user[i][j]);
			}

			printf("  |\t |");

			for (j = 0; j < num; j++)
			{
				if (com[i][j] == 88)
					printf("%4c", com[i][j]);
				else
					printf("%4d", com[i][j]);
			}

			printf("  |\n");
		}
	}
}
void init_bingo(int** init, int num) //綵堅 蟾晦��
{
	int i, j, tmp;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			tmp = rand() % (num * num) + 1;

			if (same_num(init, tmp, num))
				j--;
			else
				init[i][j] = tmp;
		}
	}
}
int input_num(int* check_ary, int num, int* count, int mode)
{
	int tmp, i;

	while (1)
	{
		if (mode == 1)
		{
			printf("\n璋濠 殮溘 [詭景(0)] : ");
			scanf("%d", &tmp);
			if (tmp == 0)
			{
				printf("詭景蒂 摹鷗ж樟蝗棲棻. \n");
				break;
			}
		}
		else
			tmp = rand() % (num * num) + 1;  //+1

		if (tmp > 0 && tmp < (num * num) + 1)
		{
			for (i = 0; i < (num * num); i++)
			{
				if (check_ary[i] == tmp)
					break;
			}

			if (i == (num * num))
			{
				check_ary[(*count)++] = tmp;
				return tmp;
			}
			else
				if (mode == 1)	printf("\n醞犒脹 璋濠 檜嘎煎 棻衛 ж撮辨~\n");
		}

		else
		{
			fflush(stdin);
			printf("1~%d高虜 陛棟м棲棻. \n\n", num * num);
		}
	}

	return tmp;
}
int check_bingo(int** user, int num, int mode)
{
	int i, j, bingo = 0;
	int garo, sero, x_1 = 0, x_2 = 0;

	for (i = 0; i < num; i++)
	{
		garo = 0;

		for (j = 0; j < num; j++)
		{
			if (user[i][j] == 88) garo++;

			if (i == j)
			{
				if (user[i][j] == 88)
					x_1++;
			}

			if ((i + j) == 4)
			{
				if (user[i][j] == 88)
					x_2++;
			}
		}

		if (garo == 5)
		{
			bingo++;
			if (mode == 1) return bingo;
		}
	}

	for (j = 0; j < num; j++)
	{
		sero = 0;

		for (i = 0; i < num; i++)
			if (user[i][j] == 88) sero++;

		if (sero == 5)
		{
			bingo++;
			if (mode == 1) return bingo;
		}
	}

	bingo = bingo + (x_1 / 5) + (x_2 / 5);

	return bingo;

}
int del_num(int** user, int check, int num)

{
	int i, j;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			if (check == user[i][j])
			{
				user[i][j] = 88;
				return 0;
			}
		}
	}
	return 0;
}
int same_num(int** user, int tmp, int num)
{
	int i, j;

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			if (user[i][j] == tmp)
				return 1;
		}
	}

	return 0;
}

void gawibawibo() {
	srand(time(NULL));
	system("cls");
	char player[8][10] = { "雖棻團", "梯團瓣", "寥��檣", "曄撮溼", "夢雖蕨", "嶸衛螞", "薑撮擎", "歎薑團" };
	int random[8] = { 0 }, count[8] = { 0 }, win[4] = { 0 }, win2[2] = { 0 }, win3 = 0, R, temp, x = 35, y = 12, random2, p;
	int cnt = 0, cnt2 = 0, c = 0;
	game_cnt = 0, key = NULL;
	background4();
	gotoxy(45, 4); printf("Ы溯檜橫曖 辦蝓濠 蕨難");
	for (int i = 0; i < 4; i++) {
		gotoxy(40, 12 + i * 3); printf("%d. %s", i * 2 + 1, player[i * 2]);
		gotoxy(60, 12 + i * 3); printf("%d. %s", (i + 1) * 2, player[i * 2 + 1] );
	}
	gotoxy(x, y); printf("﹥"); gotoxy(0, 29);
	while (1) {
		if (game_cnt == 0) {
			num1 = 3;
			num2 = 1;
			answer = 0x00;
			game_cnt++;
		}
		else {
			if (answer == 13)
				break;
			else if (answer == 0x00 || 0xE0) {
				answer = _getch();
			}
			if (answer == UP) {
				if (num1 != 3)
					num1 -= 3;
				y = 9 + num1;
				gotoxy(x, y + 3); printf("  "); gotoxy(x, y); printf("﹥"); gotoxy(0, 29);
			}
			if (answer == DOWN) {
				if (num1 != 12)
					num1 += 3;
				y = 9 + num1;
				gotoxy(x, y - 3); printf("  "); gotoxy(x, y); printf("﹥"); gotoxy(0, 29);
			}
			if (answer == LEFT) {
				if (num2 != 1)
					num2--;
				x = 35;
				gotoxy(x + 20, y); printf("  "); gotoxy(x, y); printf("﹥");
			}
			if (answer == RIGHT) {
				if (num2 != 2)
					num2++;
				x = 55;
				gotoxy(x - 20, y); printf("  "); gotoxy(x, y); printf("﹥");
			}
		}
	}
	switch (num1) {
	case 3:
		switch (num2) {
		case 1:
			p = 0;
			break;
		case 2:
			p = 1;
			break;
		}
		break;
	case 6:
		switch (num2) {
		case 1:
			p = 2;
			break;
		case 2:
			p = 3;
			break;
		}
		break;
	case 9:
		switch (num2) {
		case 1:
			p = 4;
			break;
		case 2:
			p = 5;
			break;
		}
		break;
	case 12:
		switch (num2) {
		case 1:
			p = 6;
			break;
		case 2:
			p = 7;
			break;
		}
		break;
	}
	num1 = 0, num2 = 0;
	system("cls");
	for (int i = 0; i < 8; i++) {
		temp = 0;
		R = rand() % 8;
		if (count[R] >= 1) {
			i--;
			continue;
		}
		else {
			random[i] = R;
			for (int j = 0; j < i; j++) {
				if (random[i] == random[j]) {
					temp = j;
					i--;
					break;
				}
			}
			if (temp != 0)
				continue;
			else
				count[R]++;
		}
	}
	for (int j = 0; j < 7; j++) {
		cnt = 0;
		if (cnt2 == 0) {
			switch (j) {
			case 6:
				for (int i = 0; i < 2; i++) {
					gotoxy(34 + i * 32, 6); printf("%s", player[win2[i]]);
				}
			case 4:
				for (int i = 0; i < 4; i++) {
					gotoxy(26 + i * 16, 11); printf("%s", player[win[i]]);
				}
			case 0:
				gotoxy(0, 0);
				background5();
				for (int i = 0; i < 8; i++) {
					gotoxy(22 + i * 8, 16); printf("%s", player[random[i]]);
				}
				while (1)
				{
					if ((key = kbhit()) != NULL)
					{
						FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
						key = NULL;
						break;
					}
					c++;
					Sleep(10);
					if (c >= 100) {
						c = 0;
						break;
					}
				}
			}
		}
		system("cls");
		gotoxy(47, 0); printf("陛嬪夥嬪爾");
		if (j >= 0 && j <= 3) {
			gotoxy(24, 2); printf("             ");
			gotoxy(24, 2); printf("%s", player[random[j * 2]]);
			gotoxy(72, 2); printf("             ");
			gotoxy(72, 2); printf("%s", player[random[2 * j + 1]]);
		}
		else if (j == 4 || j == 5) {
			gotoxy(24, 2); printf("             ");
			gotoxy(24, 2); printf("%s", player[win[j * 2 - 8]]);
			gotoxy(72, 2); printf("             ");
			gotoxy(72, 2); printf("%s", player[win[j * 2 - 7]]);
		}
		else if (j == 6) {
			gotoxy(24, 2); printf("             ");
			gotoxy(24, 2); printf("%s", player[win2[0]]);
			gotoxy(72, 2); printf("             ");
			gotoxy(72, 2); printf("%s", player[win2[1]]);
		}
		rsp();
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j <= 8; j++) {
				gotoxy(21, 14 - j);
				printf("                       ");
				gotoxy(69, 14 - j);
				printf("                       ");
			}
			x = 21, y = 14;
			switch (cnt) {
			case 0:
				rock(x, y, i);
				break;
			case 1:
				sissors(x, y, i);
				break;
			case 2:
				paper(x, y, i);
				break;
			}
			x = 69, y = 14;
			switch (cnt) {
			case 0:
				rock(x, y, i);
				while (1)
				{
					if ((key = kbhit()) != NULL)
					{
						FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
						key = NULL;
						break;
					}
					c++;
					Sleep(10);
					if (c >= 50) {
						c = 0;
						break;
					}
				}
					break;
			case 1:
				sissors(x, y, i);
				while (1)
				{
					if ((key = kbhit()) != NULL)
					{
						FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
						key = NULL;
						break;
					}
					c++;
					Sleep(10);
					if (c >= 50) {
						c = 0;
						break;
					}
				}
					break;
			case 2:
				paper(x, y, i);
				while (1)
				{
					if ((key = kbhit()) != NULL)
					{
						FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
						key = NULL;
						break;
					}
					c++;
					Sleep(10);
					if (c >= 50) {
						c = 0;
						break;
					}
				}
				break;
			}
			cnt++;
		}
		for (int i = 0; i < 2; i++) {
			if (i == 0) {
				x = 21;
				y = 14;
			}
			else if (i == 1) {
				x = 69;
				y = 14;
			}

			for (int i = 0; i <= 8; i++) {
				gotoxy(x, y - i);
				printf("                       ");
			}
			random2 = rand() % 3 + 1;
			switch (random2) {
			case 1:
				rock(x, y, i);
				break;
			case 2:
				sissors(x, y, i);
				break;
			case 3:
				paper(x, y, i);
				break;
			}
		}
		if (num1 == num2) {
			gotoxy(48, 6);
			printf("鼠蝓睡");
			cnt2++;
			j--;
			gotoxy(0, 20);
			while (1)
			{
				if ((key = kbhit()) != NULL)
				{
					FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
					key = NULL;
					break;
				}
				c++;
				Sleep(10);
				if (c >= 100) {
					c = 0;
					break;
				}
			}
			continue;
		}
		else if (num1 == 1 && num2 == 3) {
			if (j >= 0 && j <= 3)
				win[j] = random[2 * j + 1];
			else if (j == 4 || j == 5)
				win2[j - 4] = win[(j - 4) * 2 + 1];
			else if (j == 6)
				win3 = win2[1];
			gotoxy(72, 4); printf("≠蝓≠");
			gotoxy(24, 4); printf("≧ぬ≧");
		}
		else if (num1 == 3 && num2 == 1) {
			if (j >= 0 && j <= 3)
				win[j] = random[j * 2];
			else if (j == 4 || j == 5)
				win2[j - 4] = win[(j - 4) * 2];
			else if (j == 6)
				win3 = win2[0];
			gotoxy(24, 4); printf("≠蝓≠");
			gotoxy(72, 4); printf("≧ぬ≧");
		}
		else if (num1 < num2) {
			if (j >= 0 && j <= 3)
				win[j] = random[j * 2];
			else if (j == 4 || j == 5)
				win2[j - 4] = win[(j - 4) * 2];
			else if (j == 6)
				win3 = win2[0];
			gotoxy(24, 4); printf("≠蝓≠");
			gotoxy(72, 4); printf("≧ぬ≧");
		}
		else if (num1 > num2) {
			if (j >= 0 && j <= 3)
				win[j] = random[j * 2 + 1];
			else if (j == 4 || j == 5)
				win2[j - 4] = win[(j - 4) * 2 + 1];
			else if (j == 6)
				win3 = win2[1];
			gotoxy(72, 4); printf("≠蝓≠");
			gotoxy(24, 4); printf("≧ぬ≧");
		}
		cnt2 = 0;
		while (1)
		{
			if ((key = kbhit()) != NULL)
			{
				FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
				key = NULL;
				break;
			}
			c++;
			Sleep(10);
			if (c >= 100) {
				c = 0;
				break;
			}
		}
		gotoxy(0, 20);
		system("cls");
	}
	background5();
	gotoxy(50, 1); printf("%s", player[win3]);
	for (int i = 0; i < 2; i++) {
		gotoxy(34 + i * 32, 6); printf("%s", player[win2[i]]);
	}
	for (int i = 0; i < 4; i++) {
		gotoxy(26 + i * 16, 11); printf("%s", player[win[i]]);
	}
	for (int i = 0; i < 8; i++) {
		gotoxy(22 + i * 8, 16); printf("%s", player[random[i]]);
	}
	// 18
	background6();
	gotoxy(45, 20);
	printf("Ы溯檜橫曖 蕨難 : %s", player[p]);
	gotoxy(50, 22);
	if (win3 == p)
		printf("蕨難 撩奢!!!!!");
	else
		printf(" 蕨難 褒ぬ...");
	gotoxy(35, 28); printf("嬴鼠 酈釭 援腦賊 籀擠 �飛橉虞� 給嬴骨棲棻.\n ");
	while ((key = _getch()) != NULL) {
		system("cls");
		main();
	}
}

void rsp() {
	gotoxy(45, 9);
	printf(" / ))   ((′ ");
	gotoxy(45, 10);
	printf("(= ..) (.. =)");
	gotoxy(45, 11);
	printf("(空       穹)");
}
void rock(int x, int y, int i) {
	if (i == 0)
		num1 = 1;
	else if (i == 1)
		num2 = 1;
	gotoxy(x, y - 6);
	printf(" 旨收有收有收有收旬 ");
	gotoxy(x, y - 5);
	printf(" 早〤早〤早〤早〤早旬");
	gotoxy(x, y - 4);
	printf("旨朴收朴收旬收旭收旭早 ");
	gotoxy(x, y - 3);
	printf("早〤旨收收旭〤〤〤〤早");
	gotoxy(x, y - 2);
	printf("曲旬〤〤〤〤〤〤〤旨旭");
	gotoxy(x, y - 1);
	printf(" 曲旬〤〤〤〤〤旨旭  ");
	gotoxy(x, y);
	printf("  早〤〤〤〤〤早   ");
	gotoxy(0, 20);
}
void sissors(int x, int y, int i) {
	if (i == 0)
		num1 = 2;
	else if (i == 1)
		num2 = 2;
	gotoxy(x, y - 8);
	printf("  旨收有收旬            ");
	gotoxy(x, y - 7);
	printf("  早〤早〤早            ");
	gotoxy(x, y - 6);
	printf("  早〤早〤早            ");
	gotoxy(x, y - 5);
	printf("  早〤早〤早收有收旬    ");
	gotoxy(x, y - 4);
	printf(" 旨朴收朴收旬〤早〤早旬  ");
	gotoxy(x, y - 3);
	printf(" 早〤旨收收旭〤〤〤〤早  ");
	gotoxy(x, y - 2);
	printf(" 曲旬〤〤〤〤〤〤〤旨旭  ");
	gotoxy(x, y - 1);
	printf("  曲旬〤〤〤〤〤旨旭    ");
	gotoxy(x, y);
	printf("   早〤〤〤〤〤早      ");
	gotoxy(0, 20);
}
void paper(int x, int y, int i) {
	if (i == 0)
		num1 = 3;
	else if (i == 1)
		num2 = 3;
	gotoxy(x, y - 7);
	printf("  旨收有收有收有收旬 ");
	gotoxy(x, y - 6);
	printf("  早〤早〤早〤早〤早");
	gotoxy(x, y - 5);
	printf("  早〤早〤早〤早〤早旬");
	gotoxy(x, y - 4);
	printf("旨收早〤早〤早〤早〤早早");
	gotoxy(x, y - 3);
	printf("早〤早〤早〤早〤早〤早早 ");
	gotoxy(x, y - 2);
	printf("曲旬〤〤〤〤〤〤〤〤早早");
	gotoxy(x, y - 1);
	printf(" 曲旬〤〤〤〤〤〤〤旨旭");
	gotoxy(x, y);
	printf("  曲旬〤〤〤〤〤旨旭 ");
	gotoxy(0, 20);
}

void gotoxy(int x, int y)

{

	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}
void setcursortype(CURSOR_TYPE c) {
	CONSOLE_CURSOR_INFO CurInfo;

	switch (c) {
	case NOCURSOR:
		CurInfo.dwSize = 1;
		CurInfo.bVisible = FALSE;
		break;
	case SOLIDCURSOR:
		CurInfo.dwSize = 100;
		CurInfo.bVisible = TRUE;
		break;
	case NORMALCURSOR:
		CurInfo.dwSize = 20;
		CurInfo.bVisible = TRUE;
		break;
	}
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
}