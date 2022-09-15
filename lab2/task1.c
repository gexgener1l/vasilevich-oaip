#include <stdio.h>

int main() {

	float sum=0;
	int i = 1;
	while(sum <= 5){
		sum =sum+ (1.0/i);
		++i;
		
	}
	printf("%d", i);
	return 0;
}