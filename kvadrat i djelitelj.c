/*PRVI ZADATAK KOLOKVIJ
Zadatak: Upises 2 broja(X i N), ispisuje N djelitelja broja X koji su ujedno i kvadrat nekog broja
Uvjet: Brojevi moraju biti odvojeni zarezom, ako je samo jedan broj onda ne smije biti zarez.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int X, N;
	int i = 0;
	scanf("%d, %d", &X, &N);

	printf("Broj %d\n", X);

	for (i = 1; i <= X; i++) {
		if (X % i == 0 && (int)sqrt(i) * (int)sqrt(i) == i) {
			printf(" %d,", i);

		}
		
	}
	printf("\b ");


	return 0;
}
