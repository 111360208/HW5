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
		diceCounter[total - 2]++;
	}

	for (int i = 0; i < 11; i++) {
		printf("%d¥X²{¡G%d¦¸\n",i+2,diceCounter[i]);
	}

	return 0;
}