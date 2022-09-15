#include <stdio.h>

int main() {
	int n;
	printf("text the number of month");
	scanf_s("%d", &n);
	switch (n) {
	case 1:
		printf("january");
		break;
	case 2:
		printf("february");
		break;
	case 3:
		printf("march");
		break;
	case 4:
		printf("apriel");
		break;
	case 5:
		printf("may");
		break;
	case 6:
		printf("june");
		break;
	case 7:
		printf("july");
		break;
	case 8:
		printf("august");
		break;
	case 9:
		printf("september");
		break;
	case 10:
		printf("october");
		break;
	case 11:
		printf("november");
		break;
	case 12:
		printf("december");
		break;
	default:
		printf("pls, correct the number of month");
}
	return 0;
}