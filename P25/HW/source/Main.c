#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int wdeck[][13]);
void deal(const int wdeck[][13], const char *wface[], const char *wsuit[]);

int main(void) {
	const char *suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
	const char *face[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

	int deck[4][13] = { 0 };

	srand(time(0));

	shuffle(deck);
	deal(deck, face, suit);


	return 0;
}

void shuffle(int wdeck[][13]) {
	int row;
	int column;
	int card;

	for (card = 1; card <= 52; card++) {	//將二微陣列中隨機一格填入1~52(全部空格初始值為0)，如果填入的格子不為0，就慢慢找到為0的格子填入
		do {
			row = rand() % 4;
			column = rand() % 13;
		} while (wdeck[row][column] != 0);
		wdeck[row][column] = card;
	}
}
void deal(const int wdeck[][13], const char *wface[], const char *wsuit[]) {//按照數值1~52printf花色出來
	int row;
	int column;
	int card;

	for (card = 1; card <= 52; card++) {
		for (row = 0; row <= 3; row++) {
			for (column = 0; column <= 12; column++) {
				if (wdeck[row][column] == card) {
					printf("%5s of %-8s%c", wface[column], wsuit[row], card % 2 == 0 ? '\n' : '\t');

				}
			}
		}
	}
}
