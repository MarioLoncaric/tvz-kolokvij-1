#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdint.h>
#define MAX 30

int main() {
	int n, red = 0, stupac = 0;
	int matrica[MAX][MAX] = { 0 };
	int matrica_tri[3][3] = { 0 };

	scanf("%d", &n);
	while ((n < 3 || n > 21) && (n % 3 != 0)) {
		printf("pogresan unos\n");
		scanf("%d", &n);
	}

	red = n;
	stupac = n;

	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			scanf("%d", &matrica[i][j]);
		}
	}

	int zbroj = 0;
	int z = 0, g = 0;

	int broj_preskoka = n / 3;
	for (int i = 0; i < red; i += broj_preskoka) {
		for (int j = 0; j < stupac; j += broj_preskoka) {
			for (int r = i; r < i + broj_preskoka; r++) {
				for (int c = j; c < j + broj_preskoka; c++) {
					zbroj += matrica[r][c];
				}
			}

			matrica_tri[z][g] = zbroj;
			g++;
			zbroj = 0;
			if (g == 3) {
				g = 0;
				z++;

			}

		}
	}

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				printf("%d\t", matrica_tri[i][j]);
			}
			printf("\n");
		}
	


	return 0;
}
