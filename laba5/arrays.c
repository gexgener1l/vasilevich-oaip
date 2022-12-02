#include "arrays.h"
#include <stdio.h>
#include <malloc.h>

void outputmas(int* mas, int n,int b) {
    for (int i = 0; i < n; i+=b) printf("%d ", mas[i]);
}
void outputmass2(int** mas, int n, int m) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%5d ", mas[i][j]);
		}
		printf("\n");
	}
}
void outputmasswo0(int** mas, int n, int m) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d ", mas[i][j]);
            if (mas[i][j] == 0) {
                break;
            }
        }
        printf("\n");
    }
}
int cinput(int* a) {
    while (scanf_s("%d", a) != 1 || getchar() != '\n' || a<=0) {
        printf("Pls enter a number!\n");
        rewind(stdin);
    }
    return a;
}
int* cutthesegment(int* mas,int a,int b) {
    for (int i = 0; i <= ((b - a) / 2) + 1; i++) {
        mas[i] = a + i * 2;
        if (mas[i] % 2 == 1)
            mas[i] += 1;
    }
    return mas;
}
int** initMatrix(int rows, int cols){
	int* memory = calloc(rows * cols, sizeof(int));
	int** matrix = malloc(rows * sizeof(int*));

	for (int i = 0; i < rows; i++)
		matrix[i] = memory + (i * cols);

	return matrix;
}
int** initsqrmas(int n) {
    int** a = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        a[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf_s("%d", &a[i][j]);
        }
    }
    return a;
}
int findminunder(int** mas, int n) {
    int min = 999;
    for (int y = 0; y < n; y++) {
        for (int x = 0; x <= y; x++)
        {
            if (mas[y][x] < min)
                min = mas[y][x];
        }
    }
    printf("min el is:");
    printf("%d \n", min);
    return min;
}
