/*
Nama File       : tugas2 no4.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 09/09/2024
Deskripsi		: Tugas 2 Algoritma & Pemrograman - 4.	Program untuk Menghitung Volume dan Luas Permukaan Kubus
*/

#include <stdio.h> 
#include <stdlib.h>

int main(){

	float sisi, volume, luasPermukaan;
	
	//judul
	printf("Program untuk Menghitung Volume dan Luas Permukaan Kubus\n");
	printf("---------------------------------------------\n");
	printf("Nama	: M Yusqo Hidayatulhaq\n");
	printf("NIM 	: 24343058\n");
	printf("---------------------------------------------\n");
	
	//input
	printf("Masukkan panjang sisi kubus	: ");
	scanf("%f", &sisi); fflush(stdin);

	//hitung volume dan luas permukaan
	volume = sisi * sisi * sisi;
	luasPermukaan = 6 * sisi*sisi; 
	
	//output
	printf("Volume kubus		 	: %.2f\n", volume);
	printf("Luas Permukaan kubus	 	: %.2f\n", luasPermukaan);
	
	return 0;
}

