#include <stdio.h>
#include <stdint.h>

uint8_t data = 0x08; // 0b00001000

/*1       0000 0001
1 << 3:   0000 1000

data       = 0000 1000
mask       = 1111 0111
-------------------
kết quả    = 0000 0000
*/ 



int main(void) {
  data &= ~(1 << 3);

  printf("%u\n", data);
  
  return 0;
}
// dap an = 0


