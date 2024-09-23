/*
Nama File       : tugas1_no4.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 04/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman - 4. Program untuk Menentukan jumlah panjang rusuk dari bangun ruang
*/

#include <stdio.h>
#include <math.h>

int main() {
	#define PHI 3.14
    
    int choice;
    float sisi, panjang, lebar, tinggi, kelilingAlas, luasSilinder, h, r;
    float rusukKubus, rusukBalok, rusukSilinder; 
    
    //Judul dan Menu
    printf("Program untuk Menentukan jumlah panjang rusuk dari bangun ruang \n");
    printf("----------------------------------------------------------------- \n\n\n");
    printf("1.	Kubus \n");
    printf("2.	Balok \n");
    printf("3.	Silinder \n\n");
    printf("Pilih bangun ruang yang akan di hitung: \n");
    scanf("%d", &choice);
    
    switch (choice) {
    	//------------------kubus-----------------------------------------
    	case 1:
    		//input
    		printf("Masukkan panjang sisi kubus: \n");
    		scanf ("%f", &sisi);
    		//menghitung panjang rusuk kubus
    		rusukKubus= sisi * 12;
    		printf("\n");
    		//output
    		printf("jumlah panjang rusuknya adalah: %.1f\n", rusukKubus);
    		break;
    	
    	//------------------balok------------------------------------------
    	case 2:
    		//input
    		printf("Masukkan panjang balok: \n");
    		scanf ("%f", &panjang);
    		printf("Masukkan lebar balok: \n");
    		scanf ("%f", &lebar);
    		printf("Masukkan tinggi balok: \n");
    		scanf ("%f", &tinggi);
    		//menghitung panjang rusuk balok
    		rusukBalok= 4 * (panjang + lebar + tinggi);
    		printf("\n");
    		//output
    		printf("jumlah panjang rusuknya adalah: %.1f\n", rusukBalok);
    		break;
    	
		//-------------------silinder---------------------------------------
    	case 3:
    		//input
    		printf("Masukkan jari-jari silinder: \n");
    		scanf ("%f", &r);
    		printf("Masukkan tinggi silinder: \n");
    		scanf ("%f", &h);
    		//menghitung panjang rusuk silinder
    		kelilingAlas= 2 * PHI * r;
    		rusukSilinder= 2 * (kelilingAlas + h);
    		printf("\n");
    		//output
    		printf("jumlah panjang rusuknya adalah: %.1f\n", rusukSilinder);
    		break;
    	
    	default:
    		printf("pilihan tidak valid\n");
    		break;
	}
    return 0;
}
