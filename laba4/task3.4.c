#include <stdio.h>
#include <stdlib.h>

int main() {
    int n=0, m, p;
    int a[100][100];
    printf("NxM\n");
    while (n > 100 || n < 2) {
        rewind(stdin);
        printf("Enter size of the array");
        scanf_s("%d", &n);
    }
    printf("choose 2to random and 1for kb input\n");
    scanf_s("%i", &p);
    switch (p) {
    case 1:
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++)
            {
                printf("arr[%d][%d]=", j, k);
                scanf_s("%d", &a[j][k]);
            }

        }
        break;
    case 2:
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++)
            {
                //printf("arr[%d][%d]=", j, k);
                a[j][k] = (rand() % 10);
                printf("%d ", a[j][k]);
            }
            printf("\n");
        }
        break;
    default:
        printf("stupid");
    }
    int sum = 0;
    int q=0;
    int w=n;
    for (int j = 0; j < n/2+1; j++) {
        for (q; q < w; q++) {
            sum += a[j][q];
        }
        q = 0;
        q += j+1;
        w -= 1;
    }
    
    printf("%d", sum);
    return 0;
}