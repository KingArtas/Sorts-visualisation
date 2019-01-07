#include <conio.h>

#include "sorts.h"

#define LEN 10

int main()
{
	int* parr = (int*)malloc(LEN * sizeof(int));

	srand(time(NULL));
	createArray(parr, LEN);
	printArray(parr, LEN);
	shuffle(parr, LEN);
	printArray(parr, LEN);

	int *parr2 = (int*)malloc(LEN * sizeof(int));
	coppyArray(parr, parr2, LEN);
	printArray(parr2, LEN);

	bubbleSort(parr, LEN);
	printArray(parr, LEN);

	coppyArray(parr2, parr, LEN);
	selectionSort(parr, LEN);
	printArray(parr, LEN);

	free(parr);
	free(parr2);
	_getch();
	return 0;
}