/* ví dụ về hai hàm đổi giá trị của biến:
1 hàm hoạt động đúng logic tên là swap_dung, 
1 hàm chưa hoạt động tên là swap_sai.
Câu hỏi: Tại sao swap_sai không hoạt động*/
/* vì hàm swap_sai dùng pass by value - truyền bằng giá trị  a và b chỉ là bản sao của x và y trong main.
Còn swap_dung dùng pass by pointer - truyền bằng con trỏ a và b là con trỏ trỏ đến x và y trong main, nên thay đổi giá trị x và y.
*/ 

#include <stdio.h>
// Pass by value (Truyền bằng giá trị)- Không hoạt động
void swap_sai(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    // a và b chỉ là bản sao -  x, y ngoài main không đổi

}

// Pass by pointer( Truyền bằng con trỏ ) - Hoạt động đúng
void swap_dung(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    // a và b là con trỏ - trỏ đến x, y ngoài main - thay đổi giá trị x, y
}
 
int main() {
    int x = 5, y = 10;

    printf("Truoc swap_sai: x = %d, y = %d\n", x, y);
    swap_sai(x, y); // Truyền giá trị - không thay đổi x, y
    printf("Sau swap_sai: x = %d, y = %d\n", x, y);

    printf("Truoc swap_dung: x = %d, y = %d\n", x, y);
    swap_dung(&x, &y); // Truyền địa chỉ - thay đổi x, y
    printf("Sau swap_dung: x = %d, y = %d\n", x, y);

    return 0;
}

/*
    Kết quả chạy chương trình:
    Truoc swap_sai: x = 5, y = 10
    Sau swap_sai: x = 5, y = 10
    Truoc swap_dung: x = 5, y = 10
    Sau swap_dung: x = 10, y = 5
*/