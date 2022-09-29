#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[100],n,b[100],v,p;
	printf("enter size of the array,");
	scanf_s("%i", &n);
	printf("choose 1to random and 2for kb input\n");
	scanf_s("%i", &p);
	switch (p) {
	case 1:
		for (int i = 0; i < n; i++) {
			a[i] = (rand());
			printf("the %dth element of array is %d\n", i, a[i]);
		}
		break;
	case 2:
		printf("enter elements of the array");
		for (int c = 0; c < n; c++) {
			scanf_s("%i", &a[c]);
		}
		break;
	default:
		printf("stupid?");
	}
	printf("second array:");
	for (int c = 0,v=0; c < n; c++) {
		if (a[c] % 2 == 1) {
			b[v]=a[c];
			printf("%i, ",b[v]);
			v++;
		}
	}
	return 0;
}