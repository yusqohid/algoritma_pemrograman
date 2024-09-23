/*
Nama File		: latihan2c.c
Programmer		: M Yusqo Hidayatulhaq / 24343058
Tgl. pembuatan	: 02/09/2024
Deskripsi		: program ini menghitung  luas dan keliling lingkaran berdasarkan nilai r
*/

#include <stdio.h>
	
int main() { 
	float radius, luas, keliling; 
	//judul
	printf("Program Menghitung Luas dan Keliling lingkaran\n");
	printf("-----------------------------------------------------\n\n");
	printf("Nama 	: M Yusqo Hidayatulhaq\n");
	printf("NIM 	: 24343058\n");
	printf("-----------------------------------------------------\n\n");
	
	// Memasukkan nilai jari-jari dari pengguna 
	printf("Masukkan nilai jari-jari lingkaran: "); 
	scanf("%f", &radius); 
	
	// Menghitung luas dan keliling 
	luas = 3.14159 * radius * radius; // Formula untuk luas lingkaran 
	keliling = 2 * 3.14159 * radius; // Formula untuk keliling lingkaran 
	
	// Menampilkan hasil perhitungan 
	printf("Luas lingkaran: %.2f\n", luas); 
	printf("Keliling lingkaran: %.2f\n", keliling); 
	return 0;
}
