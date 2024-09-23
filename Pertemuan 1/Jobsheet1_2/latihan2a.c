/* 
Nama File		: latihan2a.c
Programmer		: M Yusqo Hidayatulhaq / 24343058
Tgl. pembuatan	: 02/09/2024
Deskripsi		: program ini melakukan perhitungan luas dan keliling persegi panjang 
*/

#include <stdio.h>

int main() 
{
	float panjang, lebar, luas, kel;
	
	//judul
	printf("Program Menghitung Luas dan Keliling Persegi Panjang\n");
	printf("-----------------------------------------------------\n\n");
	printf("Nama 	: M Yusqo Hidayatulhaq\n");
	printf("NIM 	: 24343058\n");
	printf("-----------------------------------------------------\n\n");
	
	/* Pemasukan Nilai */ 
	printf("Panjang = "); 
	scanf("%f", &panjang); 
	printf("Lebar = "); 
	scanf("%f", &lebar); 
	
	/* Proses Penghitungan */ 
	luas = panjang * lebar; 
	kel = 2 * panjang + 2 * lebar; 
	
	/* Menampilkan hasil */ 
	printf("Luas = %6.2f \n", luas); 
	printf("Keliling = %6.2f \n", kel);
	
	return 0;
}
