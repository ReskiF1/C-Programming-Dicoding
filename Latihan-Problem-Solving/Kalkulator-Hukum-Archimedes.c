#include <stdio.h>

int main() {
    
    printf("| KALKULATOR FLUIDA STATUS (HUKUM ARCHIMEDES) |\n");

    printf("\n--------------------------------------------------------------\n");
    
    printf("\n[ SEKILAS MENGENAI HUKUM ARCHIMEDES ]\n");
    
    printf("\nJIKA Benda dicelupkan ke Zat Cair\n");
    printf("MAKA Benda mengalami Gaya ke Atas\n");
    printf("YANG SAMA DENGAN\n");
    printf("Berat Zat Cair yang Dipindahkan Benda tersebut\n");
    
    printf("\natau\n");
    
    printf("\nFa = WfD\n");
    printf("WfD = MfD * g dimana MfD = pf * vfD sehingga\n");
    printf("Fa = pf * vfD * g\n");
    
    printf("\ndengan:\n");
    printf("Fa  = Gaya Apung (N)\n");
    printf("WfD = Berat Zat Cair yang Dipindahkan (N)\n");
    printf("MfD = Massa Zat Cair yang Dipindahkan (kg)\n");
    printf("g   = Gravitasi (m/s^2)\n");
    printf("pf  = Massa Jenis Zat Cair (kg/m^3)\n");
    printf("vfD = Volume Zat Cair yang Dipindahkan (m^3)\n");
    
    printf("\n--------------------------------------------------------------\n");

    float Fa, g, MfD, pf, pb, tb, tpb, vfD, vb, Wu, Wf;
    int a, b;
    
    printf("\nSilahkan pilih apa yang akan Anda hitung:\n");
    printf("1. (Fa)     Gaya Apung\n");
    printf("2. (pf)     Massa Jenis Zat Cair\n");
    printf("3. (g)      Gravitasi\n");
    printf("4. (vfD)    Volume Zat Cair yang Dipindahkan\n");
    printf("5. Gaya Seimbang\n");
    printf("6. Menghitung dari Berat Benda\n");
    printf("Pilihan Anda: ");
    scanf("%d", &a);
    
    printf("\n--------------------------------------------------------------\n");
    
    printf("\nHanya menerima nilai desimal.\n");
    
    printf("\n--------------------------------------------------------------\n");
    
    if(a == 1){
        printf("\nFa = pf * vfD * g\n");
        
        printf("\nMasukkan pf   (kg/m^3)    : ");
        scanf("%f", &pf);
        printf("Masukkan vfD  (m^3)       : ");
        scanf("%f", &vfD);
        printf("Masukkan g    (m/s^2)     : ");
        scanf("%f", &g);
    
        Fa = pf * vfD * g;
        printf("Fa = %0.2f N", Fa);
    } else if (a == 2){
        printf("\npf = Fa / (vfD * g)\n");
        
        printf("\nMasukkan Fa   (N)     : ");
        scanf("%f", &Fa);
        printf("Masukkan VfD    (m^3)   : ");
        scanf("%f", &vfD);
        printf("Masukkan g      (m/s^2) : ");
        scanf("%f", &g);
        
        pf = Fa / (vfD * g);
        printf("pf = %0.2f kg/m^3", pf);
    } else if(a == 3){
        printf("\nvfD = Fa / (pf * g)\n");
        
        printf("\nMasukkan Fa   (N)         : ");
        scanf("%f", &Fa);
        printf("\nMasukkan pf  (kg/m^3)    : ");
        scanf("%f", &pf);
        printf("Masukkan g      (m/s^2)     : ");
        scanf("%f", &g);
            
        vfD = Fa / (pf * g);
        printf("vfD = %0.2f m^3", vfD);
    } else if (a == 4){
        printf("\ng = Fa / (pf * vfD)\n");
        
        printf("\nMasukkan Fa   (N)         : ");
        scanf("%f", &Fa);
        printf("\nMasukkan pf   (kg/m^3)    : ");
        scanf("%f", &pf);
        printf("Masukkan vfD    (m^3)       : ");
        scanf("%f", &vfD);
            
        g = Fa / (pf * vfD);
        printf("g = %0.2f m/s^2", g);
    } else if (a == 5){
        printf("\npf * vfD = pb * vb\n");
        
        printf("\ndengan:\n");
        printf("pb  = Massa Jenis Benda (kg/m^3)\n");
        printf("vb  = Volume Benda (m^3)\n");
        
        printf("\nSilahkan pilih apa yang akan Anda hitung:\n");
        printf("1. (pf)     Massa Jenis Zat Cair\n");
        printf("2. (vfD)    Volume Zat Cair yang Dipindahkan\n");
        printf("3. (pb)     Massa Jenis Benda\n");
        printf("4. (vb)     Volume Benda\n");
        printf("5. (tb)     Tinggi Benda\n");
        printf("Pilihan Anda: ");
        scanf("%d", &b);
        printf("\n--------------------------------------------------------------\n");
        
        if (b == 1){
            printf("\npf = (pb * vb) / vfD\n");
            
            printf("\nMasukkan vfD  (m^3)       : ");
            scanf("%f", &vfD);
            printf("Masukkan pb   (kg/m^3)    : ");
            scanf("%f", &pb);
            printf("Masukkan vb   (m^3)       : ");
            scanf("%f", &vb);
            
            pf = (pb * vb) / vfD;
            printf("pf = %0.2f kg/m^3", pf);
        } else if(b == 2){
            printf("\nvfD = (pb * vb) / pf\n");
            
            printf("\nMasukkan pf   (kg/m^3)    : ");
            scanf("%f", &pf);
            printf("Masukkan pb     (kg/m^3)    : ");
            scanf("%f", &pb);
            printf("Masukkan vb     (m^3)       : ");
            scanf("%f", &vb);
            
            vfD = (pb * vb) / pf;
            printf("vfD = %0.2f m^3", vfD);
        } else if (b == 3){
            printf("\npb = (pf * vfD) / vb\n");
            
            printf("\nMasukkan pf   (kg/m^3)    : ");
            scanf("%f", &pf);
            printf("Masukkan vfD  (m^3)       : ");
            scanf("%f", &vfD);
            printf("Masukkan vb   (m^3)       : ");
            scanf("%f", &vb);
            
            pb = (pf * vfD) / vb;
            printf("pb = %0.2f kg/m^3", pb);
        } else if (b == 4){
            printf("\nvb = (pf * vfD) / pb\n");
            
            printf("\nMasukkan pf   (kg/m^3)    : ");
            scanf("%f", &pf);
            printf("Masukkan vfD  (m^3)       : ");
            scanf("%f", &vfD);
            printf("Masukkan pb   (kg/m^3)    : ");
            scanf("%f", &pb);
            
            vb = (pf * vfD) / pb;
            printf("vb = %0.2f m^3", vb);
        } else if(b == 5){
            printf("\ntpb = (pf * vfD = pb * vb) * tb\n");
            
            printf("\nMasukkan pf   (kg/m^3)    : ");
            scanf("%f", &pf);
            printf("Masukkan pb   (kg/m^3)    : ");
            scanf("%f", &pb);
            printf("Masukkan vb   (m^3)       : ");
            scanf("%f", &vb);
            printf("Masukkan tb   (cm)        : ");
            scanf("%f", &tb);
            
            vfD = vb - ((pb * vb) / pf);
            tpb = tb * vfD;
            printf("tpb = %0.2f cm", tpb);
        } else{
            printf("\nGaada pilihan itu, kocak.");
        }
    } else if(a == 6){
        printf("\nFa = Wu - Wf; dimana Wu = WfD\n");
        printf("Wu = Mu * g; dimana Mu = pb * vfD sehingga:\n");
        printf("pb = Mu / vfD; dimana Mu = Wu / g dan vfD = Fa / (pf * g) sehingga:\n");
        printf("pb = (Wu / g) / (Fa / (pf * g))\n");
        printf("pb = (Wu / g) * ((pf * g) / Fa)\n");
        printf("pb = (Wu * pf) / Fa\n");
        
        printf("\ndengan:\n");
        printf("pb  = Massa Jenis Benda (kg/m^3)\n");
        printf("Wu  = Berat Benda di Udara (N)");
        
        printf("\nMasukkan Wu   (N) : ");
        scanf("%f", &Wu);
        printf("Masukkan Wf   (N) : ");
        scanf("%f", &Wf);
        Fa = Wu - Wf;
        printf("Fa = %0.2f N\n", Fa);
        
        printf("\nMasukkan g    (m/s^2)     : ");
        scanf("%f", &g);
        printf("Masukkan pf   (kg/m^3)    : ");
        scanf("%f", &pf);
        
        pb = (Wu * pf) / Fa;
        printf("pb = %0.2f (kg/m^3)", pb);
    } else{
        printf("\nGaada pilihan itu, kocak.");
    }

    return 0;
}
