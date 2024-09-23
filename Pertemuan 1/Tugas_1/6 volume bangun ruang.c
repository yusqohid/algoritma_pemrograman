/*
Nama File       : tugas1_no6.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 04/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman - 6. Program untuk Menentukan volume dari bangun ruang)
*/

#include <stdio.h>
#include <math.h>

int main() {
	#define PHI 3.14
    
    int choice;
    float sisi, panjang, lebar, tinggi, panjangAlas, luasSilinder, h, r;
    float volumeKubus, volumeBalok, volumeSilinder, volumeBola; 
    
    //Judul dan Menu
    printf("Program untuk Menentukan volume dari bangun ruang \n");
    printf("----------------------------------------------------------------- \n\n\n");
    printf("1.	Kubus \n");
    printf("2.	Balok \n");
    printf("3.	Silinder \n");
    printf("4.	Bola \n\n");
    printf("Pilih bangun datar yang akan di hitung: \n");
    scanf("%d", &choice);
    
    switch (choice) {
    	//------------------kubus-----------------------------------------
    	case 1:
    		//input
    		printf("Masukkan panjang sisi kubus: \n");
    		scanf ("%f", &sisi);
    		//menghitung volume kubus
    		volumeKubus = sisi * sisi * sisi;
    		printf("\n");
    		//output
    		printf("volumenya adalah: %.1f\n", volumeKubus);
    		break;
    	
    	//------------------balok-----------------------------------------
    	case 2:
    		//input
    		printf("Masukkan panjang balok: \n");
    		scanf ("%f", &panjang);
    		printf("Masukkan lebar balok: \n");
    		scanf ("%f", &lebar);
    		printf("Masukkan tinggi balok: \n");
    		scanf ("%f", &tinggi);
    		//menghitung volume balok
    		volumeBalok= panjang * lebar * tinggi;
    		printf("\n");
    		//output
    		printf("volumenya adalah: %.1f\n", volumeBalok);
    		break;
    	
		//-------------------silinder--------------------------------------
    	case 3:
    		//input
    		printf("Masukkan jari-jari silinder: \n");
    		scanf ("%f", &r);
    		printf("Masukkan tinggi silinder: \n");
    		scanf ("%f", &h);
    		//menghitung volume silinder
    		volumeSilinder= PHI * r * r * h;
    		printf("\n");
    		//output
    		printf("volumenya adalah: %.1f\n", volumeSilinder);
    		break;
    		
    	//-------------------bola------------------------------------------
    	case 4:
    		//input
    		printf("Masukkan jari-jari bola: \n");
    		scanf ("%f", &r);
    		//menghitung volume bola
    		volumeBola= 4 * PHI * r * r * r / 3;
    		printf("\n");
    		//output
    		printf("volumenya adalah: %.1f\n", volumeBola);
    		break;

    	default:
    		printf("pilihan tidak valid\n");
    		break;
	}
    return 0;
}

