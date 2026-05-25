#include<stdio.h>
#include<stdint.h>

void mFunction(void *ptr, uint8_t size) {
    if (size == 1) {
        uint8_t *p8;
        p8 = (uint8_t*)ptr; // ep kieu ptr tu void* sang uint8_t*
        *p8 = 0x12;// gan gia tri 0x12 vao dia chi ma ptr tro den
    }
    if (size == 2) {
        uint16_t *p16;
        p16 = (uint16_t*)ptr; // ep kieu ptr tu void* sang uint16_t*
        *p16 = 0x1234;// gan gia tri 0x1234 vao dia chi ma ptr tro den
    }
}
uint8_t a;
uint16_t b;

int main(void)
{
   
   uint8_t *ptra = &a;
    mFunction(ptra, 1);// truyen dia chi cua bien a va kich thuoc 1 byte vao ham mFunction

    uint16_t *ptrb = &b;
    mFunction(ptrb, 2); // truyen dia chi cua bien b va kich thuoc 2 byte vao ham mFunction

    printf("%X\n", a);
    printf("%X\n", b);

    return 0;
}
