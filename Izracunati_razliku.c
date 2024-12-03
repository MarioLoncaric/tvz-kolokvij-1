#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdint.h>
#define MAX 12

int main() {
	int k = 0, brojevi[MAX] = { 0 }, zbroj = 0;
	int brojac = 0, i = 0;
	double razlika = 0, prosjek = 0;

	scanf(" %d", &k);
	scanf(" %d", &brojevi[0]);

	do {
		i++;
		scanf(" %d", &brojevi[i]);
		
	} while (brojevi[i - 1] < k && brojevi[i] > k || brojevi[i - 1] > k && brojevi[i] < k);
	i++;

	for (int d = 0; d < i-1; d++) {
		zbroj += brojevi[d];
	}

	prosjek = (double)zbroj / ((double)i-1);
	razlika = prosjek - k;

	if (razlika > 0) {
		printf("+%.2lf", razlika);
	}
	else {
		printf("%.2lf", razlika);
	}

	return 0;
}