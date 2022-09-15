#include <stdio.h>
int main() {
	int a, b;
	printf("text numbers a and b:");
	scanf_s("%d",&a);
	scanf_s("%d",&b);
	if (a==b)
	{
		printf("numbers are equal");
	}
	else
	{
		printf("numbers are not equal");
	}
	return 0;
}