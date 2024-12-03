#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdint.h>
#define MAX 50

int main() {
	int P = 0;
	int polje[MAX] = { 0 };

	int i = 0;
	do {
		scanf("%d", &P);
		if (P > 9) {
			polje[i] = P;
			i++;
		}
	} while (P > 9);

	
	for (int d = 0; d < i; d++) {
		int najveca_znamenka = 0;
		int znamenka = 0;
		int original = 0;
		original = polje[d];
		while (polje[d] > 0) {

			znamenka = polje[d] % 10;
			polje[d] /= 10;
			if (znamenka > najveca_znamenka) {
				najveca_znamenka = znamenka;
			}
		}

		if (original % najveca_znamenka == 0) {
			printf("%d je djeljiv s %d\n", original, najveca_znamenka);
		}
	}

	return 0;
}
