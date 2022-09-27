#include <stdio.h>
//0 (N2) runtime.

int main() {
	int array[] = {1, 2, 3, 4, 5};
	int len = sizeof(array)/sizeof(array[0]);
	int i, j;
	
	for (i = 0; i < len; i++) {
		for (j = 0; j < len; j++) {
			printf("%d, %d\n", array[i], array[j]);
		}
	}
	return 0;
}

