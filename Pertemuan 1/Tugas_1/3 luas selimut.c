/*
Nama File       : tugas1_no3.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 02/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman - 3. Program untuk Menghitung luas permukaan bangun ruang
*/

#include <stdio.h>
#include <math.h>

int main() {
	#define PHI 3.14
    
    int choice;
    float sisi, panjang, lebar, tinggi, luasAlas, luasSelimut, h, r;
    float lpKubus, lpBalok, lpSilinder; //lp adalah luas permukaan
    
    //Judul dan Menu
    printf("Program untuk Menghitung luas permukaan bangun ruang \n");
    printf("===================================================== \n\n\n");
    printf("1.	Kubus \n");
    printf("2.	Balok \n");
    printf("3.	Silinder \n\n");
    printf("Pilih bangun ruang yang akan di hitung: \n");
    scanf("%d", &choice);
    
    switch (choice) {
    	//menghitung luas permukaan kubus
    	case 1:
    		printf("Masukkan panjang rusuk kubus: \n");
    		scanf ("%f", &sisi);
    		lpKubus= sisi * sisi * 6;
    		printf("\n");
    		printf("luas-permukaannya adalah: %.1f\n", lpKubus);
    		break;
    	
    	//menghitung luas permukaan balok
    	case 2:
    		printf("Masukkan panjang balok: \n");
    		scanf ("%f", &panjang);
    		printf("Masukkan lebar balok: \n");
    		scanf ("%f", &lebar);
    		printf("Masukkan tinggi balok: \n");
    		scanf ("%f", &tinggi);
    		lpBalok= 2 * (panjang*lebar + panjang*tinggi + tinggi*lebar);
    		printf("\n");
    		printf("luas-permukaannya adalah: %.1f\n", lpBalok);
    		break;
    	
		//menghitung luas permukaan silinder
    	case 3:
    		printf("Masukkan jari-jari silinder: \n");
    		scanf ("%f", &r);
    		printf("Masukkan tinggi silinder: \n");
    		scanf ("%f", &h);
    		luasAlas= PHI * r * r * 2;
    		luasSelimut= PHI * r * h * 2;
    		lpSilinder= luasAlas + luasSelimut;
    		printf("\n");
    		printf("luas-permukaannya adalah: %.1f\n", lpSilinder);
    		break;
    	
    	default:
    		printf("pilihan tidak valid\n");
    		break;
	}
    return 0;
}
