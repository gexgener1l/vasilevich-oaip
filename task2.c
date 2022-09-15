#include <stdio.h>

int main()
{
    int n, i, j;
    int x = 0;
    printf("enter the number ");
    scanf_s("%d", &n);
    
        
    for (i = 0; i * i * i < n - 1; i++) {
        for (j = i; j * j * j < n - 1; j++) {
            if (i * i * i + j * j * j == n) {
                x++;
            }
        }
    }
    printf("%d variabilities ", x);
    return 0;
}