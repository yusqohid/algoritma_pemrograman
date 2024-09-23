/*
Nama File       : tugas1_no2.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 02/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman - 2. Program untuk Menghitung Keliling bangun datar
*/

#include <stdio.h>
#include <math.h>

int main() {
    #define PHI 3.14
    
    int choice;
    double alas, tinggi, sisiMiring;
    double panjang, lebar;
    double diameter, kelilingSegitiga, kelilingPersegiPanjang, kelilingLingkaran;
    
    //Judul dan Menu
    printf("Program untuk Menghitung Keliling bangun datar\n");
    printf("===============================================\n\n\n");
    printf("1.	Segitiga\n");
    printf("2.	Persegi Panjang\n");
    printf("3.	Lingkaran\n\n");
    printf("Pilih bangun datar yang akan di hitung: \n");
    scanf("%d", &choice);
    
    switch (choice) {
    	//menghitung keliling segitiga
    	case 1:
    		printf("Masukkan panjang alas segitiga: \n");
    		scanf ("%lf", &alas);
    		printf("Masukkan tinggi segitiga: \n");
    		scanf ("%lf", &tinggi);
    		sisiMiring= sqrt(alas*alas + tinggi*tinggi);
    		kelilingSegitiga= sisiMiring + alas + tinggi;
    		printf("\n");
    		printf("Kelilingnya adalah: %.lf\n", kelilingSegitiga);
    		break;
    	
    	//menghitung keliling persegi panjang
    	case 2:
    		printf("Masukkan panjang persegi panjang: \n");
    		scanf ("%lf", &panjang);
    		printf("Masukkan lebar persegi panjang: \n");
    		scanf ("%lf", &lebar);
    		kelilingPersegiPanjang= 2 * panjang + 2 * lebar;
    		printf("\n");
    		printf("Kelilingnya adalah: %.lf\n", kelilingPersegiPanjang);
    		break;
    	
		//menghitung keliling lingkaran
    	case 3:
    		printf("Masukkan diameter lingkaran: \n");
    		scanf ("%lf", &diameter);
    		kelilingLingkaran= 2 * PHI * diameter;
    		printf("\n");
    		printf("Kelilingnya adalah: %.lf\n", kelilingLingkaran);
    		break;
    	
    	default:
    		printf("pilihan tidak valid\n");
    		break;
	}
    return 0;
}
    
