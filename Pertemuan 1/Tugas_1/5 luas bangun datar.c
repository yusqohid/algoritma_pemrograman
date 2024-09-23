/*
Nama File       : tugas1_no5.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 04/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman - 5. Program untuk Menentukan luas dari bangun datar)
*/

#include <stdio.h>
#include <math.h>

int main() {
	#define PHI 3.14
    
    int choice;
    float sisi, panjang, lebar, tinggi, panjangAlas, luasSilinder, h, r;
    float luasPersegi, luasSegitiga, luasLingkaran, luasBola; 
    
    //Judul dan Menu
    printf("Program untuk Menentukan luas dari bangun datar \n");
    printf("----------------------------------------------------------------- \n\n\n");
    printf("1.	Persegi \n");
    printf("2.	Segitiga Sama Kaki \n");
    printf("3.	Lingkaran \n");
    printf("4.	Bola \n\n");
    printf("Pilih bangun datar yang akan di hitung: \n");
    scanf("%d", &choice);
    
    switch (choice) {
    	//------------------persegi-----------------------------------------
    	case 1:
    		//input
    		printf("Masukkan panjang sisi persegi: \n");
    		scanf ("%f", &sisi);
    		//menghitung luas persegi
    		luasPersegi = sisi * sisi;
    		printf("\n");
    		//output
    		printf("luasnya adalah: %.1f\n", luasPersegi);
    		break;
    	
    	//------------------segitiga sama kaki-------------------------------
    	case 2:
    		//input
    		printf("Masukkan panjang alas segitiga sama kaki: \n");
    		scanf ("%f", &panjangAlas);
    		printf("Masukkan tinggi segitiga sama kaki: \n");
    		scanf ("%f", &tinggi);
    		//menghitung luas segitiga sama kaki
    		luasSegitiga= panjangAlas * tinggi / 2;
    		printf("\n");
    		//output
    		printf("luasnya adalah: %.1f\n", luasSegitiga);
    		break;
    	
		//-------------------lingkaran--------------------------------------
    	case 3:
    		//input
    		printf("Masukkan jari-jari lingkaran: \n");
    		scanf ("%f", &r);
    		//menghitung luas lingkaran
    		luasLingkaran= PHI * r * r;
    		printf("\n");
    		//output
    		printf("luasnya adalah: %.1f\n", luasLingkaran);
    		break;
    		
    	//-------------------bola-------------------------------------------
    	case 4:
    		//input
    		printf("Masukkan jari-jari bola: \n");
    		scanf ("%f", &r);
    		//menghitung luas bola
    		luasBola= 4 * PHI * r * r;
    		printf("\n");
    		//output
    		printf("luasnya adalah: %.1f\n", luasBola);
    		break;

    	default:
    		printf("pilihan tidak valid\n");
    		break;
	}
    return 0;
}

