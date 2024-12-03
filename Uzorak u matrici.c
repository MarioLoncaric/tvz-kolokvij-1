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
	int red, stupac;
	char matrica[MAX][MAX] = { 0 };
	char uzorak[MAX] = { 0 };
	int velicina_uzorka = 0, broj_ponavljanja = 0;
	int brojac = 0;

	scanf("%d %d", &red, &stupac);

	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			scanf(" %c", &matrica[i][j]);
		}
	}

	scanf("%d", &velicina_uzorka);
	for (int i = 0; i < velicina_uzorka; i++) {
		scanf(" %c", &uzorak[i]);
	}

	for (int i = 0; i < red; i++) { // Prolazimo kroz redove matrice
		for (int j = 0; j <= stupac - velicina_uzorka; j++) { // Provjera horizontalno
			int k = 0;
			for (k = 0; k < velicina_uzorka; k++) {
				if (matrica[i][j + k] != uzorak[k]) {
					break; // Ako neki znak ne odgovara, izađi iz petlje
				}
			}
			if (k == velicina_uzorka) { // Ako su svi znakovi odgovarali
				brojac++;
			}
		}
	}

	printf("broj ponavljanja je: %d", brojac);

	return 0;
}
