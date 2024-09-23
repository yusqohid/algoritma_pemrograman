/*
Nama File       : tugas2 no3.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 09/09/2024
Deskripsi		: Tugas 2 Algoritma & Pemrograman - 3.	Program untuk Menghitung jumlah penghasilan bersih
*/

#include <stdio.h> 
#include <stdlib.h>

int main(){
	#define PAJAK 0.1
	
	float gajiPokok, bonus, penghasilanBersih;
	
	//judul
	printf("Program untuk Menghitung Harga Jumlah Penghasilan Bersih\n");
	printf("---------------------------------------------\n");
	printf("Nama	: M Yusqo Hidayatulhaq\n");
	printf("NIM 	: 24343058\n");
	printf("---------------------------------------------\n");
	
	//input
	printf("Masukkan gaji pokok	: ");
	scanf("%f", &gajiPokok); fflush(stdin);
	printf("Masukkan bonus tahunan	: ");
	scanf("%f", &bonus); fflush(stdin);
	//hitung total penghasilan bersih
	penghasilanBersih = (gajiPokok + bonus) - (gajiPokok + bonus) * PAJAK; 
	//output
	printf("\nGaji Pokok		 	: %.2f\n", gajiPokok);
	printf("Bonus Tahunan		 	: %.2f\n", bonus);
	printf("Pajak	 			: %.2f\n", PAJAK);
	printf("Total Pajak		 	: %.2f\n\n", PAJAK * (gajiPokok + bonus));
	printf("Total Gaji Bersih	 	: %.2f\n", penghasilanBersih);
	
	return 0;
}

