/* 	Nama File		: latihan2A.c
	Programmer		: M. Yusqo Hidayatulhaq/24343058
	Tgl. pembuatan	: 13/09/2024
	Deskripsi		: program ini melakukan perhitungan kebutuhan kalori manusia dewasa  berdasarkan jenis kelamin, jenis pekerjaan, umur, tinggi badan, berat badan
*/


#include <stdio.h>
#include <stdlib.h>

//konstanta
#define RENDAH 1.2
#define SEDANG 1.3
#define BERAT 1.4

int main() {
	double beratBadan, tinggiBadan, usia;
	double bmrPria, bmrWanita;
	double kaloriPriaRendah, kaloriPriaSedang, kaloriPriaBerat;
	double kaloriWanitaRendah, kaloriWanitaSedang, kaloriWanitaBerat;

	printf("\nMenghitung Kebutuhan Kalori Harian\n");
	printf("===========================================\n\n");
	printf("Nama	: M Yusqo Hidayatulhaq\n");
	printf("NIM 	: 24343058\n");
	printf("-------------------------------------------\n");

	//kebutuhan masukkan
	printf("Entri Data Tubuh:\n");
	printf("-----------------\n");
	printf("Berat Badan dalam kg    : ");
	scanf("%lf", &beratBadan); fflush(stdin);
	printf("Tinggi Badan dalam meter: ");
	scanf("%lf", &tinggiBadan); fflush(stdin);
	printf("Usia dalam tahun        : ");
	scanf("%lf", &usia); fflush(stdin);

	//menghitung BMR
	bmrPria = 66 + (13.7 * beratBadan) + (5 * tinggiBadan) - (6.7 * usia);
	bmrWanita = 655 + (1.8 * tinggiBadan) + (9.6 * beratBadan) - (4.7 * usia);

	//menghitung kebutuhan kalori pria
	kaloriPriaRendah = bmrPria * RENDAH;
	kaloriPriaSedang = bmrPria * SEDANG;
	kaloriPriaBerat = bmrPria * BERAT;

	//menghitung kebutuhan kalori wanita
	kaloriWanitaRendah = bmrWanita * RENDAH;
	kaloriWanitaSedang = bmrWanita * SEDANG;
	kaloriWanitaBerat = bmrWanita * BERAT;

	//menamp[ilkan informasi ke layar
	printf("\nKebutuhan Kalori Pria:\n");
	printf("\tPria Aktivitas Rendah  : %0.2lf Kalori per hari\n", kaloriPriaRendah);
	printf("\tPria Aktivitas Sedang  : %0.2lf Kalori per hari\n", kaloriPriaSedang);
	printf("\tPria Aktivitas Berat   : %0.2lf Kalori per hari\n", kaloriPriaBerat);

	printf("\nKebutuhan Kalori Wanita:\n");
	printf("\tWanita Aktivitas Rendah: %0.2lf Kalori per hari\n", kaloriWanitaRendah);
	printf("\tWanita Aktivitas Sedang: %0.2lf Kalori per hari\n", kaloriWanitaSedang);
	printf("\tWanita Aktivitas Berat : %0.2lf Kalori per hari\n", kaloriWanitaBerat);

	return 0;
}
