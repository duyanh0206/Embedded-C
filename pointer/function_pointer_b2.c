#include<stdio.h>
#include<stdint.h>
#define NUM_REG 4 // dinh nghia so luong ham reg la 4, tuong ung voi cac ham reg1, reg2, reg3, reg4

// Nguyen mau ham
void reg1();
void reg2();
void reg3();
void reg4();// tuong lai se them ham reg4 vao chuong trinh


// Than ham
void reg1() {
    printf("reg1\n");
}

void reg2() {
    printf("reg2\n");
}

void reg3() {
    printf("reg3\n");
}

void reg4() {
    printf("reg4\n");
}


void (*mFunction[NUM_REG])() = {reg1, reg2, reg3, reg4}; // khai bao mang con tro ham mFunction chua 4 con tro ham va gan dia chi cua cac ham reg1, reg2, reg3, reg4 vao mang con tro ham do

int main(void)
{
    for(int i = 0; i < NUM_REG; i++) {
        mFunction[i]();// goi ham thong qua con tro ham trong mang mFunction va truyen vao chi so i de goi tung ham reg1, reg2, reg3
    }
    return 0;
}



