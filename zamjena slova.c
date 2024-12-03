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
	int red, stupac, k;
	char x, y;
	char matrica[MAX][MAX] = { 0 };

	scanf("%d %d", &red, &stupac);

	for (int i = 0; i < red; i++){
		for (int j = 0; j < stupac; j++){
			scanf(" %c", &matrica[i][j]);
		}
	}

	scanf("%d", &k);
	
	for (int d = 0; d < k; d++) {
		scanf(" %c %c", &x, &y);
		for (int i = 0; i < red; i++) {
			for (int j = 0; j < stupac; j++) {
				if (matrica[i][j] == x) {
					matrica[i][j] = y;
				}
			}
		}
	}


	return 0;
}
