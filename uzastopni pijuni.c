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
	char matrica[MAX][MAX] = {0};

	scanf("%d", &n);
	red = n;
	stupac = n;

	for (int i = 0; i < red; i++) {
		for (int j = 0; j < stupac; j++) {
			scanf(" %c", &matrica[i][j]);
		}
	}

	int brojac_figura = 0;
	int najbolji_red = 0;
	int original = 0;
	int maks_figura = 0;
	int uzastupne_figure = 0;
	for (int i = 0; i < red; i++) {
		brojac_figura = 0;
		maks_figura = 0;
		for (int j = 0; j < stupac; j++) {
			if (matrica[i][j] == 'P') {
				brojac_figura++;
			}
			if (matrica[i][j] == '.') {
				brojac_figura = 0;
			}
			if (brojac_figura > maks_figura) {
				maks_figura = brojac_figura;
			}
			
		}
		if (maks_figura > original) {
			najbolji_red = i;
			uzastupne_figure = maks_figura;
		}
		
		original = maks_figura;
		
	}

	printf("%d. ima %d uzastupnih pijuna", najbolji_red+1, uzastupne_figure);


	return 0;
}