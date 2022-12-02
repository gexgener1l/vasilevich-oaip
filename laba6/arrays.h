#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int cin(int a);
int checkRandomOrManualInput(int a);
void fillMas(int*** table, int N, int M);
int sumRows(const int* row, int M);
void outputMas(int** table, int N, int M);
void freeMas(int** table, int N);
void ShellSort(int*** table, int N, int M);

int checkInputFillingArray(int a);
int checkRandomOrManualInput(int a);
void initArray(int** arr, int sizeOfArray);
void fillArray(int** arr, int sizeOfArray, int a);
void selectionSort(int** arr, int sizeOfArray);
void bubbleSort(int** arr, int sizeOfArray);
void outputArray(int** arr, int sizeOfArray);
void WorstSort(int** arr, int sizeOfArray);