/*
Nama File       : tugas2 no8.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 12/09/2024
Deskripsi		: Tugas 2 Algoritma & Pemrograman - 8.	Program untuk Menghitung nilai total dan persentase penjualan
*/

#include <stdio.h>

int main() {

    const float HARGA_A = 50000;
    const float HARGA_B = 30000;
    const float HARGA_C = 20000;
    float jumlahA, jumlahB, jumlahC, totalPendapatan, persentaseA, persentaseB, persentaseC;

    // Membaca jumlah penjualan untuk setiap produk
    printf("Masukkan jumlah penjualan produk A: ");
    scanf("%f", &jumlahA);
    printf("Masukkan jumlah penjualan produk B: ");
    scanf("%f", &jumlahB);
    printf("Masukkan jumlah penjualan produk C: ");
    scanf("%f", &jumlahC);

    // Menghitung total pendapatan
    totalPendapatan = (jumlahA * HARGA_A) + (jumlahB * HARGA_B) + (jumlahC * HARGA_C);

    // Menghitung persentase kontribusi tiap produk
    persentaseA = (jumlahA * HARGA_A) / totalPendapatan * 100;
    persentaseB = (jumlahB * HARGA_B) / totalPendapatan * 100;
    persentaseC = (jumlahC * HARGA_C) / totalPendapatan * 100;

    // Menampilkan total pendapatan dan persentase kontribusi
    printf("Total Pendapatan: %.2f\n", totalPendapatan);
    printf("Persentase Produk A: %.2f%%\n", persentaseA);
    printf("Persentase Produk B: %.2f%%\n", persentaseB);
    printf("Persentase Produk C: %.2f%%\n", persentaseC);

    return 0;
}
