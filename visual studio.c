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
	int rezultati[MAX][MAX] = {0};
	int tablica[5][2] = {0};

	int suma = 0;
	int broj_tima = 0;
	int remi1 = 0, remi2 = 0;
	int prekid = 1;
	for (int i = 0; i < MAX; i++){
		int suma = 0;
		broj_tima = 0;
		remi1 = 0;
		remi2 = 0;
		if (!prekid) {
			break;
		}
		for (int j = 0; j < 4; j++) {
			scanf("%d %d %d %d", &rezultati[i][j], &rezultati[i][j+1], &rezultati[i][j+2], &rezultati[i][j+3]);
			if (rezultati[i][2] > rezultati[i][3]) {
				broj_tima = rezultati[i][0];
				tablica[broj_tima - 1][1] += 3;
			}
			if (rezultati[i][2] < rezultati[i][3]) {
				broj_tima = rezultati[i][1];
				tablica[broj_tima - 1][1] += 3;
			}
			if (rezultati[i][2] == rezultati[i][3] && rezultati[i][0] != 0) {
				remi1 = rezultati[i][0];
				remi2 = rezultati[i][1];
				tablica[remi1 - 1][1] += 1;
				tablica[remi2 - 1][1] += 1;
			}


			suma += rezultati[i][0] + rezultati[i][1] + rezultati[i][3] + rezultati[i][4];
			if (rezultati[i][0] == rezultati[i][1] || suma == 0) {
				prekid = 0;
				break;

			}
			j = j + 4;
		}

	}




	return 0;
}