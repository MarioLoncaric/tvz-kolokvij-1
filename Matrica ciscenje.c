#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
	int red, stupac, brojac;
	char matrica[MAX][MAX] = { 0 };

	do {
		scanf(" %d %d", &red, &stupac);
	} while (red > 10 || stupac > 10);

	scanf(" %d", &brojac);

	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			scanf(" %c", &matrica[i][j]);
		}
	}

	for (int d = 0; d <= brojac; d++) {

		for (int i = 0; i < red; i++) {
			int broj_tocaka = 0;
			for (int j = 0; j < stupac; j++) {
				
				if (matrica[i][j] == '.') {
					broj_tocaka++;
				}
			}
			if (broj_tocaka == 1) {
				for (int j = 0; j < stupac; j++) {
					matrica[i][j] = '*';
				}
			}
		}
		for (int j = 0; j < stupac; j++) {
			int broj_tocaka = 0;
			for (int i = 0; i < red; i++) {
				if (matrica[i][j] == '.') {
					broj_tocaka++;
				}
			}
			if (broj_tocaka == 1) {
				for (int i = 0; i < red; i++) {
					matrica[i][j] = '*';
				}
			}
		}
	}

	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			printf("%c", matrica[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
