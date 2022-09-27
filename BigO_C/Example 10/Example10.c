#include <stdio.h>
//0 (sqrt n) runtime.

int main() {
	int n, x;
	
	printf("Please input a number: ");
	scanf("%d", &n);
	
	for (x = 2; x * x <= n; x++) {
		if (n % x == 0) {
			printf("%d is not a prime number.", n);
			return true;
		}
	}
			printf("%d is a prime number.", n);
	return false;
}
