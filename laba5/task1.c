#include <stdio.h>
#include "arrays.h"
#include <malloc.h>

int main1() {
    int n = 99, a=100, b=100;
    int* mas;
    mas = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < 50; i++)
    {
        mas[i] = i * 2;
        printf("%d ", mas[i]);
    }
    while (a > b || a > 99 || b > 99 ||a<0 ||b<0 || a==b || getchar() != '\n')
    {
        rewind(stdin);
        printf("\n enter otrezok a and b\n");
        scanf_s("%d", &a);
        scanf_s("%d", &b);
    }
    if (a%2==1 && b%2==1)
        b -= 1;

    cutthesegment(mas, a, b);
    mas=(int*)realloc(mas, (b - a)*sizeof(int));
    for (int i = 0; i < (b - a)/2+1; i++)
        printf("%d ", mas[i]);

    free(mas);
    return 0;
}