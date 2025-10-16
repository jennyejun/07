#include <stdio.h>

void f(void){
	int i;
	for (i = 0; i < 10; i++) {
		printf("#");
	}
}

int main(void) {
	int j;
	for(j = 0; j < 5; j++) {
		f();
	}
	return 0;
	}