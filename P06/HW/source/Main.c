#include <stdio.h>
#include <stdlib.h>

int cubByValue(int n);

int main(void) {
	int number=5;
	printf("The original value of number is %d", number);

	number= cubByValue(number);

	printf("\nThe new value of number is %d\n", number);



	return 0;
}
int cubByValue(int n) {
	return n * n * n;

}