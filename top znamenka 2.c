// top znamenka 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdint.h>

int main() {
	double decimalni_broj = 0;
	int prirodni_broj = 0;
	int max = 0, min = 1000000;
	int privremeno = 0;

	scanf("%lf", &decimalni_broj);

	prirodni_broj = decimalni_broj * 10000000;
	privremeno = prirodni_broj;
	int brojac = 0;
	int znamenka = 0;


	while (privremeno >= 0) {
		znamenka = privremeno % 10;
		privremeno = privremeno / 10;
		if (znamenka > max) {
			max = znamenka;
		}
		if (znamenka < min) {
			min = privremeno;
		}
		brojac++;
		if (brojac == 7) {
			break;
		}
	}

	int rezultat = 0;
	rezultat = max + min;

	printf("%d + %d = %d", max, min, rezultat);
	return 0;
}
