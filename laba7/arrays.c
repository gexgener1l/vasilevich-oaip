#include "arrays.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char* getStr(char* s, int k)
{
    int c, i = 0;
    while (--k > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;   //Enter or Ctrl + Z
    s[i] = '\0';
    return s;
}

int lenStr(char* s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

int cin(int a) {
    while (scanf_s("%d", &a) != 1 || getchar() != '\n') {
        printf("Pls enter a NUMBER\n");
        rewind(stdin);
    }
    return a;
}


void* task1(void)
{
    int len, i, index = 0;
    int n = 100;
    char* str = (char*)malloc(sizeof(char) * n);

    printf("Enter a string: ");
    getchar();
    getStr(str, n);

    len = lenStr(str);
    for (i = 0; i <= len; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        else
            str[i] = tolower(str[i]);
        //printf("%s", str[i]);
    }
    printf("New String: %s\n", str);
    free(str);
    return 0;
}
void* task2(void) {
    int n = 100, len_s, k;
    char* s = (char*)malloc(sizeof(char) * n);
    char* s0 = (char*)malloc(sizeof(char) * n);
    printf("enter s\n");
    getchar();
    getStr(s, n);
    printf("enter k\n");
    //scanf_s("%d", &k);
    k=cin(&k);
    len_s = lenStr(s);

    if (len_s>k)
    {
        int u = k;
        for (int i = 0; i < len_s; i++)
        {
            s0[i] = s[u];
            u++;
        }
    }
    else
    {
        int u = k-len_s;
        for (int i = 0; i < k-len_s; i++)
        {
            s0[i] = '.';
        }
        for (int i = 0; i < len_s; i++)
        {
            s0[u] = s[i];
            u++;
        }
        s0[k] = '\0';
    }
    printf("new s\n");
    printf("%s\n", s0);
    free(s);
    free(s0);
    return task2;
}