/*
Nama File       : pratikum1_no4.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 07/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman - 4.	Program untuk Menghitung biaya cicilan kredit barang dan sisa hutang
*/

#include <stdio.h> 
#include <stdlib.h> 

//konstanta bunga kredit pertahun dalam persen 
#define BUNGA 0.09 

int main() { 
	double harga, hutang, bunga, cicilan, uangMuka, sisa, pokok; 
	int bulan, kaliKe; 
	
	printf("Program untuk Menghitung biaya cicilan kredit barang dan sisa hutang\n");
	printf ("--------------------------------------------------------------------\n\n");
	
	printf("Ketikkan harga barang          : Rp. "); 
	scanf("%lf", &harga); fflush(stdin); 
	printf("Ketikkan besar uang muka       : Rp. "); 
	scanf("%lf", &uangMuka); fflush(stdin); 
	printf("Ketikkan jumlah bulan kredit   : "); 
	scanf("%d", &bulan); fflush(stdin); 
	printf("Ketikkan Cicilan kali ke berapa: "); 
	scanf("%d", &kaliKe); fflush(stdin); 

	//menghitung pokok hutang 
	hutang = harga - uangMuka; 

	//menghitung bunga perbulan 
	bunga = (BUNGA * hutang)/12; 

	//menghitung pokok bulanan 
	pokok = hutang/bulan; 
	
	//menghitung besar cicilan perbulan 
	cicilan = pokok + bunga; 
	
	//menghitung sisa hutang 
	sisa = hutang - pokok*kaliKe; 
	
	//menampilkan informasi 
	printf("\nHarga Barang           : Rp. %10.1lf\n",harga); 
	printf("Uang Muka              : Rp. %10.1lf\n",uangMuka); 
	printf("Banyaknya bulan cicilan: %d kali cicilan\n",bulan); 
	printf("Pokok Hutang           : Rp. %10.1lf\n",pokok); 
	printf("Besar bunga bulanan    : Rp. %10.1f\n",bunga); 
	printf("Besar Cicilan per bulan: Rp. %10.1lf\n", cicilan);	 
	printf("Cicilan ke-            : %d\n", kaliKe); 
	printf("Sisa Pokok Hutang      : Rp. %10.1lf\n", sisa);
	
	return 0;
} 
