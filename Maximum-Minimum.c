#include <stdio.h>

int main() {
    
    int N, i, j, max, min, sort;
    int countmax = 0, countmin = 0;
    float sum = 0;
    float mean, median;
    
    printf("Masukkan jumlah data: ");
    scanf("%d", &N);
    
    int Tab[N];
    for(i = 0; i < N; i++){
        printf("Data ke-%d: ", i+1);
        scanf("%d", &Tab[i]);
    }
    
    printf("\n");
    for(i = 0; i < N; i++){
        printf("Tab[%d] = %d\n", i, Tab[i]);
        sum += Tab[i];
    }
    
    max = Tab[0];
    min = Tab[0];
    for(i = 1; i < N; i++){
        if(Tab[i] > max){
            max = Tab[i];
        }
        if(Tab[i] < min){
            min = Tab[i];
        }
    }
    printf("\nNilai Max = %d", max);
    printf("\nNilai Min = %d", min);
    
    mean = sum/N;
    printf("\nNilai Rata-Rata = %0.2f", mean);
    
    //Median adalah nilai tengah dari tabel data yang telah diurutkan
    for(i = 0; i < N - 1; i++){
        for(j = i + 1; j < N; j++){
            if(Tab[i] > Tab[j]){
                sort = Tab[i];
                Tab[i] = Tab[j];
                Tab[j] = sort;
            }
        }
    }
    if(N % 2 == 0){
        median = (Tab[N/2-1] + Tab[N/2]) / 2.0;
    } else{
        median = Tab[N/2];
    }
    printf("\nNilai Median = %0.2f", median);
    
    for(i = 0; i < N; i++){
        if(Tab[i] == max){
            countmax++;
        } 
        if(Tab[i] == min){
            countmin++;
        }
    }
    printf("\nJumlah Nilai Maksimum = %d", countmax);
    printf("\nJumlah Nilai Minimum = %d", countmin);
    
    return 0;
}
