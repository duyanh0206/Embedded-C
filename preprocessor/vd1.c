#include <stdio.h>
#include <stdint.h>

#define PI 3.14 

#ifdef PI
void mFuntion() {
    printf("PI = %f\n", PI);
}
#else
void mFuntion() {
    printf("PI is not defined\n");
}
#endif
int main(void) {

  mFuntion();

  return 0;
}
 