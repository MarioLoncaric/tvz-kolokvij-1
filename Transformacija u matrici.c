#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdint.h>
#define MAX 25


int main() {
	int red, stupac, broj_iteracija;
	int matrica[MAX][MAX] = { 0 };
	int max = 0, min = 1000, znamenka = 0;

	scanf("%d %d %d", &red, &stupac, &broj_iteracija);

	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			scanf("%d", &matrica[i][j]);
		}
	}

	int orginalan = 0;
	int zbroj_znamenaka = 0;
	for (int z = 0; z < broj_iteracija; z++) {
		for (int i = 0; i < red; i++) {
			for (int j = 0; j < stupac; j++) {
				orginalan = matrica[i][j];
				zbroj_znamenaka = 0;
				while (orginalan > 0) {
					znamenka = orginalan % 10;
					orginalan /= 10;
					zbroj_znamenaka += znamenka;
				}
				matrica[i][j] = zbroj_znamenaka;
			}
		}
	}
	int koordinata_x_max = 0;
	int koordinata_y_max = 0;
	int koordinata_x_min = 0;
	int koordinata_y_min = 0;
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			if (matrica[i][j] > max) {
				max = matrica[i][j];
				koordinata_x_max = i;
				koordinata_y_max = j;
			}
			
			if (matrica[i][j] < min) {
				min = matrica[i][j];
				koordinata_x_min = i;
				koordinata_y_min = j;
			}
		}
	}

	printf("Najveci broj je %d, a nalazi se na poziciji[%d, %d]\n", max, koordinata_x_max+1, koordinata_y_max+1);
	printf("Najmanji broj je %d, a nalazi se na poziciji[%d, %d]", min, koordinata_x_min+1, koordinata_y_min+1);

	return 0;
}