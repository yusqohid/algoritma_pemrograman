/*
Nama File		: latihan2d.c
Programmer		: M Yusqo Hidayatulhaq / 24343058
Tgl. pembuatan	: 02/09/2024
Deskripsi		: program ini menghitung  konversi suhu dari celcius
*/

#include <stdio.h> 
int main() { 
	float celsius, fahrenheit, reumur, kelvin;
	//judul
	printf("Program menghitung  konversi suhu dari celcius\n");
	printf("-----------------------------------------------------\n\n");
	printf("Nama 	: M Yusqo Hidayatulhaq\n");
	printf("NIM 	: 24343058\n");
	printf("-----------------------------------------------------\n\n");
	 
	// Meminta pengguna memasukkan suhu dalam Celsius 
	printf("Masukkan suhu dalam Celsius: "); 
	scanf("%f", &celsius); 
	
	// Melakukan perhitungan konversi 
	fahrenheit = (9.0 / 5.0) * celsius + 32; 
	reumur = (4.0 / 5.0) * celsius + 0; 
	kelvin = celsius + 273; 
	
	// Menampilkan hasil konversi suhu 
	printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit); 
	printf("%.2f Celsius = %.2f Reumur\n", celsius, reumur); 
	printf("%.2f Celsius = %.2f Kelvin\n", celsius, kelvin); 
	return 0;
}
