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
	int red, stupac;
	int matrica[MAX][MAX] = { 0 };

	//ucitavanje reda i stupca
	do {
		scanf("%d\n", &red);
	} while (red < 0);
	do {
		scanf("%d\n", &stupac);
	} while (stupac < 0);

	//ucitavanje matrice
	for (int i = 0; i < red; i++){
		for (int j = 0; j < stupac; j++){
			scanf("%d", &matrica[i][j]);
		}
	}

	//prebacivanje brojeva
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			if (i % 2 == 0) {
				if (matrica[i][j] >= 0) {
					matrica[i][j] = 0;
				}
			}
			if (i % 2 == 1) {
				if (matrica[i][j] >= 0) {
					matrica[i][j] = 1;
				}
			}
		}
	}

	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			printf("%3d", matrica[i][j]);
		}
		printf("\n");	
	}


	return 0;
}