#include <stdio.h>

int main() {
    // Inisialisasi variabel panjang sisi segitiga
    int a = 4;
    int b = 5;
    int c = 7;

    // Inisialisasi biaya pagar per meter
    int biaya_per_meter = 85000;

    // Menghitung keliling dan total biaya
    int keliling = a + b + c;
    int total_biaya = keliling * biaya_per_meter;

    // Menampilkan output
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", biaya_per_meter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", total_biaya);

    return 0;
}