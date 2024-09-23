/*
Nama File       : tugas2 no5.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 12/09/2024
Deskripsi		: Tugas 2 Algoritma & Pemrograman - 5.	Program untuk Menghitung Percepatan
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	float vAwal, vAkhir, waktu, percepatan;

	//judul
	printf("Program untuk Menghitung Percepatan\n");
	printf("---------------------------------------------\n");
	printf("Nama	: M Yusqo Hidayatulhaq\n");
	printf("NIM 	: 24343058\n");
	printf("---------------------------------------------\n");

	//input
	printf("Masukkan kecepatan awal     : ");
	scanf("%f", &vAwal); fflush(stdin);
	printf("Masukkan kecepatan akhir    : ");
	scanf("%f", &vAkhir); fflush(stdin);
	printf("Masukkan waktu	: ");
	scanf("%f", &waktu); fflush(stdin);

	//hitung percepatan
	percepatan = (vAkhir - vAwal) / waktu;

	//output
	printf("Percepatannya adalah      : %.2f\n", percepatan);

	return 0;
}

