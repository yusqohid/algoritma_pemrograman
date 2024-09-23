/*
Nama File       : tugas1_no11.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 04/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman - 11.	Program untuk Mengkonversi nilai cm menjadi km dan m serta sebaliknya
*/

#include <stdio.h>

int main() {
    float m, km, totalCm;

    // Judul dan Menu
    printf("Program untuk Menkonversi satuan nilai cm menjadi km dan m serta sebaliknya \n");
    printf("--------------------------------------------------------------------------- \n\n\n");

    // Input
    int choice;
    printf("1. cm ke m & km \n");
    printf("2. km ke m & cm \n");
    printf("Pilih satuan yang ingin di konversi: \n");
    scanf("%d", &choice);

    // Konversi dari cm ke m & km
    if (choice == 1) {
    	printf("Masukkan jarak (dalam cm) : \n");
    	scanf("%f", &totalCm);
    	km = totalCm / 100000.00;
    	m = totalCm / 100.00;
    	printf("%.2f cm sama dengan %.2f meter dan %.2f km", totalCm, m, km);
	}
	// Konversi dari km ke m & cm
    else if (choice == 2) {
    	printf("Masukkan jarak (dalam km) : \n");
    	scanf("%f", &km);
    	totalCm = km * 100000.00;
    	m = km * 1000.00;

    // Tampilkan Hasil
    	printf("%.2f km sama dengan %.2f meter dan %.2f cm", km, m, totalCm);
	}
	else {
		printf("pilihan tidak valid\n");
	}

    return 0;
}

