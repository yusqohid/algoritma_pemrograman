/*
Nama File       : tugas1_no1.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 02/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    #define PAJAK 0.15
    
    double totalBelanja, totalPajak, totalPembayaran;
    //judul
    printf ("Program untuk menghitung biaya pajak dan total belanja\n");
    printf ("=======================================================\n\n\n");
    
    // input nilai belanja
    printf ("Masukkan total belanja: \n");
    scanf ("%lf", &totalBelanja);
    
    // hitung besar pajak belanja
    totalPajak = PAJAK * totalBelanja;
    
    // hitung total pembayaran
    totalPembayaran = totalPajak + totalBelanja;
    
    // tampilkan informasi
    printf ("Total Belanja		: Rp. %0.2lf\n", totalBelanja);
    printf ("Pajak			: %0.2lf\n", PAJAK);
    printf ("Total Pajak		: Rp. %0.2lf\n", totalPajak);
    printf ("Total Pembayaran	: Rp. %0.2lf\n", totalPembayaran);
    
    return 0; 
}
