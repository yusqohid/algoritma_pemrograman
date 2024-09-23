/*
Nama File       : tugas2 no7.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 12/09/2024
Deskripsi		: Tugas 2 Algoritma & Pemrograman - 7.	Program untuk Menghitung Biaya Perjalanan dengan Beberapa Segmen
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    #define TARIF_KOTA 10000
    #define TARIF_TOL 15000
    #define TARIF_LUAR_KOTA 8000

	float jarakKota, jarakTol, jarakLuarKota, totalBiaya;

	//judul
	printf("Program untuk Menghitung Biaya Perjalanan dengan Beberapa Segmen\n");
	printf("---------------------------------------------\n");
	printf("Nama	: M Yusqo Hidayatulhaq\n");
	printf("NIM 	: 24343058\n");
	printf("---------------------------------------------\n");

	//input
	printf("Masukkan jarak kota (km)     : ");
	scanf("%f", &jarakKota); fflush(stdin);
	printf("Masukkan jarak tol (km)    : ");
	scanf("%f", &jarakTol); fflush(stdin);
	printf("Masukkan jarak luar kota (km)     : ");
	scanf("%f", &jarakLuarKota); fflush(stdin);


	//hitung biaya perjalanan
	totalBiaya = (jarakKota * TARIF_KOTA) + (jarakTol * TARIF_TOL) + (jarakLuarKota * TARIF_LUAR_KOTA);

	//output
	printf("Total biaya perjalanan adalah      : %.2f\n", totalBiaya);

	return 0;
}

