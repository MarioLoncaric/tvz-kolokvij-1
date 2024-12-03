#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
PRVI ZADATAK KOLOKVIJ
Zadatak: unos x y a b, ispisi brojeve u intervalu[x,y) koji su dijeljivi s a ili b ali ne oba istovremeno
*/
	int x, y, a, b;
	int i = 0;
	
	scanf("%d %d", &x, &y);
	scanf("%d %d", &a, &b);

	for (i = x; i < y; i++) {
		if ((i % a == 0 || i % b == 0) && !(i % (a + b) == 0)) {
			printf("%d\n", i);
		}
	}
		

	return 0;
}