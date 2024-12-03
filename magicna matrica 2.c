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
	int n, red, stupac;
	int matrica[MAX][MAX] = { 0 };
	int rezultati[MAX] = { 0 };

	int ukupni_zbroj = 0;
	float prosjek = 0;
	

	

	do {
		scanf("%d", &n);
	} while ((n < 2 || n > 20) || (n % 2 != 0));

	red = n;
	stupac = n;

	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			scanf("%d", &matrica[i][j]);
		}
	}

	red = n;
	stupac = n;
	int dijelovi = n / 2;
	int r, c;
	int brojac = 0;
	int brojac_prosjek = 0;
	int maks = 0;
	int min = 1000;

	for(int i = 0; i < red; i += dijelovi){
		for (int j = 0; j < stupac; j += dijelovi) {
			for (int r = i; r < i + dijelovi; r++) {
				for (int c = j; c < j + dijelovi; c++) {
					if (brojac == 0) {
						ukupni_zbroj += matrica[r][c];
						
					}
					if (brojac == 1) {
						prosjek += matrica[r][c];
						brojac_prosjek++;
						

					}
					if (brojac == 2) {
						if (matrica[r][c] > maks) {
							maks = matrica[r][c];
						}
						
					}
					if (brojac == 3) {
						if (matrica[r][c] < min) {
							min = matrica[r][c];
						}

					}
				}
				
			}
			brojac++;
		}
	}

	prosjek = prosjek / brojac_prosjek;

	printf("Ukupni zbroj: %d\n", ukupni_zbroj);
	printf("Prosjek: %.2f\n", prosjek);
	printf("Maksimum: %d\n", maks);
	printf("Minimum: %d\n", min);



	return 0;
}