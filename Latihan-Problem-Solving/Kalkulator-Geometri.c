#include <stdio.h>
#include <math.h>

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

int main() {
    
    printf("| KALKULATOR GEOMETRI |\n");

    printf("\n--------------------------------------------------------------\n");

    printf("\nHanya menerima nilai desimal.\n");
    printf("Isi dengan 0 (nol) jika isian bukan yang dimaksud.\n");
    
    printf("\n--------------------------------------------------------------\n");
    
    int a, b;
    int token = 3;
    int lanjut = 1;
    float d, k, l, l1, ls, N, r, s, s1, s2, s3, s4, t, v, v2;
    
    while (lanjut){
        printf("\nSilahkan pilih apa yang akan Anda hitung:\n");
        printf("1. Geometri 2 Dimensi\n");
        printf("2. Geometri 3 Dimensi\n");
        printf("Pilihan Anda: ");
        scanf("%d", &a);
        
        if (a != 1 && a != 2) {
            token--;
            printf("\nPilihan tidak valid! Sisa kesempatan: %d\n", token);
    
            if (token == 0) {
                printf("\n!! Anda sudah 3x salah !! Program di-reset sekarang.\n");
                token = 3;  // reset token kembali menjadi 3
                continue;   // restart dari awal
            }
    
            continue;
        }
        
        printf("\n--------------------------------------------------------------\n");
        
        if(a == 1){
            printf("\nSilahkan pilih apa yang akan Anda hitung:\n");
            printf("1. Segitiga\n");
            printf("2. Persegi / Bujur Sangkar\n");
            printf("3. Segi-N\n");
            printf("4. Belah Ketupat\n");
            printf("5. Jajar Genjang\n");
            printf("6. Elipse\n");
            printf("7. Lingkaran\n");
            printf("Pilihan Anda: ");
            scanf("%d", &b);
            
            printf("\n--------------------------------------------------------------\n");
            
            if(b == 1){
                printf("\nCiri:\n");
                printf("- Memiliki tiga sisi; dan\n");
                printf("- Luas = Alas x Tinggi.\n");
                
                printf("\nMasukkan Sisi 1 (Alas)    : ");
                scanf("%f", &s1);
                printf("Masukkan Sisi 2           : ");
                scanf("%f", &s2);
                printf("Masukkan Sisi 3           : ");
                scanf("%f", &s3);
                printf("Masukkan Tinggi : ");
                scanf("%f", &t);
                
                if(s1 < 0 || s2 < 0 || s3 < 0 || t < 0){
                    printf("\nJangan ngaco, kocak.");
                } else{
                    k = s1 + s2 + s3;
                    printf("Keliling = %0.2f", k);
                    l = 0.5 * s1 * t;
                    printf("\nLuas = %0.2f", l);
                }
            } else if (b == 2){
                printf("\nCiri:\n");
                printf("- Memiliki empat sisi yang sama panjang;\n");
                printf("- Memiliki empat sudut siku-siku yang sama besar (90 derajat); dan\n");
                printf("- Semua sisinya saling tegak lurus.\n");
                
                printf("\nMasukkan Sisi : ");
                scanf("%f", &s1);
                
                if (s1 > 0){
                    k = 4 * s1;
                    printf("Keliling = %0.2f", k);
                    l = s1 * s1;
                    printf("\nLuas = %0.2f", l);
                } else if (s1 == 0){
                    printf("atau");
                    printf("\nMasukkan luas: ");
                    scanf("%f", &l);
                    
                    if (l > 0){
                        s1 = sqrt(l);
                        printf("Sisi = %0.2f", s1);
                    } else{
                        printf("\nJangan ngaco, kocak.");
                    }
                } else{
                    printf("\nJangan ngaco, kocak.");
                }
            } else if(b == 3){
                printf("\nCiri:\n");
                printf("- Memiliki N sisi yang sama panjang; dan\n");
                printf("- Memiliki N sudut yang sama besar.\n");
                
                printf("\nMasukkan jumlah sisi  : ");
                scanf("%f", &N);
                printf("Masukkan sisi         : ");
                scanf("%f", &s1);
                
                if(N > 0 && s1 > 0){
                    k = N * s1;
                    printf("Keliling = %0.2f", k);
                    l = pow(s1, N);
                    printf("\nLuas = %0.2f", l);
                } else{
                    printf("\nJangan ngaco, kocak.");
                }
            } else if (b == 4){
                printf("\nCiri:\n");
                printf("- Memiliki empat sisi yang sama panjang;\n");
                printf("- Memiliki dua sudut yang sama besar berhadapan; dan\n");
                printf("- Memiliki dua diagonal tegak lurus yang saling berpotongan.\n");
                
                printf("\nMasukkan sisi     : ");
                scanf("%f", &s1);
                
                if(s1 > 0){
                    k = 4 * s1;
                    printf("Keliling = %0.2f", k);
                } else if(s1 == 0){
                    printf("atau");
                    printf("\nMasukkan tinggi   : ");
                    scanf("%f", &t);
                    printf("Masukkan alas     : ");
                    scanf("%f", &d);
                    
                    if(t > 0 && d > 0){
                        l = (t * d) / 2;
                        printf("Luas = %0.2f", l);
                    } else{
                        printf("\nJangan ngaco, kocak.");
                    }
                } else{
                    printf("\nJangan ngaco, kocak.");
                }
            } else if (b == 5){
                printf("\nCiri:\n");
                printf("- Memiliki sisi berhadapan yang kongruen;\n");
                printf("- Memiliki sudut berhadapan yang kongruen;\n");
                printf("- Sudut-sudut yang berurutan saling bersuplemen; dan\n");
                printf("- Diagonal membagi jajar genjang menjadi dua segitiga yang kongruen.\n");
                
                printf("\nN.b. Hitung manual terlebih dahulu menggunakan teorema phytagoras jika tinggi belum ditemukan.\n");
                
                printf("\nMasukkan panjang / alas   : ");
                scanf("%f", &s1);
                
                if(s1>0){
                    printf("Masukkan tinggi           : ");
                    scanf("%f", &t);
                    
                    if(t > 0){
                        l = s1 * t;
                        printf("Luas = %0.2f", l);
                    } else if (t == 0){
                        printf("atau\n");
                        printf("Masukkan lebar            : ");
                        scanf("%f", &s2);
                        
                        k = (2*s1)+(2*s2);
                        printf("Keliling = %0.2f", k);
                    } else{
                        printf("\nJangan ngaco, kocak.");
                    }
                } else{
                    printf("\nJangan ngaco, kocak.");
                }
            } else if (b == 6){
                printf("\nCiri:\n");
                printf("- Lingkaran yang dipanjangkan ke satu arah.\n");
                
                printf("\nMasukkan Sumbu Semi Mayor: ");
                scanf("%f", &s1);
                printf("Masukkan Sumbu Semi Minor: ");
                scanf("%f", &s2);
                
                if(s1 > 0 && s2 > 0){
                    l = M_PI * s1 * s2;
                    printf("Luas = %0.2f", l);
                    
                    k = (2 * M_PI) * (sqrt((pow(s1, 2) + pow(s2, 2)) / 2));
                    printf("\nKeliling = %0.2f", k);
                } else{
                    printf("\nJangan ngaco, kocak.");
                }
            } else if (b == 7){
                printf("\nCiri:\n");
                printf("- Memiliki jarak yang sama dari suatu titik tertentu.\n");
                
                printf("\nMasukkan Jari-Jari: ");
                scanf("%f", &s1);
                
                if(s1 > 0){
                    l = M_PI * pow(s1, 2);
                    printf("Luas = %0.2f", l);
                    
                    k = 2 * M_PI * s1;
                    printf("\nKeliling = %0.2f", k);
                } else{
                    printf("\nJangan ngaco, kocak.");
                }
            } else{
                printf("\nGaada pilihan itu, kocak.\n");
            }
        } else if(a == 2){
            printf("\nSilahkan pilih apa yang akan Anda hitung:\n");
            printf("1. Kubus\n");
            printf("2. Kerucut\n");
            printf("3. Tabung\n");
            printf("4. Bola\n");
            printf("Pilihan Anda: ");
            scanf("%d", &b);
            
            printf("\n--------------------------------------------------------------\n");
            
            if(b == 1){
                printf("\nCiri:\n");
                printf("- Memiliki 8 titik sudut\n");
                printf("- Memiliki 6 bidang sisi dengan bentuk persegi\n");
                printf("- Keenam sisi kubus memiliki ukuran panjang dan luas yang sama\n");
                printf("- Memiliki 12 rusuk yang sama panjang\n");
                printf("- Semua sudutnya berbentuk siku-siku\n");
                printf("- Memiliki 12 sisi diagonal dengan ukuran panjang yang sama\n");
                printf("- Memiliki 4 diagonal ruang dengan ukuran panjang yang sama\n");
                printf("- Memiliki 6 bidang diagonal berbentuk persegi panjang.\n");
                
                printf("\nMasukkan Sisi: ");
                scanf("%f", &s1);
                
                if(s1 > 0){
                    l = 6 * pow(s1, 2);
                    printf("Luas = %0.2f", l);
                    
                    v = pow(s1, 3);
                    printf("\nVolume = %0.2f", v);
                } else{
                    printf("\nJangan ngaco, kocak.");
                }
            } else if (b == 2){
                printf("\nCiri:\n");
                printf("- Memiliki alas berbentuk lingkaran\n");
                printf("- Memiliki satu titik puncak\n");
                
                printf("\nMasukkan Jari-Jari       : ");
                scanf("%f", &r);
                printf("Masukkan Tinggi          : ");
                scanf("%f", &t);
                
                if(t > 0 && r > 0){
                    s = sqrt(pow(r, 2) + pow(t, 2));
                    printf("\nGaris Pelukis = %0.2f", s);
                    
                    l = (M_PI * r) * (r + s);
                    printf("\nLuas = %0.2f", l);
                    
                    v = (M_PI * pow(r, 2) * t) / 3;
                    printf("\nVolume = %0.2f", v);
                } else if (t == 0){
                    s = 0;
                    
                    printf("Masukkan Volume          : ");
                    scanf("%f", &v);
                    
                    if(v > 0){
                        if(r == 0){
                            v2 = pow(0.5, 3) * v;
                            printf("\nSetengah Volume Bagian Atas Hasil Potongan Horizontal = %0.2f", v2);
                        } else{
                            t = (3 * v) / (M_PI * pow(r, 2));
                            printf("\nTinggi = %0.2f", t);
                        }
                    } else if (v == 0){
                        printf("Masukkan Luas Permukaan  : ");
                        scanf("%f", &l);
                        
                        if(l > 0){
                            s = (l / (M_PI * r)) - r;
                            printf("\nPanjang Garis Pelukis = %0.2f", s);
                        } else if (l == 0){
                            printf("Masukkan Garis Pelukis   : ");
                            scanf("%f", &s);
                            
                            t = sqrt(pow(s, 2) - pow(r, 2));
                            v = (M_PI * pow(r, 2) * t) / 3;
                            printf("\nVolume = %0.2f", v);
                        } else{
                            printf("\nJangan ngaco, kocak.");
                        }
                    } else{
                        printf("\nJangan ngaco, kocak.");
                    }
                } else if(r == 0){
                    printf("\nMasukkan Volume          : ");
                    scanf("%f", &v);
                    
                    r = sqrt((3 * v) / (M_PI * t));
                    printf("\nJari-jari = %0.2f", r);
                } else{
                    printf("\n Jangan ngaco, kocak.");
                }
                
            } else if (b == 3){
                printf("\nCiri:\n");
                printf("- Memiliki dua alas berbentuk lingkaran\n");
                
                printf("\nMasukkan Jari-Jari       : ");
                scanf("%f", &r);
                printf("Masukkan Tinggi          : ");
                scanf("%f", &t);            
                
                if (r > 0 && t > 0){
                    l = (2 * M_PI * pow(r, 2)) + (2 * M_PI * r * t);
                    printf("\nLuas              = %0.2f", l);
                    
                    l1 = (M_PI * pow(r, 2)) + (2 * M_PI * r * t);
                    printf("\nLuas Satu Alas    = %0.2f", l1);
                    
                    ls = 2 * M_PI * r * t;
                    printf("\nLuas Selimut      = %0.2f", ls);
                    
                    v = M_PI * pow(r, 2) * t;
                    printf("\nVolume            = %0.2f", v);
                } else if(r == 0){
                    printf("Masukkan volume          : ");
                    scanf("%f", &v);
                    
                    r = sqrt(v / (M_PI * t));
                    printf("\nJari-jari = %0.2f", r);
                }
                    else if (t == 0){
                    printf("Masukkan volume          : ");
                    scanf("%f", &v);
                    
                    if (v > 0){
                        t = v / (M_PI * pow(r, 2));
                        printf("\nTinggi = %0.2f", t);
                    } else if (v == 0){
                        printf("Masukkan Luas Selimut    : ");
                        scanf("%f", &ls);
                        
                        t = ls / (2 * M_PI * r);
                        printf("\nTinggi            = %0.2f", t);
                        
                        l = (2 * M_PI * pow(r, 2)) + (2 * M_PI * r * t);
                        printf("\nLuas              = %0.2f", l);
                    }
                } else{
                    printf("\nJangan ngaco, kocak.");
                }
            } else if (b == 4){
                printf("\nCiri:\n");
                printf("- Semua titik permukaan berjarak sama dari titik pusat\n");
                printf("- Tidak memiliki sisi dan sudut\n");
                
                printf("\nMasukkan Jari-Jari       : ");
                scanf("%f", &r);
                
                if (r > 0){
                    l = 4 * M_PI * pow(r, 2);
                    printf("\nLuas      = %0.2f", l);
                
                    v = ((float)4/3) * M_PI * pow(r, 3);
                    printf("\nVolume    = %0.2f", v);
                } else if(r == 0){
                    printf("Masukkan Luas            : ");
                    scanf("%f", &l);
                    
                    if(l > 0){
                        r = sqrt(l / (4 * M_PI));
                        printf("\nJari-jari = %0.2f", r); 
                    } else if (l == 0){
                        printf("Masukkan Volume          : ");
                        scanf("%f", &v);
                        
                        r = cbrt(v / (((float)4/3) * M_PI));
                        printf("\nJari-jari = %0.2f", r);
                    } else {
                        printf("Jangan ngaco, kocak.");
                    }
                } else{
                    printf("\nJangan ngaco, kocak.");
                }
            } else{
                printf("\nGaada pilihan itu, kocak.\n");
            }
        } else{
            printf("\nGaada pilihan itu, kocak.\n");
        }
        
        printf("\n--------------------------------------------------------------\n");
        
        printf("\nHitung lagi? (1 = Ya, 0 = Tidak): ");
        scanf("%d", &lanjut);
    
        if (lanjut != 1) {
            printf("\nProgram selesai. Terima kasih!\n");
            break;
        }
    }
    return 0;
}
