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
	int crveni[MAX] = { 0 }, crvena_suma = 0, crveni_par = 0, prvi_par = 0;
	int plavi[MAX] = { 0 }, plava_suma = 0, plavi_par = 0, drugi_par = 0;
	int brojac = 0;

	for (int i = 0; i < MAX; i++) {
		scanf("%d %d", &crveni_par, &plavi_par);
		if (crveni_par + plavi_par < 162) {
			printf("krivi unos\n");
			scanf("%d %d", &crveni_par, &plavi_par);
		}
		brojac++;
		crveni[i] = crveni_par;
		plavi[i] = plavi_par;

		crvena_suma += crveni[i];
		plava_suma += plavi[i];

		if (crvena_suma > 1001) {
			 prvi_par = 1;
			 break;
		}
		if (plava_suma > 1001) {
			drugi_par = 1;
			break;
		}
	}

	
	int tmp_crvena = 0;
		while(1){
			int broj_izmjena_crveni = 0;
			for (int i = 0; i < brojac - 1; i++) {
				if (crveni[i] > crveni[i + 1]) {
					tmp_crvena = crveni[i];
					crveni[i] = crveni[i + 1];
					crveni[i + 1] = tmp_crvena;
					broj_izmjena_crveni++;
				}
			}
			if (broj_izmjena_crveni == 0){
			break;
			}
		}

	
	int tmp_plava = 0;
	while (1) {
		int broj_izmjena_plavi = 0;
		for (int i = 0; i < brojac - 1; i++) {
			if (plavi[i] > plavi[i + 1]) {
				tmp_plava = plavi[i];
				plavi[i] = plavi[i + 1];
				plavi[i + 1] = tmp_plava;
				broj_izmjena_plavi++;
			}
		}
		if (broj_izmjena_plavi == 0) {
			break;
		}
		
	}

	for (int i = 0; i < brojac; i++) {
		printf("\t%d", crveni[i]);
	}
	printf("\n");
	for (int i = 0; i < brojac; i++) {
		printf("\t%d", plavi[i]);
	}
	printf("\n");
	if (prvi_par) {
		printf("Pobjednik je 1. par");
	}
	else if (drugi_par) {
		printf("Pobjednik je 2. par");
	}
	else if (crvena_suma > plava_suma) {
		printf("Pobjednik je 1. par");
	}
	else if (crvena_suma < plava_suma) {
		printf("Pobjednik je 2. par");
	}


	return 0;
}
