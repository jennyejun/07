#include <stdio.h>

int inc(int counter) {
	counter++;
	return counter;
}

int main(void) {
	int i = 10;
	printf("�Լ� ȣ���� i=%d\n", i);
	i = inc(i);
	printf("�Լ� ȣ���� i=%d\n", i);
	
	return 0;
	}