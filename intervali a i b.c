#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdint.h>

int main() {
	int A, B;

	scanf("%d %d", &A, &B);

	while (A < 9 || A > B || B < A || B > 1000000) {
		printf("Krivi unos!\n");
		scanf("%d %d", &A, &B);
	}

	int i = 0, original = 0, broj = 0, usporedba = 0;
	int prva_znamenka = 0, zbroj_znamenki = 0, druga_znamenka = 0;

	for (i = A; i <= B; i++) {
		broj = i;
		original = broj;
		usporedba = broj;
		
		while (broj >= 1) {
			prva_znamenka = broj % 10;
			broj /= 10;
		}
		
		druga_znamenka = original % 10;

		zbroj_znamenki = druga_znamenka + prva_znamenka;

		if (usporedba % zbroj_znamenki == 0) {
			printf("%d ", original);
		}

	}


	return 0;
}