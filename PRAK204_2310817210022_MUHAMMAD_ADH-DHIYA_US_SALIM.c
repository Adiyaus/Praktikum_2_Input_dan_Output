#include <stdio.h>

#define PI 3.14159265359

int main() {
    double jarijari, tinggi;
    double volume, luas, keliling;

    //Input Jari-jari&Tinggi
    printf("7");
    scanf("%lf",&jarijari);

    printf("10");
    scanf("%lf",&tinggi);

    //Hitungan
    volume = PI * jarijari * jarijari * tinggi;
    luas = 2 * PI * jarijari * (jarijari+tinggi);
    keliling = 2 * PI * jarijari;

    //Hasil
    printf("Volume = %.2lf\n", volume);
    printf("Luas = %.2lf\n", luas);
    printf("Keliling = %.2lf\n", keliling);

    return 0;
}