#include <stdio.h>


int fibonacci_for_loop(int series) {
	int temp = 0;
	printf("%d, ", 0);
	if(series>1) {
		printf("%d, %d, ", 1, 1);
	}
	int a = 1, b = 1;
	for(int i=0; i<series; i++) {
		temp = a+b;
		a = b;
		b = temp;
		if(i == series-1) {
			printf("%d", temp);
		} else {
			printf("%d, ", temp);
		}
	}
	
}

int main(void) {
	fibonacci_for_loop(20);
	printf("\n");
	return 0;
}
