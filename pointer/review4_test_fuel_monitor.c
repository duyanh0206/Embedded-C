#include <stdio.h>

/* Bài toán: Giám sát mức nhiên liệu bằng ngôn ngữ C
Mô tả: Một hệ thống nhúng nhận dữ liệu mức nhiên liệu (%) từ cảm biến theo từng
thời điểm. Hệ thống cần thực hiện các chức năng sau: Cập nhật mức nhiên liệu
hiện tại từ dữ liệu cảm biến mới nhất.Kiểm tra trạng thái cảnh báo: Nếu mức
nhiên liệu nhỏ hơn ngưỡng thấp → cảnh báo cần đổ thêm nhiên liệu. Nếu mức nhiên
liệu lớn hơn ngưỡng đầy → cảnh báo bình quá đầy. Ngược lại → trạng thái bình
thường. Tính mức nhiên liệu trung bình từ toàn bộ dữ liệu cảm biến đã ghi nhận.

- Dữ liệu đầu vào: float nhien_lieu[5] = {80.0f, 65.0f, 45.0f, 20.0f, 55.0f};

- Ngưỡng cảnh báo:
float nguong_thap = 25.0f;
float nguong_day = 90.0f;
*/

void cap_nhat_muc(float *arr, int n, float *muc_hien_tai) {
  int i = 0;

  for (i = 0; i < n; i++) {
    *muc_hien_tai += *(arr + i);
  }
  printf("Muc nhien lieu hien tai: %.1f %%\n", *muc_hien_tai);
}
int kiem_tra_canh_bao (float *muc, float nguong_thap, float nguong_day) {
  if (*muc < nguong_thap) {
    return 1;
  }
  else if (*muc > nguong_day) {
    return 2;
  }
  else {
    return 0;
  }
}

float tinh_muc_trung_binh(float *arr, int n) {
  int j = 0;
  float tong = 0.0f;
  for (j = 0; j < n; j++) {
    tong += *(arr + j);
  }
  return tong / (float)n;
}

int main() {
    float nhien_lieu[5] = {4.0f, 5.0f, 6.0f, 7.0f, 2.0f};
    float nguong_thap = 25.0f;
    float nguong_day = 90.0f;
    float muc_hien_tai = 0.0f;

    cap_nhat_muc(nhien_lieu, 5, &muc_hien_tai);
    

    int trang_thai = kiem_tra_canh_bao(&muc_hien_tai, nguong_thap, nguong_day);

    if (trang_thai == 1) {
        printf("CANH BAO: Can do them nhien lieu!\n");
    } else if (trang_thai == 2) {
         printf("CANH BAO: Binh qua day!\n");
    } else {
        printf("Binh thuong\n");
    }
    float muc_trung_binh = tinh_muc_trung_binh(nhien_lieu, 5);
    printf("Muc nhien lieu trung binh: %.1f %%\n", muc_trung_binh);
return 0;
}