#include<stdio.h>

int main() {
    float speed ;
    int troi_mua = 1; // 1: trời mưa

    printf("Moi nhap toc do cua xe (km/h): ");
    scanf("%f", &speed);

    if(speed <= 60.0f) {
        printf("Toc do an toan\n");
    }
    else if (speed <= 90.0f) {
        printf( "Canh bao: Can giam toc do xe\n");
    }
    else {
        printf("Nguy hiem\n");

    if(troi_mua) {
        printf("Co nguy co truot banh\n");
    }  
    }

    return 0;
}