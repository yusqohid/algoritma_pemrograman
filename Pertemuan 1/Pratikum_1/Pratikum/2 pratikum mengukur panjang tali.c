/*
Nama File       : pratikum1_no2.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 07/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman - 2.	Program untuk Menghitung tinggi layangan berdasarkan sudut tali (elevasi) dan panjang tali terulur
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//konstanta PHI
#define PHI 3.14

int main(){

    //rumus mencari tinggi segitiga siku2
    //sin a = t/m
    //t = (sin a)*m
    //t adalah tinggi
    //m adalah panjang tali
    //rumus mengkonversi sudut derajat ke radian
    //1 derajat = PHI/180 radian
    //30 derajat = 30 * PHI/180 radian
    //a derajat = a * PHI/180 radian
    //sin a = sin (a * PHI/180) radian
    //sehingga t = (sin (a*PHI/180)) * m
    // atau t = (sin(PHI*a/180)) * m

    double tali, sudut, tinggi, radian;

    printf("Program untuk menghitung tinggi layangan\n\n");
    printf("-------------------------------------------\n\n");
    printf("Ketikkan panjang tali dalam meter: ");
    scanf("%lf", &tali); fflush(stdin);
    printf("Ketikkan sudut tali dalam derajat: ");
    scanf("%lf", &sudut); fflush(stdin);

    //hitung atau konversikan sudut ke radian
    radian = sudut/180 * PHI;

    //hitung tinggi layangan
    tinggi = (sin(radian)) * tali;
    printf("Panjang tali terulur        : %0.2lf meter\n", tali);
    printf("Sudut tali dengan daratan   : %0.2lf derajat\n", sudut);
    printf("Tinggi layangan dari daratan: %0.2lf meter\n", tinggi);

    return 0;
}
