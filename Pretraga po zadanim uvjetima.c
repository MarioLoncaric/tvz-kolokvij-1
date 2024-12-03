#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdint.h>

int main() {
	int unos, brojac = 0;
	int prijasnji_broj = 0, suma;
	int original = 0, brojac_sume = 0;

	while (1) {
		scanf("%d", &unos);
		original = unos;
		suma = 0;
		
		if (unos == 0) {
			break;
		}
		else if (prijasnji_broj * unos == unos * unos) {
			while (original > 0) {
				suma += original % 10;
				original = original / 10;
			}
			if (suma < 10) {
				brojac_sume++;
				brojac++;
				}
			break;
		}
		if (unos < 0) {
			continue;
		}
		else if (unos > 0) {
			while (original > 0) {
				suma += original % 10;
				original = original / 10;
			}
		}

		if (suma < 10) {
			brojac_sume++;
		}
		prijasnji_broj = unos;

		brojac++;
	}
	printf("uneseno je %d ispravnih unosa, od toga %d ciji je zbroj znamenki jednoznamenkast", brojac, brojac_sume);


	return 0;
}