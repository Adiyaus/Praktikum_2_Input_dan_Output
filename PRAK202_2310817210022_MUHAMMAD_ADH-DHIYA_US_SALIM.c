#include <stdio.h>

int main() {
    double nilai_pertama, nilai_kedua, hasil;

    printf("14");
    scanf("%lf", &nilai_pertama);

    printf("20.5");
    scanf("%lf", &nilai_kedua);

    hasil = nilai_pertama + nilai_kedua;

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2lf\"\n", nilai_pertama, nilai_kedua, hasil);

    return 0;
}
