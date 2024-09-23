/*
Nama File		: latihan2e.c
Programmer		: M Yusqo Hidayatulhaq / 24343058
Tgl. pembuatan	: 02/09/2024
Deskripsi		: program ini menghitung biaya foto kopi
*/

#include <stdio.h>

int main() { 
	int jumlahLembar, hargaPerLembar;
	float totalBiaya; 
	//judul
	printf("Program Menghitung biaya foto kopi\n");
	printf("-----------------------------------------------------\n\n");
	printf("Nama 	: M Yusqo Hidayatulhaq\n");
	printf("NIM 	: 24343058\n");
	printf("-----------------------------------------------------\n\n");
	// Meminta pengguna memasukkan jumlah lembar fotokopi 
	printf("Masukkan jumlah lembar fotokopi: "); 
	scanf("%d", &jumlahLembar); 
	
	// Meminta pengguna memasukkan harga per lembar fotokopi 
	printf("Masukkan harga per lembar fotokopi: "); 
	scanf("%d", &hargaPerLembar); 
	
	// Menghitung total biaya fotokopi 
	totalBiaya = jumlahLembar * hargaPerLembar; 
	
	// Menampilkan total biaya fotokopi 
	printf("Total biaya fotokopi: Rp. %.2f\n", totalBiaya); 
	return 0;
}
