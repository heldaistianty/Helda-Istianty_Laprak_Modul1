#include <stdio.h>

int main() {
    // Inisialisasi variabel
    float putaran = 5;
    float jarak = 14;
    
    // Nilai phi
    float pi = 3.141592653589793;

    // Menghitung keliling dan jari-jari
    float keliling = jarak / putaran;
    float r = keliling / (2 * pi);

    // Menampilkan output
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n", jarak);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);

    return 0;
}