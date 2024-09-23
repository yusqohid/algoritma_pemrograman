/*
Nama File       : tugas1_no7.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 04/09/2024
Deskripsi		: Tugas 1 Algoritma & Pemrograman - 7. Program untuk Menentukan nilai resistor pengganti
*/

#include <stdio.h>

int main() {
    int n, i, pilihan;
    float resistor, total = 0;

	printf("Program untuk Menentukan nilai resistor pengganti\n");
	printf("--------------------------------------------------\n\n");
    printf("Masukkan jumlah resistor: ");
    scanf("%d", &n);

    
    printf("1. Seri\n2. Paralel\n");
    printf("Pilih jenis rangkaian :\n ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {  // Rangkaian seri
        for (i = 1; i <= n; i++) {
            printf("Masukkan nilai resistor ke-%d (ohm): ", i);
            scanf("%f", &resistor);
            total += resistor;
        }
        printf("Nilai resistor pengganti rangkaian seri: %.2f ohm\n", total);
    } 
    else if (pilihan == 2) {  // Rangkaian paralel
        for (i = 1; i <= n; i++) {
            printf("Masukkan nilai resistor ke-%d (ohm): ", i);
            scanf("%f", &resistor);
            total += 1 / resistor;
        }
        printf("Nilai resistor pengganti rangkaian paralel: %.2f ohm\n", 1 / total);
    } 
    else {
        printf("Pilihan tidak valid.\n");
    }

    return 0;
}

