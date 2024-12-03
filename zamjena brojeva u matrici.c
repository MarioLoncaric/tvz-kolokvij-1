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
	int red, stupac, n;
	int matrica[MAX][MAX] = { 0 };

	scanf("%d", &n);
	red = n;
	stupac = n;

	
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			scanf("%d", &matrica[i][j]);
		}
	}

	int j = stupac - 1;
	for (int i = 0; i < red; i++) {
		if (i % 2 == 0) {
				matrica[i][j] = 0;
		}
		if (i % 2 == 1) {
				matrica[i][j] = 1;
		}
		j--;
	}

	printf("rezultat:\n");
	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			printf("%3d", matrica[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}