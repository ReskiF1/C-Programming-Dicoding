#include <stdio.h>

int main() {
    
    int i, j, N, X, countX, lim, Max, sort;
    
    printf("Masukkan jumlah data: ");
    scanf("%d", &N);
    int Tab[N];
    for(i=0;i<N;i++){
        printf("Data ke-%d: ", i+1);
        scanf("%d", &Tab[i]);
    }
    
    printf("\n");
    for(i=0;i<N;i++){
        printf("Tab[%d] = %d\n", i, Tab[i]);
    }
    
    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            if(Tab[i]>Tab[j]){
                sort=Tab[i];
                Tab[i]=Tab[j];
                Tab[j]=sort;
            }
        }
    }
    
    printf("\n");
    for(i=0;i<N;i++){
        printf("Tab[%d] terurut = %d\n", i, Tab[i]);
    }
    
    printf("\nMasukkan batas data yang akan Anda cari: ");
    scanf("%d", &lim);

    printf("\n");
    for(i=0;i<lim;i++){
        printf("Tab[%d] terurut terbatas = %d\n", i, Tab[i]);
    }
    
    printf("\nMasukkan nilai X yang akan Anda cari: ");
    scanf("%d", &X);
    
    i = 0;
    while((Tab[i]!=X) && (i<lim)){
        i++;
    }
    
    countX=0;
    if((Tab[i]==X) && (i<lim)){
        printf("Indeks bernilai X ada di:\n");
        for(i=0;i<lim;i++){
            if(Tab[i]==X){
                printf("Tab[%d]\n", i);
                countX++;
            }
        }
    } else {
        printf("Nilai tidak ditemukan");
    }
    
    Max=Tab[0];
    for(i=0;i<lim;i++){
        if(Tab[i]>Max){
            Max=Tab[i];
        }
    }
    
    i = 0;
    while((Tab[i]!=Max) && (i<lim)){
        i++;
    }
    
    if((Tab[i]==Max) && (i<lim)){
        printf("\nIndeks bernilai Max ada di:\n");
        for(i=0;i<lim;i++){
            if(Tab[i]==Max){
                printf("Tab[%d]\n", i);
            }
        }
    } else{
        printf("\nNilai tidak ditemukan");
    }
    
    printf("\nJumlah nilai X = %d", countX);
    
    return 0;
}
