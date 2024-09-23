/* 
Nama File		: latihan2b.c
Programmer		: M Yusqo Hidayatulhaq / 24343058
Tgl. pembuatan	: 02/09/2024
Deskripsi		: program ini menghitung nilai sisi miring segitiga
*/

#include <stdio.h> 
#include <conio.h>  
#include <math.h>

int main() 
{	
	//judul
	printf("Program Menghitung menghitung nilai sisi miring segitiga\n");
	printf("-----------------------------------------------------\n\n");
	printf("Nama 	: M Yusqo Hidayatulhaq\n");
	printf("NIM 	: 24343058\n");
	printf("-----------------------------------------------------\n\n");
	
	//input
	float x,y,r;
	printf("Sisi X = ");
	scanf("%f", &x);
	printf("Sisi Y = ");
	scanf("%f", &y);
	
	//menghitung sisi miring
	r = sqrt(x*x + y*y);
	
	// output
	printf("Sisi Miring =%6.2f \n",r);
	return 0;
}
