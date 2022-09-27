#include <stdio.h>
//0 (log n) runtime.

int powersOf2 (int n) {
	if (n < 1) {
		return 0;
	} else if (n == 1) {
		printf("1\n");
		return 1;
	} else {
		int prev = powersOf2 (n / 2);
		int curr = prev * 2;
		printf("%d\n", curr);
		return curr;
	}
}

int main() {
	int n = 20;
	powersOf2(n);
}

