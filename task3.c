#include <stdio.h>

int main() {
    int p, q, k = 0;
    printf("enter p and q\n");
    scanf_s("%d", &p);
    scanf_s("%d", &q);
    if (p > q)
    {
        for (int i = 2; i <= q; i++) {
            if ((p % i == 0) && (q % i == 0))
            {
                k = 1;
                break;
            }
        }
    }
    else
    {
        for (int i = 2; i <= p; i++) {
            if (p % i == 0 && q % i == 0)
            {
                k = 1;
            }
        }
    }
    if (k == 1)
    {
        printf("numbers are coprime(vzaimprost)");
    }
    else
    {
        printf("numbers are not coprime(vzaimprost)");
    }
    return 0;
}