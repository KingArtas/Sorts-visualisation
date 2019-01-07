#include "sorts.h"

void createArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = i+1;
	}
}

void swap(int* a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void shuffle(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		swap(&arr[i], &arr[rand() % n]);
	}
}

void coppyArray(int* arr1, int* arr2, int n)
{
	while (n--)
	{
		*arr2 = *arr1;
		arr2++;
		arr1++;
	}
}

void printArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void bubbleSort(int* arr, int n)
{
	bool flag = true;
	while (flag)
	{
		flag = false;
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i]>arr[i+1])
			{
				swap(&arr[i], &arr[i + 1]);
				flag = true;
			}
		}
	}
}

void selectionSort(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = arr[i], imin = i;
		for (int j = i+1; j < n; j++)
		{
			if (arr[j]<min)
			{
				min = arr[j];
				imin = j;
			}
		}
		if (i != imin)
		{
			swap(&arr[i], &arr[imin]);
		}
	}
}