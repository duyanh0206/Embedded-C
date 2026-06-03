#include <stdio.h>
#include <stdint.h>

typedef struct {
  uint8_t x; // 1 byte
  int y; // 4 byte
  uint8_t z; // 1 byte
} StructType; // size = 12( kieu du nguyen thuy lon nhat --> size co so )

StructType p;
StructType *ptr;

int main() {
//   ptr = &p;
//   ptr->x = 1;
//   ptr->y = 2;
//   ptr->z = 3;

printf("size  = %lu\n", sizeof(p));

  return 0;
}

// dap an: 12
/* size co so = 4 byte
int8_t = 1 byte nhung ma co so = 4 byte. Nen de luu tru x van can 4 byte de luu tru
*/
 