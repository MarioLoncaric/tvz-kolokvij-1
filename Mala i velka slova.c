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

	char niz[MAX] = { 0 };
	int brojac = 0;
	//char pregled = 'V'

	for (int i = 0; i < MAX; i++) {
		scanf("%c", &niz[i]);
		
		if (niz[i] == '\n') {
			break;
		}
		brojac++;
	}

	if (brojac == 1) {
		niz[0] = niz[0] - ' ';
		printf("Rezultat: %c", niz[0]);
		return 0;
	}

	int brojac_spejsa = 0;

	for (int i = 0; i < brojac; i++) {
		if (niz[i] == ' ') {
			brojac_spejsa++;
		}
	}

	
	if (brojac_spejsa == 0) {
		printf("Rezultat je: ");
		for (int i = 0; i < 1; i++) {
			niz[0] = niz[0] - ' ';
			niz[brojac-1] = niz[brojac-1] - ' ';
		}
		for (int i = 0; i < brojac; i++) {
			printf("%c", niz[i]);
		}
		return 0;
	}

	
	else {
		int istina = 1;
		for (int i = 0; i < brojac; i++) {
			
			if (niz[i] == ' ') {
				niz[i + 1] = niz[i + 1] - ' ';
				niz[i - 1] = niz[i - 1] - ' ';
			}
			if (niz[1] != ' ' && istina == 1) {
				niz[0] = niz[0] - ' ';
				istina = 0;
			}
		}
	}

	printf("Rezultat: ");
	for (int i = 0; i < brojac; i++) {
		printf("%c", niz[i]);
	}


	return 0;
}
