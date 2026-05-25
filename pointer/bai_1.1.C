#include<stdio.h>
#include<stdint.h>

// sizeof = 40 byte
typedef struct {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;

}Reg;

 Reg re;   
//  Reg *ptr = &re; // ptr_re la con tro tro den dia chi cua bien re
 uint8_t *ptr;


int main(void)
{
    uint8_t x = 15; // uinit8_t la kieu du lieu 8 bit khong dau
    uint8_t *ptr = &x; // ptr la con tro tro den dia chi cua bien x

    printf("size %lu\n",sizeof(re)); // %lu la dinh dang in unsigned long, sizeof tra ve kieu size_t,
    printf("size ptr: %lu\n", sizeof(ptr)); 
    printf("Gia tri cua x    =  %d\n", x); // in gia tri cua x
    printf("Gia tri cua x    =  %p\n", (void*)&x);
    printf("Gia tri cua ptr  =  %p\n", (void*)ptr); // in dia chi ma ptr dang tro den
    printf("Gia tri cua *ptr =  %d\n", *ptr); // *ptr truy cap gia tri tai dia chi ma ptr dang tro den, tuc la gia tri cua x

    


    return 0;
}
