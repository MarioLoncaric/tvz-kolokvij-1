#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdint.h>

int main() {
	int a, b, zbroj_znamenki_a = 0, i = 0, zbroj_znamenki_b = 0;
	int zbroj_znamenki = 0;

	do {
		scanf("%d", &a);
	} while (a < 10 || a > 99);

	do {
		scanf("%d", &b);
	} while ((b < 9 || b > 99) || (a - b < 20));


	int temp_a = a;
	while (temp_a > 0) {
		zbroj_znamenki_a += temp_a % 10;
		temp_a = temp_a / 10;
	}

	int temp_b = b;
	while (temp_b > 0) {
		zbroj_znamenki_b += temp_b % 10;
		temp_b = temp_b / 10;
	}

	zbroj_znamenki = zbroj_znamenki_a + zbroj_znamenki_b;
	printf("zbroj zanemenki je: %d\n", zbroj_znamenki);

	for (i = b; i < a; i++) {
		if (i % zbroj_znamenki == 0) {
			printf("%d ", i);
		}
	}
	return 0;
}