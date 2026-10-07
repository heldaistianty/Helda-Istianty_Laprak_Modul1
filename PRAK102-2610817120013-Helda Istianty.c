#include <stdio.h>

int main () {
    //Ini
    float a = 4;
    float b = 8;
    float c = 3;

    //Menghitung kombinasi perkalian dan pembagian 
    float hasil = a * b / c;

    //Menampilkan output
    printf("Variabel a bernilai %.0\n", a);
    printf("Variabel b bernilai %.0\n", b); 
    printf("Variabel c bernilai %.0\n", c);
    printf("Hasil dari a dikali b dibagi c adalah %.6f\n", hasil);

    return 0;
}