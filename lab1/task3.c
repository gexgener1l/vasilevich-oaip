#include <stdio.h>

int main() {
	int a, b, c;
	printf("text numbers a, b anc c:");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	
	if (a == (-1*b)){
		printf("%d",c);
	}
	else if (a == (-1 * c)){
		printf("%d", b);
	}
	else if (b== (-1 * c)) {
		printf("%d", a);
	}
	else{
		printf("no");
	}
	return 0;
}