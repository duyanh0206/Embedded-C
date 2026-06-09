#include <stdio.h>
#include <stdint.h>
// enum dung de dat ten cho cac gia tri so nguyen ( khong duoc la so thuc)
typedef enum {
  SUCCESS = 0, // neu khong dinh nghia thi mac dinh la 0
  NOT_FOUND,
  ERROR // 1 ( va gia tri sau bang gia tri truoc + 1)
} RETURN_STATUS;


RETURN_STATUS checkIc() {
  RETURN_STATUS check = SUCCESS;
  if (check == 0) {

  } else if (check == 2) {
    check = NOT_FOUND; 
    }
  else {
    check = ERROR;
  }
  return check;
}

int main(void) {
  RETURN_STATUS check = checkIc();
  printf("%d\n", check);
  return 0;
}
 