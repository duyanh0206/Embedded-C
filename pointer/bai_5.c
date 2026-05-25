#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    printf("%d %d %d %d %d %d", *ptr, ++*ptr++, (*ptr)++, *ptr++, *++ptr,++*ptr);
    return 0;
}

// ket qua chay chuong trinh: 4 5 3 2 2 2

/* Giải thích kết quả: 
// vi printf sẽ được đánh giá từ trái sang phải, nên ta sẽ phân tích từng phần:


*/