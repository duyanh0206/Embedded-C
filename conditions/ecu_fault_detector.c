#include<stdio.h>

int main(){
    float nhiet_do = 80.0f; // nhiệt độ của ECU
    float dien_ap = 13.2f; // điện áp của ECU
    int den_pha = 0; // 0 la hong, 1 la hoat dong
    int coloi = 0;

    if(nhiet_do > 90.0f) {
        printf(" Qua nhiet\n");
        coloi = 1;
    }
    if(dien_ap < 11.5f) {
        printf("Loi: ac quy\n");
        coloi = 1;
    }
    if(den_pha == 0) {
        printf("Canh bao: den hong\n");
        coloi = 1;
    }
    if(coloi == 0) {
        printf("He thong binh thuong\n");
    }




    return 0;
}