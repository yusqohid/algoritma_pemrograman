/*
Nama File       : tugas1_no12.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 04/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman - 12.	Program untuk Mengkonversi total hari menjadi tahun, bulan, minggu dan hari
*/

#include <stdio.h>
#include <stdlib.h>

#define THN 365
#define BLN 30
#define MGG 7

int main(){

    int totalHari, thn, bln, mgg, sisaHari;

    // Judul dan Menu
    printf("Program untuk Mengkonversi total hari menjadi tahun, bulan, minggu \n");
    printf("------------------------------------------------------------------- \n\n\n");

    //input
    printf("Ketikkan nilai total hari: ");
    scanf("%d", &totalHari); fflush(stdin);

    //mengambil nilai tahun dari totalHari
    thn = totalHari / THN;

    //mengambil nilai bulan dari sisa thn
    bln = (totalHari % THN) / BLN;

    //mengambil nilai minggu dari sisa thn dan bln
    mgg = ((totalHari % THN) % BLN) / MGG;

    //mengambila sisa hari, sisaHari dari sisa thn, bln dan mgg
    sisaHari = ((totalHari % THN) % BLN) % MGG;

    //menampilkan HASIL KONVERSI
    printf("Total Hari Anda : %d hari\n", totalHari);
    printf("Nilai Tahun     : %d tahun\n", thn);
    printf("Nilai Bulan     : %d bulan\n", bln);
    printf("Nilai Minggu    : %d minggu\n", mgg);
    printf("Sisa Hari       : %d hari\n", sisaHari);

    return 0;
}
