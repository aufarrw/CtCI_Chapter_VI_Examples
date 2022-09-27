#include <stdio.h>
// O (2^N) runtime.

int fib(int n) {
	if (n <= 0) return 0;
	else if(n == 1) return 1;
	return fib(n - 1) + fib (n - 2);
}

void allFib(int n) {
	int i;
	
	for (i = 0; i <= n; i++) {
		printf("%d: %d\n", i, fib(i));
	}	
}

int main() {
	int n;
	allFib(20);
}
