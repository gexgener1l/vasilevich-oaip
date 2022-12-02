#include <stdio.h>
#include <stdlib.h>

int main() {
	int n=0,m=0,p;
	int a[100][100];
    printf("NxN\n");
    while (n > 100 || n < 2) {
        rewind(stdin);
        printf("Enter size of the array");
        scanf_s("%d", &n);
    }
    printf("choose 2to random and 1 for kb input\n");
    scanf_s("%i", &p);
    switch (p) {
    case 1:
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++){
                printf("arr[%d][%d]=", j, k);
                scanf_s("%d", &a[j][k]);
            }
        }
        break;
   case 2:
       for (int j = 0; j < n; j++) {
           for (int k = 0; k < n; k++){
               printf("arr[%d][%d]=", j, k);
               a[j][k] = (rand() % 100 - 50);
               printf("%d ",a[j][k]);
           }
           printf("\n");
       }
       break;
    default:
        printf("stupid");
    }
    int summROW[100], summCOL[100], summDIAG[2];
    for (int i = 0; i < n; i++){
        summDIAG[0] += a[i][i];
        summDIAG[1] += a[(n - 1) - i][(n - 1) - i];
        for (int j = 0; j < n; j++){
            summROW[i] += a[i][j];
            summCOL[i] += a[j][i];
        }
        if (summCOL[i] != summROW[i]){
            printf("matrix is not magiv\n");
            break;
        }
        else if ((i > 0) && (summROW[i] != summROW[i - 1])){
            printf("matrix is not magiv\n");
            break;
        }
        else if ((i > 0) && (summCOL[i] != summCOL[i - 1]))    {
            printf("matrix is not magiv\n");
            break;
        }
    }
    if ((summDIAG[0] == summDIAG[1]) && (summCOL[0] == summDIAG[0]))
        printf("matrix is magiv\n");
	return 0;
}