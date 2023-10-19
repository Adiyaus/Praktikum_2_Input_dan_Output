#include <stdio.h>

int main() {
    double a, b, i, j, x, y;
    a = 20;
    b = 3;
    i = 4;
    j = 12;
    x = 5;
    y = 9;
    
    // Membaca input dari pengguna
    printf("20");
    scanf("%lf", &a);
    printf("3");
    scanf("%lf", &b);
    printf("4");
    scanf("%lf", &i);
    printf("12");
    scanf("%lf", &j);
    printf("5");
    scanf("%lf", &x);
    printf("9");
    scanf("%lf", &y);
    
    // Menghitung hasil sesuai rumus
    double hasil = (a - b) * (i / j) - x + y;
    
    // Menampilkan hasil dengan 3 angka di belakang koma
    printf("Hasil: %.3lf\n", hasil);
    
    return 0;
}
