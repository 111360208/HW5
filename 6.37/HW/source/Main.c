#include<stdlib.h>
#include<stdio.h>

int maximum(int[], int y);

int main()
{
	int i, j, k, ans;
	int array[100];
	printf("��J�}�C���� ");
	scanf("%d", &i);

	printf("��J�}�C���e \n");
	for (j = 0; j < i; j++)
	{
		scanf("%d", &array[j]);
	}

	ans = maximum(array, i);
	printf("�̤j��=%d\n", ans);

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