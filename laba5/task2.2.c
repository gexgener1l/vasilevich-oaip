#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"
#include <malloc.h>
#define scanf scanf_s 
int main()
{
	int n=10, m = 10, x = 0, i = 0;

	printf("rows: ");
	cinput(&n);
	printf("stolbs: ");
	cinput(&m);
	int** a = (int**)calloc(n, sizeof(int*));
	for (i=0; i < n; i++)
	{
		a[i] = (int*)calloc(m, sizeof(int));
		int b = rand() % m;

		for (int j = 0; j < b - 1; j++)
		{	
			a[i][j] = j + 1;
		}
	}

	// Вывод
	outputmasswo0(a, n, m);
	free(a);
	return 0;
}