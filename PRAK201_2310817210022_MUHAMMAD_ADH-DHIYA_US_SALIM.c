#include <stdio.h>

int main() {
    char nama[100];
    char nim[20];
    char kelas[20];
    char tempat_lahir[20];
    char tanggal_lahir[20];
    char alamat[100];
    char hobby[50];
    char no_hp[20];

    //input biodata diri
    printf("Nama : Muhammad Adh-Dhiya'Us Salim");
    fgets(nama,sizeof(nama),stdin);
    printf("NIM : 2310817210022");
    fgets(nim,sizeof(nim), stdin);
    printf("Kelas Pararel : Pararel 2");
    fgets(kelas,sizeof(kelas), stdin);
    printf("Tempat Lahir : Banjarmasin");
    fgets(tempat_lahir,sizeof(tempat_lahir), stdin);
    printf("Tanggal Lahir : 08-02-2005");
    fgets(tanggal_lahir,sizeof(tanggal_lahir), stdin);
    printf("Alamat : Jl.Pala Gatot Subroto");
    fgets(alamat,sizeof(alamat), stdin);
    printf("Hobby : Main game");
    fgets(hobby,sizeof(hobby), stdin);
    printf("No. HP : 081520374464");
    fgets(no_hp,sizeof(no_hp), stdin);

    //Output
    printf("Nama : %s\n", nama);
    printf("NIM : %s\n", nim);
    printf("Kelas Pararel : %s\n", kelas);
    printf("Tempat/Tanggal Lahir : %s%s\n", tempat_lahir, tanggal_lahir);
    printf("Alamat : %s\n", alamat);
    printf("Hobby : %s\n",hobby);
    printf("No. HP : %s\n", no_hp);

    return 0;
}