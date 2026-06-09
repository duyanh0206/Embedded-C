// Giá trị của &x và p có bằng nhau không? Tại sao?
// - có, vì p được khởi tạo bằng &x, nên con trỏ p trỏ đến cùng một ô nhớ mà x đang sử dụng. 
// Sau *p = 99; giá trị x thay đổi - giải thích tại sao bằng sơ đồ RAM?

/* int *p - khai bao p là con trỏ kiểu int
   &x - lấy địa chỉ của biến x(address of)
   *p - truy cập giá trị tại địa chỉ mà p đang trỏ đến (dereference) */

/* - ban đầu:
x lưu giá trị 10 tại địa chỉ 0x100
p lưu địa chỉ của x (0x100) (không lưu giá trị 10) . 
*p là cách truy cập giá trị tại địa chỉ đó
Khi gán *p = 99, ta đã thay đổi nội dung của ô nhớ chứa x từ 10 thành 99.
Kết quả: x thay đổi thành 99 vì x và *p là cùng một ô nhớ vật lý — chỉ khác tên gọi. Con trỏ p bản thân không thay đổi, vẫn lưu 0x100.*/

#include <stdio.h>

int main(void) {
    int x = 10; // - CPU cấp 1 ô nhớ , đặt giá trị 10 vào ô nhớ đó
    int *p = &x; // con trỏ p lưu địa chỉ của ô nhớ đó, không lưu 10

    printf("Gia tri cua x    =  %d\n", x);// x là biến int, dùng %d để in số nguyên
    printf("Gia tri cua x    =  %p\n", (void*)&x); // &x là địa chỉ của x, dùng %p để in địa chỉ, ép kiểu về void* để đảm bảo định dạng đúng
    printf("Gia tri cua p    =  %p\n", (void*)p); // p lưu địa chỉ của x, dùng %p để in địa chỉ, ép kiểu về void* để đảm bảo định dạng đúng
    printf("Gia tri cua *p   =  %d\n", *p);// *p truy cập giá trị tại địa chỉ mà p đang trỏ đến, tức là giá trị của x, dùng %d để in số nguyên
    

    *p = 99; /* Thay doi gia tri cua x thong qua con tro p */

    printf("x sau *p = 99 =  %d\n", x);

    return 0;
}

/* int *p - khai bao p là con trỏ kiểu int
   &x - lấy địa chỉ của biến x(address of)
   *p - truy cập giá trị tại địa chỉ mà p đang trỏ đến (dereference)
*/

/* Kết quả chạy chương trình:
 Gia tri cua x    =  10
Gia tri cua x    =  0x7ff7bd904c18
Gia tri cua p    =  0x7ff7bd904c18
Gia tri cua *p   =  10
x sau *p = 99 =  99 */