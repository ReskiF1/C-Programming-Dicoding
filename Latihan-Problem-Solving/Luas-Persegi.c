#include <stdio.h>

int main() {
    
    // Karena persegi, maka input setiap sisi akan bernilai sama
    float l, s;
    
    printf("Masukkan sisi lantai ruangan dalam meter (m): ");
    scanf("%f", &s);
    
    l = s * s;
    printf("Luas lantai ruangan = %0.2f m^2", l);

    return 0;
}
