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
 
int main(void) {
    float ap_suat[4] = { 32.5f, 28.0f, 35.2f, 22.3f};

    const char *ten_banh[4] = {"Truoc trai", "Truoc phai",
                     "Sau trai", "Sau phai"};

    in_trang_thai(ap_suat, ten_banh, 4);
/* Kết quả chạy chương trình:
 [Truoc trai]  32.5 PSI - OK
 [Truoc phai]  28.0 PSI - OK
 [Sau trai]  35.2 PSI - OK
 [Sau phai]  22.3 PSI - CANH BAO: Ap suat thap! */

    return 0;
}