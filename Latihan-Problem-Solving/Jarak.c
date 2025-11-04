#include <stdio.h>

int main() {
    
    float s, t, v;
    
    printf("Masukkan kecepatan mobil: ");
    scanf("%f", &v);
    printf("Masukkan waktu tempuh mobil: ");
    scanf("%f", &t);
    
    s = v * t;
    printf("Jarak kota A ke kota B yang ditempuh mobil = %0.2f km/jam", s);

    return 0;
}
