#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdint.h>
#define MAX 10

int main() {
	float polje[MAX] = { 0 };
	int N;
	float maks = 0, min = 500;
	float rezultat = 0;


	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%f", &polje[i]);
	}

	for (int i = 0; i < N; i++) {
		if (polje[i] > maks) {
			maks = polje[i];
		}
		if (polje[i] < min) {
			min = polje[i];
		}

	}

	rezultat = maks - min;

	printf("razlika je: %.1f C", rezultat);

	return 0;
}