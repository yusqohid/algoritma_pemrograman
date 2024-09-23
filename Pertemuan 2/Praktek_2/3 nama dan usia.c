/* 	Nama File		: latihan3C.c
    Programmer		: M. Yusqo Hidayatulhaq/24343058
    Tgl. pembuatan	: 13/09/2024
    Deskripsi		: Program menampilkan nama dan usia
*/

#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("\nMenampilkan Nama dan Usia\n");
    printf("===========================================\n\n");
    printf("Nama	: M Yusqo Hidayatulhaq\n");
    printf("NIM 	: 24343058\n");
    printf("-------------------------------------------\n");
    // Input dengan format
    printf("Masukkan nama Anda: ");
    scanf("%s", name); fflush(stdin);
    printf("Masukkan usia Anda: ");
    scanf("%d", &age); fflush(stdin);

    // Menampilkan informasi dengan format
    printf("Halo, %s! Anda berusia %d tahun.\n", name, age);

    return 0;
}
