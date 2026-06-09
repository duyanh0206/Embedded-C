#include <stdio.h>
#include <stdint.h>

uint8_t data = 0; // 0b00000000

// 00000001 : so 1
// 00001000 : so 8

int main(void) {
  data |= (1 << 3);

  printf("%u\n", data);
  
  return 0;
}

// dap an : 1 << 3 = 2^n = 2^3 = 8

