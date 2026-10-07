#include <stdio.h>

int main() {
    // Inisialisasi variabel
    int pasukan_yz = 958730;
    int pahlawan = 5;

    // Menghitung pembagian pasukan
    int pasukan_per_pahlawan = pasukan_yz / pahlawan;

    // Menampilkan output
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan_yz);
    printf("Jumlah pahlawan = %d\n", pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukan_per_pahlawan);

    return 0;
}