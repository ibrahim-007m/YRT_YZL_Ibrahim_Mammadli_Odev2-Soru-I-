#include <stdio.h>

int main() {
    int N;
    int secim;

    printf("Matris boyutunu giriniz (N): ");
    scanf("%d", &N);

    int matris[N][N];
    int donmus[N][N];

    printf("Matrisi giriniz:\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &matris[i][j]);
        }
    }

    printf("Sola dondurmek icin 1, saga dondurmek icin 2 giriniz: ");
    scanf("%d", &secim);

    if(secim == 1) {
        // Sola döndürme
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                donmus[N - 1 - j][i] = matris[i][j];
            }
        }
    } 
    else if(secim == 2) {
        // Sağa döndürme
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                donmus[j][N - 1 - i] = matris[i][j];
            }
        }
    } 
    else {
        printf("Hatali secim!\n");
        return 0;
    }

    printf("\nDonmus Matris:\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%d ", donmus[i][j]);
        }
        printf("\n");
    }

    return 0;
}
