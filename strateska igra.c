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
	int red, stupac, n;
	char matrica[MAX][MAX] = { 0 };
	int bodovi_crni = 0, bodovi_bijeli = 0;

	scanf("%d", &n);
	red = n;
	stupac = n;

	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			scanf(" %c", &matrica[i][j]);
		}
	}
	// određujemo koordinate zmaja i viteza
	int zmaj_red = 0, zmaj_stupac = 0;
	int vitez_red = 0, vitez_stupac = 0;
	int kraj = 0;
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			if (matrica[i][j] == 'Z') {
				zmaj_red = i;
				zmaj_stupac = j;
				kraj++;
			}
			if (matrica[i][j] == 'V') {
				vitez_red = i;
				vitez_stupac = j;
				kraj++;
				
			}

		}
		if (kraj == 2) {
			break;
		}
	}

	//dodajemo točke u redak i stupac gdje je zmaj
	
	for (int j = 0; j < stupac; j++) {
			matrica[zmaj_red][j] = '.';
	}
	
	for (int i = 0; i < red; i++) {
			matrica[i][zmaj_stupac] = '.';
	}


	
	for (int j = 0; j < stupac; j++) {
		if (matrica[vitez_red][j] == 'C') {
				bodovi_crni++;
		}
		if (matrica[vitez_red][j] == 'B') {
				bodovi_bijeli++;
		}
			
	}
	
	for (int i = 0; i < red; i++) {
		if (matrica[i][vitez_stupac] == 'C') {
			bodovi_crni++;
		}	
		if (matrica[i][vitez_stupac] == 'B') {
				bodovi_bijeli++;
		}	
	}

	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			if (matrica[i][j] == 'C') {
				bodovi_crni++;
			}
			if (matrica[i][j] == 'B') {
				bodovi_bijeli++;
			}

		}
	}

	if (bodovi_crni > bodovi_bijeli) {
		printf("pobjednik: C\n");
		printf("bodovi: %d", bodovi_crni);
	}
	else if (bodovi_crni < bodovi_bijeli) {
		printf("pobjednik: B\n");
		printf("bodovi: %d", bodovi_bijeli);
	}
	else {
		printf("Nema pobjednika");
	}


	

	return 0;
}