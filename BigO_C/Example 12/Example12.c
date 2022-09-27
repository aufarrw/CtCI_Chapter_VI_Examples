#include <stdio.h>
#include <string.h>
// O (n2 * n!) runtime. //not finished.

void permutation (char str[], char prefix[]) {
	int i;
	
	if (strlen(str) == 0) {
		printf("%s\n", prefix);
	} else {
		for (i = 0; i < strlen(str); i++) {
			char rem[] = strstr(0, i) + strstr(i + 1);
			permutation(rem, prefix + str.at(i));
		}
	}
}

int main() {
	char str[]= "Lucy";
	char prefix[] = "";
	permutation(str, prefix);
	
	return 0;
}
