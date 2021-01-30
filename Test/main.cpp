#include<stdio.h>
int fib(int);
bool IsPrime(int n);

int main(void) {
	printf("Hello World!\n");

	for (int i = 0; i < 20; i++) {
		int x = fib(i);
		printf("%i ", x);
		if (IsPrime(x)) {
			printf("Prime!\n");
		}
		else {
			printf("Not Prime\n");
		}
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

bool IsPrime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}