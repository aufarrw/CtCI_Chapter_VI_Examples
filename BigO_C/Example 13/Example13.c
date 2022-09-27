#include <stdio.h>
//0 (2^N) runtime.

int fib(int n) {
	if (n <= 0) return 0;
	else if (n == 1) return 1;
	return fib(n - 1) + fib(n - 2);
}

int main() {
	int n;
	
	printf("Please input a number: ");
	scanf("%d", &n);
	
	printf("Fibonacci value for %d is %d", n, fib(n));
	
	return 0;
}
