#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdint.h>


int main() {
    char znak;
    int N;

    // Unos znaka i veličine matrice
    scanf(" %c", &znak);
    scanf("%d", &N);

    printf("\n");

    // Prvi dio: rastući redovi
    for (int i = 1; i <= (N / 2) + 1; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", znak);
        }
        printf("\n");
    }

    // Drugi dio: opadajući redovi
    for (int i = N / 2; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c", znak);
        }
        printf("\n");
    }

    return 0;
}


	