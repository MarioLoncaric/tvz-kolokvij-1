#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 12

int main() {
    int red, stupac;
    char matrica[MAX][MAX] = { 0 };
    char rezultat[MAX][MAX] = { 0 }; // Matrica za ispis rezultata

    // Unos dimenzija
    do {
        scanf("%d %d", &red, &stupac);
    } while (red < 1 || stupac < 1);

    // Unos elemenata matrice
    for (int i = 0; i < red; i++) {
        for (int j = 0; j < stupac; j++) {
            scanf(" %c", &matrica[i][j]);
            rezultat[i][j] = matrica[i][j]; // Kopiramo matricu u rezultat
        }
    }

    // Provjera susjeda
    for (int i = 0; i < red; i++) {
        for (int j = 0; j < stupac; j++) {
            int broj = matrica[i][j] - '0';
            int desetice = broj / 10, jedinice = broj % 10;
            int ima_zajednicku = 0;

            // Susjedi: gore-lijevo, gore-desno, dolje-lijevo, dolje-desno
            int susjedi[4][2] = {
                {i - 1, j - 1}, {i - 1, j + 1},
                {i + 1, j - 1}, {i + 1, j + 1}
            };

            // Provjera zajedničkih znamenki sa susjedima
            for (int k = 0; k < 4; k++) {
                int x = susjedi[k][0];
                int y = susjedi[k][1];
                if (x >= 0 && x < red && y >= 0 && y < stupac) {
                    int susjed = matrica[x][y] - '0';
                    int susjed_desetice = susjed / 10, susjed_jedinice = susjed % 10;

                    if (desetice == susjed_desetice || desetice == susjed_jedinice ||
                        jedinice == susjed_desetice || jedinice == susjed_jedinice) {
                        ima_zajednicku = 1;
                        break;
                    }
                }
            }

            // Ako nema zajedničkih znamenki, zamijeni sa "**"
            if (!ima_zajednicku) {
                rezultat[i][j] = '*';
            }
        }
    }

    // Ispis rezultata
    for (int i = 0; i < red; i++) {
        for (int j = 0; j < stupac; j++) {
            if (rezultat[i][j] == '*') {
                printf("** ");
            }
            else {
                printf("%c ", rezultat[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
