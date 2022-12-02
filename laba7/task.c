#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"

int main() {
    printf("What task you want to solve 1 or 2?");
    void(*function[2])(void) = { *task1, *task2 };
    int num = 0;
    scanf_s("%d", &num);
    function[num - 1]();
    return 0;
}