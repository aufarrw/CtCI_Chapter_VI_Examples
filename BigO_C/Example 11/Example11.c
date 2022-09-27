#include <stdio.h>
//0 (n) runtime.

int factorial (int n) {
	if (n < 0) {
		return -1;
	} else if (n == 0) {
		return 1;
	} else {
		return n * factorial(n - 1);
	}
}

int main() {
	int n;
	
	printf("Please input a number: ");
	scanf("%d", &n);
	
	printf("Factorial: %d", factorial(n)); 
	
	return 0;
}
