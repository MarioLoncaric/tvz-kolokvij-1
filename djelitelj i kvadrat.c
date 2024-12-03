#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdint.h>

int main() {
	int X, N;
	int i = 0;

	scanf("%d %d", &X, &N);

	for (i = N; i <= X; i++) {
		if ((X % i == 0) && (sqrt(i) * sqrt(i) == i)) {
			printf("%d,", i);
		}
	}
	printf("\b");

	return 0;
}
