#include<stdio.h>

int main(void) {
    char ten[] = "le duy anh";
    int tuoi = 23;
    float chieu_cao = 1.75f;
    double can_nang = 53.5;

    printf("Ten: %s\n", ten);
    printf("Tuoi: %d\n", tuoi);
    printf("Chieu cao: %.2f\n", chieu_cao);
    printf("Can nang: %.2lf\n", can_nang);
    printf("ten: %s, tuoi: %d, chieu cao: %.2f, can nang: %.2lf\n", ten, tuoi, chieu_cao, can_nang);

    return 0;

}