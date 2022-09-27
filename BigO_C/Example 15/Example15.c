#include <stdio.h>
//not finished

int fib (int n, int memo[]) {
	if (n <= 0) return 0;
	else if (n == 1) return 1;
	else if (memo[n] > 0) return memo[n];
	
	memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
	return memo[n];
}

void allFib (int n) {
	int memo[n + 1];
	int i;
	
	for (i = 0; i <= n; i++) {
		printf("%d: %d\n", i, fib(i, memo));
	}
}

int main() {
	int n;
	allFib(10);
}
