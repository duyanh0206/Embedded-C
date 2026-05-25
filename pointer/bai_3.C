/* float nhiet_do[6] = { 72.0f, 78.0f, 86.0f, 91.0f, 83.0f, 79.0f };
Yêu cầu: Viết 3 hàm đều dùng con trỏ để tính:
1. float tinh_trung_binh(float *arr, int n)
- Nhận con trỏ tới mảng, trả về trung bình của các phần tử trong mảng.
2. void tim_max_min(float *arr, int n, float *max, float *min)
- Trả về max và min qua con trỏ( không dùng return).
3. int dem_vuot_nguong(float *arr,int n,  float nguong)
- Đếm số phần tử trong mảng vượt ngưỡng đã cho.
Gọi 3 hàm trong main() và in kết quả
*/

#include <stdio.h>
// Hàm tính trung bình
float tinh_trung_binh(float *arr, int n) {
    float tong = 0.0f;
    int i = 0;

    for (i = 0; i < n; i++) {
        tong += *(arr + i);
    }
    return tong / (float)n;
}
// Hàm tìm max và min
void tim_max_min(float *arr, int n, float *max, float *min) {
    int j = 0;
    // Khởi tạo max và min bằng phần tử đầu tiên của mảng
    *max = *(arr); 
    *min = *(arr);
// Duyệt qua mảng để tìm max và min 
    for (j = 0; j < n; j++) {
        if (*(arr + j) > *max) {
            *max = *(arr + j);
        }
        if (*(arr + j) < *min) {
            *min = *(arr + j);
        }
    }
}

int dem_vuot_nguong(float *arr,int n,  float nguong) {
    int count = 0;
    int i = 0;

    for(i = 0; i < n; i++) {
        if(*(arr + i) > nguong) {
            count++;
        }
    }
    return count;
}


int main(void) {
    float nhiet_do[6] = { 72.0f, 78.0f, 86.0f, 91.0f, 83.0f, 79.0f };
    float tb = tinh_trung_binh(nhiet_do, 6);
    float gia_tri_max = 0.0f;
    float gia_tri_min = 0.0f;

    printf("Trung binh = %.2f\n", tb); // Kết quả: Trung binh = 81.50

    tim_max_min(nhiet_do, 6, &gia_tri_max, &gia_tri_min);
    printf("Gia tri max = %.1f\n", gia_tri_max); // Kết quả: Gia tri max = 91.00
    printf("Gia tri min = %.1f\n", gia_tri_min); // Kết quả: Gia tri min = 72.00

    int dem = dem_vuot_nguong(nhiet_do, 6, 85.0f);
    printf("So lan vuot nguong = %d lan\n", dem); // Kết quả: So phan tu vuot nguong = 2

    return 0;
}