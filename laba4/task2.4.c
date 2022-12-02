#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n=0, m=0, p;
    int a[100][100];
    printf("enter the size of matrix NxM\n");
    while (n > 100 || n < 2) {
        rewind(stdin);
        printf("enter the number of strok\n");
        scanf_s("%d", &n);
    }
    while (m > 100 || m < 2) {
        rewind(stdin);
        printf("enter the number of columns\n");
        scanf_s("%d", &m);
    }
    printf("choose 1to random and 2for kb input\n");
    scanf_s("%i", &p);
    switch (p) {
    case 1:
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < n; k++)
            {
                printf("arr[%d][%d]=", j, k);
                scanf_s("%d", &a[j][k]);
            }

        }
        break;
    case 2:
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < n; k++)
            {
                //printf("arr[%d][%d]=", j, k);
                a[j][k] = (rand() % 100-30);
                printf("%d ", a[j][k]);
            }
            printf("\n");
        }
        break;
    default:
        printf("stupid");
    }
    bool flag = false;
    int sum = 0;
    int el = 0;
    int index = 0;
    for (int i = 0; i < m; i++)
    {
        flag = true;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] <= 0) { flag = false; }
            else index = i;
        }
        if (flag == true)
        {
            for (int o = 0; o < n; o++)
            {
                sum += a[index][o];
            }  
            break;
        }
    }
    printf("sum=%d\n", sum);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] -= sum;
        }
    }
    for (int j = 0; j < m; j++) {
        for (int k = 0; k < n; k++)
        {
            printf("%d ",a[j][k]);
        }
        printf("\n");
    }
    return 0;
}