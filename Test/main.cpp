#include<stdio.h>
int fib(int);

int main(void) {
	printf("Hello World!\n");

	for (int i = 0; i < 20; i++) {
		printf("%i\n", fib(i));
	}

	return 0;
}

int fib(int n) {
	if (n < 0) {
		return 0;
	}
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}