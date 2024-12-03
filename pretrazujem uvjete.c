#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


int main(){
	int suma = 0, N;
	int niz[500] = { 0 };
	double prosjek = 0;

	
	do {
		scanf("%d", &N);
	} while (N < 10 || N > 997);

	int d = 0;
	int i = 0;
	for (i = N; i <= 1000; i++) {
		if (i % 2 == 0 && i % 6 != 0 && i % 17 != 0) {
			niz[d] = i;
			d++;
		}
	}

	for (i = 0; i <= d; i++) {
		suma += niz[i];
	}

	prosjek = (double)suma / d;

	printf("Srednja vrijednos je %.2lf", prosjek);
	return 0;
}