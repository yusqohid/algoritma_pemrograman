/*
Nama File       : pratikum1_no1.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 07/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman - 1.	Program untuk menghitung biaya foto kopi
*/

#include <stdio.h>
#include <stdlib.h>

//definisi konstanta
#define HARGA 200.00

int main (){

    int lembar;
    double biaya;

    printf("Program Menghitung Biaya Fotokopi\n");
    printf("---------------------------------------- \n\n\n");

    //membaca banyaknya lembar foto kopi
    printf("Ketikkan jumlah lembar foto kopi: ");
    scanf("%d", &lembar); fflush(stdin);

    //menghitung total biaya
    biaya = lembar * HARGA;
    printf("Jumlah lembar   : %d lembar\n", lembar);
    printf("Harga perlembar : Rp. %0.2lf\n", HARGA);
    printf("Total biaya     : Rp. %0.2lf\n", biaya);

    return 0;

}
