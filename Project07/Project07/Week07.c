#include <stdio.h>

int inc(int counter) {
	counter++;
	return counter;
}

int main(void) {
	int i = 10;
	printf("함수 호출전 i=%d\n", i);
	i = inc(i);
	printf("함수 호출후 i=%d\n", i);
	
	return 0;
	}