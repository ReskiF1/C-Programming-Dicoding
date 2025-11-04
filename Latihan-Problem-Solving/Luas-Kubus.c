#include <math.h>       // Untuk menggunakan library pow()
#include <stdio.h>

int main() {

    float l, s;
    
    printf("Masukkan panjang sisi kubus dalam centimeter (cm): ");
    scanf("%f", &s);
    
    l = (float)(6 * pow(s, 2));
    printf("Luas permukaan kubus = %0.2f cm^2", l);

    return 0;
}
