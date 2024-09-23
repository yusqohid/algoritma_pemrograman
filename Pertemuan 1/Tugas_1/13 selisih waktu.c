/*
Nama File       : tugas1_no13.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 04/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman - 13.	Program untuk Menghitung selisih waktu berdasarkan waktu awal dan waktu akhir
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int jaw, maw, daw, totaw;
    int jak, mak, dak, totak;
    int jas, mas, das, totas;
    char ch;

    // judul dan menu
    printf("Program untuk Menghitung Selisih Waktu\n");
    printf("--------------------------------------------\n\n");
    printf("Ketikkan waktu awal (ex: 07:30:15) : ");
    scanf("%d%c%d%c%d", &jaw, &ch, &maw, &ch, &daw); fflush(stdin);
    printf("Ketikkan waktu akhir (ex: 07:30:15): ");
    scanf("%d%c%d%c%d", &jak, &ch, &mak, &ch, &dak); fflush(stdin);

    //menghitung total detik awal
    totaw = jaw*3600+maw*60+daw;

    //menghitung total detik aakhir
    totak = jak*3600+mak*60+dak;

    //menghitung selisih total detik
    totas = totak - totaw;

    //konversi format waktu
    jas = totas/3600;
    mas = (totas%3600)/60;
    das = (totas%3600)%60;

    //menampilkan selisih waktu dalam format jj:mm:dd
    printf("Waktu Awal   : %02d%c%02d%c%02d\n", jaw, ch, maw, ch, daw);
    printf("Waktu Akhir  : %02d%c%02d%c%02d\n", jak, ch, mak, ch, dak);
    printf("Selisih Waktu: %02d%c%02d%c%02d\n", jas, ch, mas, ch, das);

    return 0;
}
