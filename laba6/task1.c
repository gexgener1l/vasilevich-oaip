#include "arrays.h"
int main1() {
    int** mas,N,M;
    printf("cols: ");
    N = cin(&N);
    printf("rows: ");
    M = cin(&M);
    fillMas(&mas, N, M);
    outputMas(mas, N, M);
    ShellSort(&mas, N, M);
    printf("\n");
    outputMas(mas, N, M);
    freeMas(mas, N);
    return 0;
}