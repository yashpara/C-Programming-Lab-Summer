#include <stdio.h>
 
int main() {
	// read 10 integers;
	int n = 10;
	int A[n + 1];   // use array to store these integers.
	for (int i = 0; i < n; ++i) {
		scanf("%d", &A[i]);
	}
	int count = 3;
	for (int i = 0; i < n; ++i) {
		printf("%d", A[i]);
		if ((i + 1)%3 == 0) {//checking if 3 elements printed
			printf("\n");
		} else {
			if (i != n - 1)
				printf(",");
		}
	}
	printf("\n");
	return 0;
}
