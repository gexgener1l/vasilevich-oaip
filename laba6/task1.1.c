#include "arrays.h"

int main() {
	srand(time(NULL));
	int* mas;
	int start, end;
	printf("enter size of array: ");
	int N = cin(&N);
	printf("input 1 for ki  or 2 for randomi: ");
	int c = checkRandomOrManualInput(&c);
	initArray(&mas, N);
	fillArray(&mas, N, c);
	start = clock();         
	selectionSort(&mas, N);
	//bubbleSort(&mas, N);
	//WorstSort(&mas, N);
	end = clock();
	outputArray(&mas, N);
	printf("\nTime of sort: %d ms", end - start);
	return 0;
}