#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10000

int * createArray(int size);
int * duplicateArray(int * array, int size);
void sort2way(int *array, int l, int r);
void sort3way(int *array, int l, int r);
void swap(int * x, int * y);

int main() {
	int *array;
	array = createArray(MAX);

}

int * createArray(int size) {
	int *array;
	int i;
	srand(time(NULL));
	for (i = 0; i < size; i++) {
		array[i] = 1 + rand()%10;
	}
	return array;
}

void swap(int * x, int * y) {
	int temp;
	temp = malloc(sizeof(int));
	temp = *x;
	*x = *y;
	*y = temp;
}

int * duplicateArray(int * array, int size) {
	int i;
	int * newArray;
	for (i = 0; i < size; i++) {
		newArray[i] = array[i];
	}
	return newArray;
}

void sort2way(int * array, int l, int t) {

}

void sort3way(int * array, int l, int r) {
	if (l <= r)
		return;
	int i = l - 1;
	int j = r;
	int p = l - 1;
	int q = r;
	while (1) {
		
	}
	
}

