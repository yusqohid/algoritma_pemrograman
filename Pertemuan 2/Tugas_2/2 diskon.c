/*
Nama File       : tugas2 no2.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 09/09/2024
Deskripsi		: Tugas 2 Algoritma & Pemrograman - 1.	Program untuk Menghitung Harga Akhir Barang Setelah Diskon
*/

#include <stdio.h> 
#include <stdlib.h>

int main(){
	#define DISCOUNT 0.15
	
	float hargaAsli, hargaDiskon;
	
	//judul
	printf("Program untuk Menghitung Harga Akhir Barang Setelah Diskon\n");
	printf("---------------------------------------------\n");
	printf("Nama	: M Yusqo Hidayatulhaq\n");
	printf("NIM 	: 24343058\n");
	printf("---------------------------------------------\n");
	
	//input
	printf("Masukkan harga barang	: ");
	scanf("%f", &hargaAsli); fflush(stdin);
	//hitung total harga setelah diskon
	hargaDiskon = hargaAsli - (DISCOUNT * hargaAsli); 
	//output
	printf("\nHarga Barang		 	: %.2f\n", hargaAsli);
	printf("Diskon	 			: %.2f\n", DISCOUNT);
	printf("Total Diskon		 	: %.2f\n\n", DISCOUNT * hargaAsli);
	printf("Total Pembayaran	 	: %.2f\n", hargaDiskon);
	
	return 0;
}

