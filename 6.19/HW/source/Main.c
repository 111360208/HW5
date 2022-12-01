#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int dice1, dice2;
	int total = 0;
	int diceCounter[11] = {0};

	srand(time(0));
	for (int i = 0; i < 36000; i++) {
		dice1 = rand() % 6+1;
		dice2 = rand() % 6+1;
		total = dice1 + dice2;
		if (total == 2) {
			diceCounter[0]++;
		}
		if (total == 3) {
			diceCounter[1]++;
		}
		if (total == 4) {
			diceCounter[2]++;
		}
		if (total == 5) {
			diceCounter[3]++;
		}
		if (total == 6) {
			diceCounter[4]++;
		}
		if (total == 7) {
			diceCounter[5]++;
		}
		if (total == 8) {
			diceCounter[6]++;
		}
		if (total == 9) {
			diceCounter[7]++;
		}
		if (total == 10) {
			diceCounter[8]++;
		}
		if (total == 11) {
			diceCounter[9]++;
		}
		if (total == 12) {
			diceCounter[10]++;
		}
	}

	for (int i = 0; i < 11; i++) {
		printf("%d¥X²{¡G%d¦¸\n",i+2,diceCounter[i]);
	}

	return 0;
}