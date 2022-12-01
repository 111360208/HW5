#include<stdlib.h>
#include<stdio.h>

int maximum(int[], int y);

int main()
{
	int i, j, k, ans;
	int array[100];
	printf("輸入陣列長度 ");
	scanf("%d", &i);

	printf("輸入陣列內容 \n");
	for (j = 0; j < i; j++)
	{
		scanf("%d", &array[j]);
	}

	ans = maximum(array, i);
	printf("最大值=%d\n", ans);

	system("pause");
	return 0;
}

int maximum(int x[], int y)	
{
	int max = 0, i;

	for (i = 0; i < y; i++)
	{
		if (x[i] > max)
			max = x[i];
	}
	return max;
}