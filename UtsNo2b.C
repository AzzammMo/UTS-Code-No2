#include <stdio.h>
#define PHI 3.14159  // Konstanta untuk nilai Phi

// Fungsi untuk menghitung luas lingkaran
double hitungLuasLingkaran(double jariJari) {
    return PHI * jariJari * jariJari;
}

// Fungsi untuk menghitung luas persegi panjang
double hitungLuasPersegiPanjang(double panjang, double lebar) {
    return panjang * lebar;
}

// Fungsi untuk menghitung luas permukaan tabung
double hitungLuasPermukaanTabung(double jariJari, double tinggi) {
    double luasLingkaran = hitungLuasLingkaran(jariJari);  // Luas lingkaran (2 lingkaran pada tabung)
    double luasSelimut = 2 * PHI * jariJari * tinggi;      // Luas selimut tabung
    return (2 * luasLingkaran) + luasSelimut;              // Total luas permukaan tabung
}

int main() {
    int pilihan;
    double jariJari, tinggi;

    while (1) {
        // Tampilan awal
        printf("============================================\n");
        printf("         APLIKASI PENGHITUNG LUAS\n");
        printf("============================================\n");
        printf("Pilih opsi perhitungan yang Anda butuhkan:\n");
        printf("1. Hitung Luas Lingkaran\n");
        printf("2. Hitung Luas Persegi Panjang\n");
        printf("3. Hitung Luas Permukaan Tabung\n");
        printf("4. Keluar\n");
        printf("============================================\n");
        printf("Masukkan pilihan Anda: ");
        scanf("%d", &pilihan);

        if (pilihan == 4) {
            printf("Terima kasih telah menggunakan aplikasi ini!\n");
            break;
        }

        switch (pilihan) {
            case 1:
                // Hitung luas lingkaran
                printf("Masukkan jari-jari lingkaran: ");
                scanf("%lf", &jariJari);
                printf("Luas Lingkaran: %.2f\n", hitungLuasLingkaran(jariJari));
                break;

            case 2:
                // Hitung luas persegi panjang
                printf("Masukkan panjang persegi panjang: ");
                double panjang, lebar;
                scanf("%lf", &panjang);
                printf("Masukkan lebar persegi panjang: ");
                scanf("%lf", &lebar);
                printf("Luas Persegi Panjang: %.2f\n", hitungLuasPersegiPanjang(panjang, lebar));
                break;

            case 3:
                // Hitung luas permukaan tabung
                printf("Masukkan jari-jari tabung: ");
                scanf("%lf", &jariJari);
                printf("Masukkan tinggi tabung: ");
                scanf("%lf", &tinggi);
                printf("Luas Permukaan Tabung: %.2f\n", hitungLuasPermukaanTabung(jariJari, tinggi));
                break;

            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
                break;
        }
        printf("\n");  // Menambahkan baris kosong untuk memperjelas tampilan
    }

    return 0;
}
