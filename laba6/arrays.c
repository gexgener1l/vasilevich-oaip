#include "arrays.h"
int checkRandomOrManualInput(int a) {
    while (scanf_s("%d", &a) != 1 || getchar() != '\n' || a >= 3 || a <= 0) {
        printf("Incorrect input. Try again: ");
        rewind(stdin);
    }
    return a;
}
int cin(int a) {
    while (scanf_s("%d", &a) != 1 || getchar() != '\n' || a < 1) {
        printf("Incorrect input. Try again: ");
        rewind(stdin);
    }
    return a;
}
int checkInputFillingArray(int a) {
    while (scanf_s("%d", &a) != 1 || getchar() != '\n') {
        printf("Incorrect input. Try again: ");
        rewind(stdin);
    }
    return a;
}
void initArray(int** arr, int sizeOfArray) {
    *arr = (int*)malloc(sizeOfArray * sizeof(int*));
}
void fillArray(int** arr, int sizeOfArray, int c) {
    for (int i = 0; i < sizeOfArray; i++) {
        if (c == 1) {
            int n = checkInputFillingArray(&n);
            (*arr)[i] = n;
        }
        else if (c == 2) {
            (*arr)[i] = (rand() % 100 - 50 + 1);
        }
    }
    for (int i = 0; i < sizeOfArray; i++) {
        printf("%d ", (*arr)[i]);
    }
}
void selectionSort(int** arr, int sizeOfArray) {
    int max = -99999, count = 0, temp = 0, min = 0;
    for (int i = 0; i < sizeOfArray; i++) {
        if ((*arr)[i] > max) {
            max = (*arr)[i];
        }
    }
    for (int i = 0; i < sizeOfArray; i++) {
        if ((*arr)[i] == max) {
            break;
        }
        count++;
    }
    printf("\nMax element: %d", max);
    for (int i = count + 1; i < sizeOfArray; i++) {
        if ((*arr)[i] % 2 == 0) {
            min = i;
            for (int j = i + 1; j < sizeOfArray; j++)
                if ((*arr)[min] > (*arr)[j] && (*arr)[j] % 2 == 0)
                    min = j;
            temp = (*arr)[min];
            (*arr)[min] = (*arr)[i];
            (*arr)[i] = temp;
        }
    }
}
void bubbleSort(int** arr, int sizeOfArray) {
    int max = -999, count = 0;
    for (int i = 0; i < sizeOfArray; i++) {
        if ((*arr)[i] > max) {
            max = (*arr)[i];
        }
    }
    for (int i = 0; i < sizeOfArray; i++) {
        if ((*arr)[i] == max) {
            break;
        }
        count++;
    }
    printf("\nMax element: %d", max);
    int z, noSwap = 0;
    /*for (int i = 0; i < sizeOfArray - 1; i++) {
        for (int j = count + 1; j < sizeOfArray - 1 - i; j++) {
            if ((*arr)[j] > (*arr)[j + 1]) {
                z = (*arr)[j];
                (*arr)[j] = (*arr)[j + 1];
                (*arr)[j + 1] = z;
                noSwap = 1;
            }
        }
        if (noSwap == 0) {
            break;
        }
    }*/
    for (int i = sizeOfArray - 1; i >= count + 1; i -= 2)
    {
        noSwap = 1;
        for (int j = count + 1; j < i; j++)
        {
            if ((* arr)[j] > (*arr)[j + 1])
            {
                z = (*arr)[j];
                (*arr)[j] = (*arr)[j + 1];
                (*arr)[j + 1] = z;
                noSwap = 0;
            }
        }
        if (noSwap == 1)
            break;
    }
}
//void WorstSort(int** arr, int sizeOfArray) {
//    int max = -99999, count = 0, z = 0, noSwap = 0;
//    for (int i = 0; i < sizeOfArray; i++) {
//        if ((*arr)[i] > max) {
//            max = (*arr)[i];
//        }
//    }
//    for (int i = 0; i < sizeOfArray; i++) {
//        if ((*arr)[i] == max) {
//            break;
//        }
//        count++;
//    }
//    printf("\nMax element: %d", max);
//    int k = 0;
//    int z, noSwap = 0;
//    for (int i = sizeOfArray - 1; i >= 0; i--)
//    {
//        (* arr)[k] = i;
//        k++;
//    }
//    for (int i = sizeOfArray - 1; i >= count + 1; i -= 2)
//    {
//        noSwap = 1;
//        for (int j = count + 1; j < i; j++)
//        {
//            if ((*arr)[j] > (*arr)[j + 1])
//            {
//                z = (*arr)[j];
//                (*arr)[j] = (*arr)[j + 1];
//                (*arr)[j + 1] = z;
//                noSwap = 0;
//            }
//        }
//        if (noSwap == 1)
//            break;
//    }
//}
void outputArray(int** arr, int sizeOfArray) {
    printf("\nSorted array: \n");
    for (int i = 0; i < sizeOfArray; i++) {
        printf("%d ", (*arr)[i]);
    }
}
//task2
void initMas(int*** arr, int N, int M) {
    *arr = (int**)malloc(N * sizeof(int*));
    for (int i = 0; i < N; i++) {
        (*arr)[i] = (int*)calloc(M, sizeof(int));
    }
}
void randomInitMas(int*** arr, int N, int M) {
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            (*arr)[i][j] = rand() % (100 - 50 + 1);
        }
    }
}
void manualInitMas(int*** table, int N, int M) {
    for (int i = 0; i < N; i++) {
        printf("Enter [%d] row of matrix:\n ", i + 1);
        for (int j = 0; j < M; j++) {
            printf("[%d][%d] = ", i + 1, j + 1);
            (*table)[i][j] = cin((*table)[i][j]);
            printf("\n");
        }
    }
}
void fillMas(int*** table, int N, int M) {
    printf("Enter 1 for ki or 2 for randomi: ");
    int var;
    var = checkRandomOrManualInput(&var);
    int flag = 1;
    while (flag) {
        switch (var) {
        case 2:
            initMas(table, N, M);
            randomInitMas(table, N, M);
            flag = 0;
            break;
        case 1:
            initMas(table, N, M);
            manualInitMas(table, N, M);
            flag = 0;
            break;
        default:
            printf("You wrote an incorrect variant, try again!\n>");
            var = cin(var);
        }
    }
}
int sumRows(const int* row, int M) {
    int sum = 0;
    for (int i = 0; i < M; i++) {
        sum += row[i];
    }
    return sum;
}
void outputMas(int** table, int N, int M) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%5d ", table[i][j]);
            if (j == M - 1) {
                printf("   (sum = %d)", sumRows(table[i], M));
            }
        }
        printf("\n");
    }
}
void freeMas(int** table, int N) {
    for (int i = 0; i < N; i++) {
        free(table[i]);
    }
    free(table);
}
void swapPointers(int** pointer1, int** pointer2) {
    int* temp_pointer = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temp_pointer;
}
void ShellSort(int*** table, int N, int M) {
    int i, j, gap;
    for (gap = N / 2; gap > 0; gap /= 2) {
        for (i = gap; i < N; i++) {
            for (j = i; j >= gap; j -= gap) {
                if (sumRows((*table)[j], M) > sumRows((*table)[j - gap], M)) {
                    swapPointers(&(*table)[j], &(*table)[j - gap]);
                }
            }
        }
    }
}