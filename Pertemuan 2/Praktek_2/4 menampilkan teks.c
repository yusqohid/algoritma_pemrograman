/* 	Nama File		: latihan3D.c
    Programmer		: M. Yusqo Hidayatulhaq/24343058
    Tgl. pembuatan	: 13/09/2024
    Deskripsi		: program menampilkan teks
*/

#include <stdio.h>

int main() {
    char text[100];

    printf("Masukkan beberapa baris teks :\n");

    // Membaca beberapa baris teks dengan gets()
    fgets(text, sizeof(text), stdin);

    printf("\nAnda memasukkan teks berikut:\n");

    // Menampilkan teks dengan puts()
    puts(text);

    return 0;
}
