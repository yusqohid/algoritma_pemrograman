/*
Nama File       : tugas1_no14.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 04/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman - 14.	Program untuk Menghitung ketinggian tanah timbunan
*/

#include <stdio.h>
#include <math.h>

#define PHI 3.14

int main() {

    float l, p, d, k, r, volume_sumur, luas_tanah, t;

    //judul dan menu
    printf("Program untuk Menghitung ketinggian tanah timbunan\n");
    printf("--------------------------------------------\n\n");
    // Input dari pengguna
    printf("Masukkan lebar bidang datar (meter): ");
    scanf("%f", &l);
    printf("Masukkan panjang bidang datar (meter): ");
    scanf("%f", &p);
    printf("Masukkan diameter sumur (meter): ");
    scanf("%f", &d);
    printf("Masukkan kedalaman sumur (meter): ");
    scanf("%f", &k);

    // Hitung radius sumur
    r = d / 2;

    // Hitung volume sumur (PHI * r^2 * k)
    volume_sumur = PHI * r * r * k;

    // Hitung luas tanah (l * p), kita cari t
    luas_tanah = l * p;

    // Menghitung ketinggian tanah timbunan
    t = volume_sumur / luas_tanah;

    // Output hasil
    printf("Ketinggian tanah timbunan adalah: %.2f meter\n", t);

    return 0;
}
