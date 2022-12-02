#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100], i, n, j, temp = 0,p;
    printf("enter the size of the array: ");
    scanf_s("%d", &n);
    printf("choose 1to random and 2for kb input\n");
    scanf_s("%i", &p);
    switch (p) {
    case 1:
        for (int i = 0; i < n; i++) {
            a[i] = (rand()%100-50);
            printf("the %dth element of array is %d\n", i, a[i]);
        }
        break;
    case 2:
        printf("enter elements of the array: \n");
        for (i = 0; i < n; i++){
            scanf_s("%d", &a[i]);
        }
        break;
    default:
        printf("stupid");
    }

    
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }
    return(0);
}