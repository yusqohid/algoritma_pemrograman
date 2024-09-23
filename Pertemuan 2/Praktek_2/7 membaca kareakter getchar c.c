/* 	Nama File		: latihan3a.c
    Programmer		: M. Yusqo Hidayatulhaq/24343058
    Tgl. pembuatan	: 13/09/2024
    Deskripsi		: program melakukan penghitungan cicilan kredit
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100]; // Buffer untuk menyimpan input

    double harga, hutang, bunga, cicilan, uangMuka, sisa, pokok;
    int bulan, kaliKe;

    printf("\nMenampilkan Penghitungan Cicilan Kredit\n");
    printf("===========================================\n\n");
    printf("Nama    : M Yusqo Hidayatulhaq\n");
    printf("NIM     : 24343058\n");
    printf("-------------------------------------------\n");

    // Input harga barang
    printf("Masukkan harga barang        : ");
    fgets(input, sizeof(input), stdin);
    harga = atof(input); // Mengubah teks menjadi double

    // Input uang muka
    printf("Masukkan besar uang muka      : ");
    fgets(input, sizeof(input), stdin);
    uangMuka = atof(input); // Mengubah teks menjadi double

    // Input jumlah bulan kredit
    printf("Masukkan jumlah bulan kredit  : ");
    fgets(input, sizeof(input), stdin);
    bulan = atoi(input); // Mengubah teks menjadi integer

    // Input cicilan kali ke berapa
    printf("Masukkan cicilan kali ke berapa: ");
    fgets(input, sizeof(input), stdin);
    kaliKe = atoi(input); // Mengubah teks menjadi integer

    // Menghitung pokok hutang
    hutang = harga - uangMuka;

    // Menghitung bunga per bulan
    bunga = (0.09 * hutang) / 12;

    // Menghitung pokok bulanan
    pokok = hutang / bulan;

    // Menghitung besar cicilan per bulan
    cicilan = pokok + bunga;

    // Menghitung sisa hutang
    sisa = hutang - pokok * kaliKe;

    // Menampilkan informasi dengan printf
    printf("\nHarga Barang               : Rp. %.2f\n", harga);
    printf("Uang Muka                    : Rp. %.2f\n", uangMuka);
    printf("Banyaknya bulan cicilan      : %d kali cicilan\n", bulan);
    printf("Pokok Hutang                 : Rp. %.2f\n", hutang);
    printf("Besar bunga bulanan          : Rp. %.2f\n", bunga);
    printf("Besar Cicilan per bulan      : Rp. %.2f\n", cicilan);
    printf("Cicilan ke-                  : %d\n", kaliKe);
    printf("Sisa Pokok Hutang            : Rp. %.2f\n", sisa);

    return 0;
}
