#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdint.h>
#define MAX 15

int main() {
	int a, b, suma = 0, djelitelji = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	while (1) {
		
		if (a <= 9 || a > 99) {
			scanf("%d", &a);
		}
		if (b <= 9 || b > 99) {
			scanf("%d", &b);
		}
		suma = a - b;
		suma = abs(suma);

		if (suma < 20) {
			scanf("%d %d", &a, &b);
			continue;
		}
		if ((a >= 10 && a <= 99) && (b >= 10 && b <= 99)) {
			break;
		}
	}

	int suma_a = 0, suma_b = 0, zbroj_znamenki = 0;
	int original_a = 0, original_b = 0;

	original_a = a;
	original_b = b;

	while (original_a > 0) {
		suma_a += original_a % 10;
		original_a /= 10;
	}

	while (original_b > 0) {
		suma_b += original_b % 10;
		original_b /= 10;
	}
	
	zbroj_znamenki = suma_a + suma_b;

	int i = 0;
	
	printf("%d\n", zbroj_znamenki);
	for (i = a; i <= b; i++) {
		if (i % zbroj_znamenki == 0) {
			printf("%d ", i);
		}
	}



	return 0;
}