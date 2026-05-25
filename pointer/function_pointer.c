#include<stdio.h>
#include<stdint.h>


void view(uint8_t x);
void viewx2(uint8_t x);

void view(uint8_t x) {
    printf("%d\n", x);
}

void viewx2(uint8_t x) {
    printf("%d\n", x*2);
}

typedef void (*mFunction)(uint8_t );// khai bao kieu du lieu con tro ham mFunction la con tro ham nhan vao 1 tham so uint8_t va khong tra ve gia tri


int main(void)
{
   
   mFunction m ;
   m = view;
   m(2); // goi ham view thong qua con tro ham m va truyen vao tham so 2

   m = viewx2;
    m(2); // goi ham viewx2 thong qua con tro ham m va truyen vao tham so 2

    uint64_t address;
    printf("add = %llu\n", address = (uint64_t)viewx2); //ep kieu con tro ham view sang kieu uint64_t de in ra dia chi cua ham view

    ((mFunction)address)(2); // ep kieu dia chi ham view sang kieu con tro ham mFunction va goi ham thong qua con tro ham do va truyen vao tham so 2
    return 0;
}


