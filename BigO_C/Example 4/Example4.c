#include <stdio.h>
//0 (ab) runtime.

int main() {
	int arrayA[] = {1, 2, 3, 4, 5};
	int arrayB[] = {1, 2, 3, 4, 5};
	int lenA = sizeof(arrayA)/sizeof(arrayA[0]);
	int lenB = sizeof(arrayB)/sizeof(arrayB[0]);
	int i, j;
	
	for (i = 0; i < lenA; i++) {
		for (j = 0; j < lenB; j++) {
			if (arrayA[i] < arrayB[j]) {
				printf("%d, %d\n", arrayA[i], arrayB[j]);
			}
		}
	}
	return 0;
}
