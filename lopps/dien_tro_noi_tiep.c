#include<stdio.h>

float tinh_tong(float *r,int n) {
    float tong = 0.0f;
    int i = 0;
    for(i = 0; i < n; i++) {
        tong += r[i];
    }
    return tong;

}

int main() {
    float r[5] = {100.f, 220.f, 150.f, 300.f, 50.f};
    int i = 0;
    float tong_dien_tro = 0.0f;
    float dien_tro_lon_nhat = r[0];
    float tinhtong = tinh_tong(r, 5); 

    for(i = 0; i < 5; i++) {
        tong_dien_tro += r[i]; // tong_dien_tro = tong_dien_tro + r[i];
        if(r[i] > dien_tro_lon_nhat) {
            dien_tro_lon_nhat = r[i];
        }
        if(r[i] >= 150.f) {
            printf("* Canh bao: dien tro cao hon 150 0hm: %.2f 0hm\n", r[i]);
        }

    }
    printf("- Tong dien tro noi tiep: %.2f 0hm\n", tong_dien_tro);
    printf("- Dien tro lon nhat: %.2f 0hm\n", dien_tro_lon_nhat);
    printf("tinhtong = %.2f 0hm\n", tinhtong);




    return 0;
}