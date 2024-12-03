#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdint.h>
#define MAX 20

int main() {
	int unos = 0;
	int niz_faktora[MAX] = { 0 };
	int brojac = 0, d = 0;
	int original = 0;
	scanf("%d", &unos);
	original = unos;

	
		for (int j = 2; j <= unos; j++) {
			if (unos % j == 0) {
				niz_faktora[d] = j;
				unos = unos / j;
				brojac++;
				d++;
				j = 1;
			}
		}
	

	if (brojac == 1) {
		printf("Broje je prost");
	}

	else if (brojac > 1) {
		printf("%d = ", original);
		for (int i = 0; i < brojac; i++) {
			printf("%d * ", niz_faktora[i]);
		}
		printf("\b");
		printf("\b");
	}
		



	return 0;
}