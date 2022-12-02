#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"
#include <malloc.h>
#define scanf scanf_s 
int main()
{
    int n, m,c;
    printf("choose kb input(1) or random(2)");
    while (scanf_s("%d", &c) != 1 || getchar() != '\n'||c>=3 ||c<=0) {
        printf("Pls enter a number!\n");
        rewind(stdin);
    }

    printf("rows and cols: ");
    cinput(&n);
    //scanf("%d", &n);
    int** a = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        a[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++)
        {
            if (c == 1) {
                printf("a[%d][%d] = ", i, j);
                scanf_s("%d", &a[i][j]);
            }
            else if (c==2)
            {
                a[i][j] = rand() % 100 - 50;
                //printf("%d", a[i][j]);
            }
        }
    }
    // Вывод
    outputmass2(a, n, n);
    findminunder(a, n);
    
    
    free(a);
    return 0;
}