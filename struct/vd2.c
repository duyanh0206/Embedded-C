#include <stdio.h>
#include <stdint.h>

typedef struct {
  uint8_t x;// 1 byte
  uint8_t z; // 1 byte 
  int y; // 4 byte
  
} StructType;

StructType p;
StructType *ptr;

int main() {

printf("size  = %lu\n", sizeof(p));

  return 0;
}

// dap an: 8
/* kieu du nguyen thuy lon nhat --> size co so
size co so = 4 byte
Dung 4 byte dau tiem de chua uinit_8 x,z
--> block cua no phat dat duoc 4 byte
*/
 