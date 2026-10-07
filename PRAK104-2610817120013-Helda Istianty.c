#include <stdio.h>

int main() {
    // Inisialisasi harga sepatu
    int sepatu_a = 400000;
    int sepatu_b = 350000;

    // Menghitung harga setelah diskon
    int akhir_a = sepatu_a - (sepatu_a * 13 / 100);
    int akhir_b = sepatu_b - (sepatu_b * 21 / 100);

    // Menampilkan output
    printf("Harga sepatu A adalah %d\n", sepatu_a);
    printf("Harga sepatu B adalah %d\n", sepatu_b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", akhir_a);
    printf("Sepatu A mendapat diskon 21%% sehingga harganya menjadi %d\n", akhir_b);

    return 0;
}