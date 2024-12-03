#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define MAX 7
#define SUPERMAX 25

int main() {
    int loto[MAX] = { 0 };         // Predefined lottery numbers
    int brojevi[SUPERMAX] = { 0 }; // User input numbers
    int pokusaj = 0;               // Number of attempts
    int pogodci[MAX] = { 0 };      // Matching numbers
    int brojac = 0;                // Number of matches

    // Input predefined lottery numbers
    
    for (int i = 0; i < MAX; i++) {
        scanf("%d", &loto[i]);
    }

    // Input number of attempts
    
    scanf("%d", &pokusaj);
    while (pokusaj < 7 || pokusaj > 10) {
        printf("nije dobar broj");
        scanf("%d", &pokusaj);
    }

    // Input user numbers
    
    for (int i = 0; i < pokusaj; i++) {
        scanf("%d", &brojevi[i]);
    }

    // Compare and find matches
    for (int i = 0; i < pokusaj; i++) {
        for (int j = 0; j < MAX; j++) {
            if (brojevi[i] == loto[j]) {
                pogodci[brojac] = brojevi[i];
                brojac++;
                break;
            }
        }
    }

    // Output results
    printf("Broj pogodaka: %d\n", brojac);
    if (brojac > 0) {
        printf("Pogodci: ");
        for (int i = 0; i < brojac; i++) {
            printf("%d ", pogodci[i]);
        }
        printf("\n");
    }
    else {
        printf("Nema pogodaka.\n");
    }

    return 0;
}
