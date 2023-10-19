#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, tinggi, alas, keliling, luas;

    //input
    printf("40");
    scanf("%lf", &A);
    printf("41");
    scanf("%lf", &B);

    //Hitung sisi C
    C = sqrt(pow(A, 2) + pow(B, 2));

    //Hitung alas tinggi
    tinggi = A;
    alas = C;

    //Keliling
    keliling = A + B + C;

    //Luas
    luas = (A * B) / 2;

    //Output
    printf("Alas = %.2lf cm\n", alas);
    printf("Tinggi = %.2lf cm\n", tinggi);
    printf("Keliling = %.2lf cm\n", keliling);
    printf("Luas = %.2lf cm^2\n", luas);

    return 0;
}