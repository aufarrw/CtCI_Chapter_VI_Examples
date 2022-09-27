#include <iostream>
using namespace std;

void foo(int array[], int size){
    int sum = 0;
	int product = 1;
	
	for (int i = 0; i < size; i++) {
		sum += array[i];
	}
	
	for (int i = 0; i < size; i++) {
		product *= array [i];
	}
    cout << sum << ", " << product;
}

void pairs(int array[], int size){
    for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << array[i] << ", " << array[j] << endl;
		}
	}
}

void unordPairs(int array[], int size){
    for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			std::cout << array[i] << ", " << array[j] << std::endl;
		}
	}
}

void unordPairs2arr(int arrayA[], int arrayB[], int sizeA, int sizeB){
    for (int i = 0; i < sizeA; i++) {
            for (int j = 0; j < sizeB; j++) {
                if (arrayA[i] < arrayB[j]) {
                    cout << arrayA[i] << ", " << arrayB[j] << endl;
                }
            }
        }
}

void unordPairs2arrmul(int arrayA[], int arrayB[], int sizeA, int sizeB){
    for (int i = 0; i < sizeA; i++) {
		for (int j = 0; j < sizeB; j++) {
			for (int k = 0; k < 10; k++) {
				cout << arrayA[i] << ", " << arrayB[j] << endl;
			}
		}
	}
}

void reverse(int array[], int size){
        for (int i = size - 1; i >= 0; i--) {
            cout << array[i] + " ";
        }
    }

void prime(int n){
    for (int x = 2; x * x <= n; x++) {
		if (n % x == 0) {
			cout << n << " is not a prime number.";
			return;
		}
	}
	cout << n << " is a prime number.";
	return;
}

int factorial (int n) {
	long fac = 1;
        for(int i = 1; i <= n; i++){
            fac *= i;
        }
        cout << fac << endl;
}

void permutation (string str, string prefix) {
	if (str.length() == 0) {
		cout << prefix << endl;
	} else {
		for (int i = 0; i < str.length(); i++) {
			string rem = str.substr(0, i) + str.substr(i + 1);
			permutation(rem, prefix + str.at(i));
		}
	}
}

void allpermutation(string str){
    permutation(str, "");
}

int fib(int n) {
	if (n <= 0) return 0;
	else if(n == 1) return 1;
	return fib(n - 1) + fib (n - 2);
}

void allFib(int n) {
	for (int i = 0; i <= n; i++) {
		cout << i << ": " << fib(i) << endl;
	}	
}

int powersOf2 (int n) {
	if (n < 1) {
		return 0;
	} else if (n == 1) {
		cout << "1" << endl;
		return 1;
	} else {
		int prev = powersOf2 (n / 2);
		int curr = prev * 2;
		cout << curr << endl;
		return curr;
	}
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int arrayA[] = {1, 2, 3, 4};
    int arrayB[] = {2, 3, 4, 5};
    int n = 7;
    string world = "WORLD";
    // foo(array, 5);
	// pairs(array, 5);
    // unordPairs(array, 5);
    // unordPairs2arr(arrayA, arrayB, 4, 4);
    // unordPairs2arrmul(arrayA, arrayB, 4, 4);
    // reverse(array, 5);
    // prime(n);
    // factorial(n);
    // allpermutation(world);
    // allFib(n);
    powersOf2(n);
	return 0;
}

