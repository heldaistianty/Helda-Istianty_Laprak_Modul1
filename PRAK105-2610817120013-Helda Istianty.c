#include <stdio.h>

int main() {
    // Inisialisasi variabel
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;

    // Menghitung total sisa bagi (modulo)
    int total_sisa = (a % b) + (x % y);

    // Menampilkan output
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", total_sisa);

    return 0;
}