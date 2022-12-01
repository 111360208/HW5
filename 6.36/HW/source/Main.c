#include<stdlib.h>
#include<stdio.h>

int main()
{
	int i, j = 0;
	char input[1000];

	printf("Str:");
	gets(input, 1000);		//輸入字串到指定陣列中

	for (i = 0; i < 100; i++)
	{
		if (input[i] == ('\0'))		//每個字串結束後面會有/0，當偵測到時就會
		{
			j = i - 1;
			break;
		}
	}

	while (j > (-1))
	{
		printf("%c", input[j]);
		j--;
	}

	printf("\n");

	system("pause");
	return 0;
}