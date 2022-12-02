#include <stdio.h>
#include <stdlib.h>

int main3() {
	int min, max;
	int a[100], i, mn = 0, mx = 0, m = 1,sum = 0,n,p;
	printf("enter size of the array");
	scanf_s("%i", &n);
	printf("choose 1to random and 2for kb input\n");
	scanf_s("%i", &p);
	switch (p) {
	case 1:
		for (int i = 0; i < n; i++) {
			a[i] = (rand()%100-50 );
			printf("the %dth element of array is %d\n", i, a[i]);
			if (a[i] < a[mn]) mn = i;
			if (a[i] > a[mx]) mx = i;
			if (a[i] < 0) {
				sum += a[i];
			}
		}
			break;
	case 2:
		printf("enter elements of the array");
		for (int i = 0; i < n; i++) {
			scanf_s("%i", &a[i]);
			if (a[i] < a[mn]) mn = i;
			if (a[i] > a[mx]) mx = i;
			if (a[i] < 0) {
				sum += a[i];
			}
		}
		break;

	default :
		printf("stupid?");
	}
	
	
	printf("sum is %i\n", sum);
	if (mx > mn)
	{
		i = mx;
		mx = mn;
		mn = i;
	}

	for (i = mx + 1; i < mn; i++) {
		m *= a[i];
	}

	printf("proizvedenie: %d\n", m);
	
	return 0;
}