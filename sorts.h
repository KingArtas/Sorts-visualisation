#ifndef SORTS
#define SORTS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NUM_OF_SORTS 

typedef enum boolean{ false, true } bool;

void createArray(int* arr, int n);

void swap(int* a, int *b);

void shuffle(int* arr, int n);

void coppyArray(int* arr1, int* arr2, int n);

void printArray(int* arr, int n);

void bubbleSort(int* arr, int n);

void selectionSort(int* arr, int n);

#endif // !SORTS