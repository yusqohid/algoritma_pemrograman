/* 	Nama File		: latihan2B.c
    Programmer		: M. Yusqo Hidayatulhaq/24343058
    Tgl. pembuatan	: 13/09/2024
    Deskripsi		: program ini melakukan perhitungan kecepatan suatu
    kendaraan berdasarkan jarak tempuh dan waktu tempuh
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int totalDetik, jj, mm, dd;
    double meter, km, cepat;
    char titikDua;

    printf("\nMenghitung Kecepatan Kendaraan\n");
	printf("===========================================\n\n");
	printf("Nama	: M Yusqo Hidayatulhaq\n");
	printf("NIM 	: 24343058\n");
	printf("-------------------------------------------\n");
	//input
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
    printf("Jarak Tempuh : %0.2lf Km\n", km);
    printf("Waktu Tempuh : %02d%c%02d%c%02d\n", jj, titikDua, mm, titikDua,dd);
    printf("Kecepatan : %0.2lf m/detik\n", cepat);

    return 0;
}
