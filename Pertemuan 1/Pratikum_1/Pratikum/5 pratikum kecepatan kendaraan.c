/*
Nama File       : pratikum1_no5.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 07/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman - 5.	Program untuk Menghitung kecepatan suatu kendaraan berdasarkan jarak tempuh dan waktu tempuh
*/

#include <stdio.h> 
#include <stdlib.h> 

int main(){ 
	int totalDetik, jj, mm, dd; 
	double meter, km, cepat; 
	char titikDua; 
	
	printf("Program Menghitung Kecepatan\n\n"); 
	printf("Ketikkan jarak tempuh dalam Km: "); 
	scanf("%lf", &km); fflush(stdin); 
	printf("Ketikkan waktu tempuh (ex: 02:05:15): "); 
	scanf("%d%c%d%c%d", &jj, &titikDua, &mm, &titikDua, &dd); 
	
	//Menghitung total detik dari format jj:mm:dd menjadi detik 
	totalDetik = jj * 3600 + mm * 60 + dd; 
	
	//Menkonversi jarak dalam Km menjadi meter: 
	meter = km * 1000.0; 
	
	//Menghitung kecepatan: 
	cepat = meter/totalDetik; 
	printf("Jarak Tempuh    : %0.2lf Km\n", km); 
	printf("Waktu Tempuh    : %02d%c%02d%c%02d\n", jj, titikDua, mm, titikDua,dd); 
	printf("Kecepatan      : %0.2lf m/detik\n", cepat); 

	return 0;
} 
