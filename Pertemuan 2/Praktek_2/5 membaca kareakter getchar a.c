/* 	Nama File		: latihan3a.c
    Programmer		: M. Yusqo Hidayatulhaq/24343058
    Tgl. pembuatan	: 13/09/2024
    Deskripsi		: program membaca karakter getchar()
*/

#include <stdio.h>

int main() {
char ch;

printf("Tolong masukkan sebuah karakter:\n");
ch = getchar(); // membaca dan menampilkan karakter
printf("\nAnda memasukkan karakter berikut: %c \n", ch);

return 0;
}
