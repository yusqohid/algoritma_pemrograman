/*
Nama File       : tugas2 no1.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 09/09/2024
Deskripsi		: Tugas 2 Algoritma & Pemrograman - 1.	Program untuk Menghitung Total Gaji Karyawan
*/

#include <stdio.h> 
#include <stdlib.h>

int main(){
	const float TUNJANGAN_TRANSPORTASI = 500000;
	const float TUNJANGAN_MAKAN = 1000000;
	
	float gajiPokok, totalGaji;
	
	//judul
	printf("Program untuk Menghitung Total Gaji Karyawan\n");
	printf("---------------------------------------------\n");
	printf("Nama	: M Yusqo Hidayatulhaq\n");
	printf("NIM 	: 24343058\n");
	printf("---------------------------------------------\n");
	
	//input
	printf("Masukkan total gaji pokok	: ");
	scanf("%f", &gajiPokok); fflush(stdin);
	//hitung total gaji
	totalGaji = gajiPokok + TUNJANGAN_TRANSPORTASI + TUNJANGAN_MAKAN;
	//output
	printf("\nGaji Pokok		 	: %.2f\n", gajiPokok);
	printf("Tunjangan Transportasi	 	: %.2f\n", TUNJANGAN_TRANSPORTASI);
	printf("Tunjangan Makan		 	: %.2f\n\n", TUNJANGAN_MAKAN);
	printf("Total Gaji		 	: %.2f\n", totalGaji);
	
	return 0;
}

