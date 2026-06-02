/*
Viết chương trình C sử dụng con trỏ để thao tác với hai biến số nguyên.

Yêu cầu:

Khai báo hai biến số nguyên:
a = 100
b = 200
Khai báo con trỏ p trỏ tới biến a.
Thực hiện các công việc sau:
In giá trị mà con trỏ p đang trỏ tới.
Dùng con trỏ để thay đổi giá trị của a thành 999.
In lại giá trị sau khi thay đổi.
Cho con trỏ p trỏ sang biến b.
In giá trị mới mà con trỏ đang trỏ tới.
*/

#include <stdio.h>


int main() {
    // Cho san - khong duoc them bien moi
    int a = 100;
    int b = 200;
    int *p = &a;

    printf("%d\n", *p);
    *p = 999;
    printf("%d\n", *p);
    p = &b;
    printf("%d\n", *p);

}