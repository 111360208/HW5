#include<stdlib.h>
#include<stdio.h>

int binarysearch(int a[], int y);

int main()
{
	int number, ans;
	int a[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

	while (1)
	{
		printf("�п�J�j�M����� (-1����) : ");
		scanf_s("%d", &number);

		if (number < 0)
			break;
		ans = binarysearch(a, number);

		if (ans < 0)
			printf("�䤣�� %d\n", number);
		else
			printf("��%d�����= %d\n", ans, number);

	}

	system("pause");
	return 0;

}

int binarysearch(int a[], int y)
{
	int high = 21, low = 0;
	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (a[mid] == y)
			return mid + 1;
		else if (a[mid] > y)
			high = mid - 1;
		else if (a[mid] < y)
			low = mid + 1;
	}
	return -1;
}