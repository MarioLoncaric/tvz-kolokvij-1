#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int A, B;

    // Unos brojeva A i B
    printf("Unesite dva peteroznamenkasta broja A i B (B >= A + 100):\n");
    scanf("%d %d", &A, &B);

    // Provjera ispravnosti unosa
    if (A < 10000 || A > 99999 || B < 10000 || B > 99999 || B - A < 100) {
        printf("Neispravan unos!\n");
        return 1;
    }

    int prviBroj = -1, zadnjiBroj = -1, ukupanBroj = 0;

    // Iteracija kroz sve brojeve u intervalu [A, B]
    for (int i = A; i <= B; i++) {
        int broj = i;
        int obrnuto = 0, original = broj;

        // Provjera palindroma
        while (broj > 0) {
            obrnuto = obrnuto * 10 + broj % 10;
            broj /= 10;
        }

        if (original == obrnuto) {
            // Izdvajanje prve i druge znamenke
            int prvaZnamenka = original / 10000;        // Prva znamenka
            int drugaZnamenka = (original / 1000) % 10; // Druga znamenka

            // Provjera uvjeta za prvu i drugu znamenku
            if (prvaZnamenka != drugaZnamenka && prvaZnamenka != 0 && drugaZnamenka != 0) {
                if (prviBroj == -1) {
                    prviBroj = original; // Prvi broj koji zadovoljava uvjete
                }
                zadnjiBroj = original;   // Ažuriraj zadnji broj
                ukupanBroj++;            // Povećaj brojač
            }
        }
    }

    // Ispis rezultata
    if (ukupanBroj == 0) {
        printf("Nema takvog broja\n");
    }
    else if (ukupanBroj == 1) {
        printf("%d\n", prviBroj);
    }
    else {
        printf("%d %d %d\n", prviBroj, zadnjiBroj, ukupanBroj);
    }

    return 0;
}
