#include<stdio.h>
#include<stdint.h>

uint8_t *ptr8;
uint32_t *ptr32;


uint8_t arr[5] = {1, 2, 3, 4, 5};

int main(void)
{
   ptr8 = &arr[0]; // ptr8 tro den dia chi cua phan tu dau tien trong mang arr
   ptr32 = (uint32_t*)&arr[0]; // ep kieu ptr8 thanh ptr32

   ptr8++; // ptr8 = 1byte
   ptr32++; // ptr32 = 4byte
   
    printf("Gia tri cua ptr8: %d\n", *ptr8); // 
    printf("Gia tri cua ptr32: %d\n", *ptr32); 

    return 0;
}
