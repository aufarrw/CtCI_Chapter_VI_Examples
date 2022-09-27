#include <stdio.h>
// 0 (N) runtime.

int main() {
		int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
		int len = sizeof(array)/sizeof(array[0]);
		int i;
		
		for (i = 0; i < len / 2; i++) {
			int other = len - i - 1;
			int temp = array[i];
			array[i] = array[other];
			array[other] = temp;
			printf("%d, %d\n", array[i], array[other]);
		}
		return 0;
}
