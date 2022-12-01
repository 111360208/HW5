#include <stdio.h>
#include <stdlib.h>

void cubByReference(int *nPtr);

int main(void) {
	int number = 5;
	printf("The original value of number is %d", number);

	cubByReference(&number);

	printf("\nThe new value of number is %d\n", number);



	return 0;
}
void cubByReference(int *nPtr) {
	*nPtr = *nPtr * *nPtr * *nPtr;

}