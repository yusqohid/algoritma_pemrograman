/*
Nama File       : tugas2 no6.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 12/09/2024
Deskripsi		: Tugas 2 Algoritma & Pemrograman - 6.	Program untuk Menghitung total jarak tempuh
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	float jarakTempuh, waktu, kecepatan;

	//judul
	printf("Program untuk Menghitung total jarak tempuh\n");
	printf("---------------------------------------------\n");
	printf("Nama	: M Yusqo Hidayatulhaq\n");
	printf("NIM 	: 24343058\n");
	printf("---------------------------------------------\n");

	//input
	printf("Masukkan kecepatan     : ");
	scanf("%f", &kecepatan); fflush(stdin);
	printf("Masukkan waktu tempuh    : ");
	scanf("%f", &waktu); fflush(stdin);

	//hitung jarak tempuh
	jarakTempuh = kecepatan * waktu;

	//output
	printf("Jarak tempuh adalah      : %.2f\n", jarakTempuh);

	return 0;
}

