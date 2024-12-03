#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
    int rezultati[MAX][4] = { 0 };
    int bodovi[5] = { 0 }; // Bodovi za timove 1-5
    int brojac_kola = 0;

    // Učitavanje rezultata
    for (int i = 0; i < MAX; i++) {
        int brojac = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &rezultati[i][j]);
            brojac += rezultati[i][j];
        }
        if (brojac == 0 || rezultati[i][0] == rezultati[i][1]) {
            break;
        }
        brojac_kola++;
    }

    // Obrada rezultata
    for (int i = 0; i < brojac_kola; i++) {
        int tim1 = rezultati[i][0] - 1; // Indeks tima 1 (0-bazirano)
        int tim2 = rezultati[i][1] - 1; // Indeks tima 2 (0-bazirano)
        int golovi_tim1 = rezultati[i][2];
        int golovi_tim2 = rezultati[i][3];

        if (golovi_tim1 > golovi_tim2) {
            bodovi[tim1] += 3; // Tim 1 pobjeđuje
        }
        else if (golovi_tim1 < golovi_tim2) {
            bodovi[tim2] += 3; // Tim 2 pobjeđuje
        }
        else {
            bodovi[tim1] += 1; // Neriješeno
            bodovi[tim2] += 1; // Neriješeno
        }
    }

    // Ispis tablice bodova
    printf("Tablica bodova:\n");
    for (int i = 0; i < 5; i++) {
        printf("Tim %d: %d bodova\n", i + 1, bodovi[i]);
    }

    // Pronalazak timova s najviše bodova
    int max_bodovi = 0;
    for (int i = 0; i < 5; i++) {
        if (bodovi[i] > max_bodovi) {
            max_bodovi = bodovi[i];
        }
    }

    printf("Najvise bodova ima tim: ");
    for (int i = 0; i < 5; i++) {
        if (bodovi[i] == max_bodovi) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    return 0;
}
