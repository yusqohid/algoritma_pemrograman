/*
Nama File       : tugas1_no10.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 04/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman - 10.	Menkonversi waktu jam ke total detik dan sebaliknya
*/

#include <stdio.h>

int main() {
    int jj, mm, dd, totalDetik;
    
    // Judul dan Menu
    printf("Program untuk Menkonversi waktu jam ke total detik dan sebaliknya \n");
    printf("----------------------------------------------------------------- \n\n\n");
    
    // Input
    int choice;
    printf("1. Jam ke detik \n");
    printf("2. Detik ke jam \n");
    printf("Pilih waktu yang ingin di konversi \n");
    scanf("%d", &choice);
    
    // Konversi dari jam ke detik
    if (choice == 1) {
    	printf("Masukkan waktu yang ingin di konversi menjadi detik (format jj:mm:dd): \n");
    	scanf("%d:%d:%d", &jj, &mm, &dd);
    	totalDetik = (jj * 3600) + (mm * 60) + dd;
    	printf("%d jam %d menit %d detik sama dengan %d detik", jj, mm, dd, totalDetik);
	}
	// Konversi dari detik ke jam
    else if (choice == 2) {
    	printf("Masukkan waktu yang ingin di konversi menjadi jam (dalam detik): \n");
    	scanf("%d", &totalDetik);
    	jj = totalDetik / 3600;
    	mm = (totalDetik % 3600) / 60;
    	dd = totalDetik % 60;
    	printf("%d detik sama dengan %d jam %d menit %d detik", totalDetik, jj, mm, dd);
	}
	else {
		printf("pilihan tidak valid\n");
	}
    
    return 0;
}

