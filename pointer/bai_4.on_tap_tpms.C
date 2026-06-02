/* Hệ thống quản lý cảm biến áp suất lốp (TPMS)
Ô tô có 4 bánh, mỗi bánh có một cảm biến đo áp suất lốp. 
Viết chương trình quản lý dữ liệu từ 4 cảm biến đọ
Dữ liệu đầu vào _ khai báo sẵn:
float ap_suat[4] = { 32.5f, 28.0f, 35.2f, 22.3f};
const char *ten_banh[4] = {"Truoc trai", "Truoc phai", "Sau trai", "Sau phai"};
Yêu cầu:
1. Viết hàm void in_trang_thai(float *arr, const char **ten, int n) 
[Truoc trai] 32.5 PSI - OK
[Truoc phai] 28.0 PSI - OK
[Sau trai] 35.2 PSI - OK
[Sau phai] 22.3 PSI - CANH BAO: Ap suat thấp!

2. Tim gia tri max,min va tinh trug binh

*/

#include <stdio.h>

void in_trang_thai(float *arr, const char **ten, int n) {
    int i = 0;
    float nguong_canh_bao = 25.0f;

    for (i = 0; i < n; i++) {
        if (*(arr + i) < nguong_canh_bao)
            printf("[%s]  %.1f PSI - CANH BAO: Ap suat thap!\n", *(ten + i), *(arr + i)); 
        else
            printf("[%s]  %.1f PSI - OK\n", *(ten + i), *(arr + i));

    }
}

void tim_banh_thap_nhat(float *arr, const char **ten, int n, float *ap_suat_min, int *vi_tri) {
    int j = 0;
    *ap_suat_min = arr[0];
    *vi_tri = 0;

    for (j = 0; j < n; j++) {
        if (*(arr + j) < *ap_suat_min) {
            *ap_suat_min = *(arr + j);
            *vi_tri = j;
        }
    } 
}

void tim_banh_cao_nhat(float *arr, const char **ten, int n, float *ap_suat_max, int *vi_tri) {
    int j = 0; 
    *ap_suat_max = arr[0];
    *vi_tri = 0;

    for(j= 0; j < n; j++) {
        if(*(arr+j) > *ap_suat_max) {
            *ap_suat_max = *(arr + j);
            *vi_tri = j;
        }
    }
}

float tinh_ap_suattrung_binh(float *arr, int n) {
    float tong = 0.0f;
    int k = 0;

    for(k = 0; k < n; k++) {
        tong += *(arr + k);
    }
    return tong / (float)n;
}
 
int main(void) {
    float ap_suat[4] = { 32.5f, 28.0f, 35.2f, 22.3f};
    float ap_suat_min = 0.0f;
    float ap_suat_max = 0.0f;
    int vi_tri = 0;

    const char *ten_banh[4] = {"Truoc trai", "Truoc phai",
                     "Sau trai", "Sau phai"};

    in_trang_thai(ap_suat, ten_banh, 4);
    tim_banh_thap_nhat(ap_suat,ten_banh,4,&ap_suat_min,&vi_tri);
    tim_banh_cao_nhat(ap_suat,ten_banh,4,&ap_suat_max,&vi_tri);
    tinh_ap_suattrung_binh(ap_suat,4);

    printf("=== HE THONG TPMS ===\n");

    printf("- Banh thap nhat : %s - %.1f PSI\n",
           ten_banh[vi_tri], ap_suat_min);

    printf("- Banh cao nhat : %s - %.1f PSI\n",
           ten_banh[vi_tri], ap_suat_max);

    printf("- Ap suat trung binh : %.1f PSI\n",
           tinh_ap_suattrung_binh(ap_suat,4));
    
/* Kết quả chạy chương trình:
 [Truoc trai]  32.5 PSI - OK
 [Truoc phai]  28.0 PSI - OK
 [Sau trai]  35.2 PSI - OK
 [Sau phai]  22.3 PSI - CANH BAO: Ap suat thap! */

    return 0;
}