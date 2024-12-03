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
	int unos, original = 0, maks = 0, min = 500, razlika = 0, znamenka = 0;
	int matrica[MAX] = { 0 }, brojac = 0;
	int inverz_matrica[MAX] = { 0 };
	int rezultat_matrica[MAX] = { 0 };
	scanf("%d", &unos);

	
	original = unos;
	for (int i = 0; i < MAX; i++) {
		znamenka = original % 10;
		original = original / 10;
		matrica[i] = znamenka;
		if (matrica[i] > 0) {
			brojac++;
		}
	}

	int d = 0;
	for (int i = brojac - 1; i >= 0; i--) {
		inverz_matrica[d] = matrica[i];
		d++;

	}

	int z = 0;
	int novi_brojac = 0;
	for (int i = 0; i < brojac; i++) {
		if (inverz_matrica[i + 1] > 0) {
			rezultat_matrica[z] = inverz_matrica[i] * 10 + inverz_matrica[i + 1];
		}
		if (inverz_matrica[i + 1] == 0) {
			rezultat_matrica[z] = inverz_matrica[i];
		}
		z++;
		i++;
		novi_brojac++;
	}

	for (int i = 0; i < novi_brojac; i++) {
		if (rezultat_matrica[i] > maks)
			maks = rezultat_matrica[i];
		if (rezultat_matrica[i] < min)
			min = rezultat_matrica[i];
	}

	razlika = maks - min;

	printf("%d", razlika);

	return 0;
}
