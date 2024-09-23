/*
Nama File       : tugas1_no8.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 04/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman - 8. Program untuk Menentukan titik koordinat tengah dari suatu garis
*/

#include <stdio.h>

int main() {
    int x1, x2, y1, y2;
    float titikTengahX, titikTengahY;
    
    // Judul dan Menu
    printf("Program untuk Menentukan titik koordinat tengah dari suatu garis \n");
    printf("----------------------------------------------------------------- \n\n\n");
    
    // Input
    printf("Masukkan koordinat titik pertama (x1) \n");
    scanf("%d", &x1);
    printf("Masukkan koordinat titik pertama (y1) \n");
    scanf("%d", &y1);
    printf("Masukkan koordinat titik kedua (x2) \n");
    scanf("%d", &x2);
    printf("Masukkan koordinat titik kedua (y2) \n");
    scanf("%d", &y2);
    
    // Hitung titik tengah
    titikTengahX = (x1 + x2) / 2;
    titikTengahY = (y1 + y2) / 2;
    
    // Tampilkan hasil
    printf("Titik tengahnya adalah: %.f, %.f\n", titikTengahX, titikTengahY);
    
    return 0;
}

