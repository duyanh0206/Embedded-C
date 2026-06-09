#include <stdio.h>

// Viết hàm sử dụng con trỏ để đảo ngược các phần tử của một mảng số thực.

void dao_nguoc_mang(float *arr, int n) {
  int i = 0;
  float temp = 0.0f; // bien tam

  for (i = 0; i < n / 2; i++) {
    temp = *(arr + i); // Lưu giá trị tại vị trí i vào biến tạm temp.
    *(arr + i) = *(arr + n - 1 - i); // Gán phần tử cuối tương ứng sang vị trí đầu
    *(arr + n - 1 - i) = temp; //Gán giá trị đã lưu trong temp vào vị trí cuối.
        
  }
}

int main(void) {
  int j = 0;
  float mang[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

  dao_nguoc_mang(mang, 5);

  for (j = 0; j < 5; j++) {
    printf("mang[%d] = %.1f\n", j, mang[j]);
  }
  return 0;
  
}

