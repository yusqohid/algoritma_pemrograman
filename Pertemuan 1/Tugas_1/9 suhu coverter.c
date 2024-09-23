/*
Nama File       : tugas1_no9.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 04/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman - 9.	Menentukan nilai ekivalen suhu dalam nilai suhu skala fahrenheit dan reamur berdasarkan nilai suhu dalam skala Celcius.
*/

#include <stdio.h>

int main() {
    float celc, fah, rea;
    
    // Judul dan Menu
    printf("Program untuk Menentukan nilai ekivalen suhu dalam nilai suhu skala fahrenheit dan reamur\n");
    printf("----------------------------------------------------------------- \n\n\n");
    
    // Input
    printf("Masukkan nilai suhu dalam Celcius \n");
    scanf("%f", &celc);
    
    // Hitung dalam fahrenheit dan reamur
    fah = (float)9/5 * celc + 32;
    rea = (float)4/5 * celc;
    
    // Tampilkan hasil
    printf("Fahrenheit\t : %.1f\n", fah);
    printf("Reamur\t\t : %.1f", rea);
    
    return 0;
}

