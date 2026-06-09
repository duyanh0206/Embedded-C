#include <stdio.h>

int cong(int a, int b) { return a + b; }
int tru(int a, int b) { return a - b; }
int nhan(int a, int b) { return a * b; }
int chia(int a, int b) { return a / b; }

void thuc_hien_phep_toan(int x, int y,int (*p_thuat_toan)(int, int) ) {
  printf("Chuan bi chay phep toan...\n");

  int kq = p_thuat_toan(x, y);

  printf("Ket qua cuoi cung la: %d\n",kq);
}

int main(void) {
  int lua_chon;

  while (1) {
    printf("Moi ban lua chon phep toan:\n");
    printf("1. Cong\n");
    printf("2. Tru\n");
    printf("3. Nhan\n");
    printf("4. Chia\n");
    printf("Phep toan lua chon cua ban la: ");

    scanf("%d", &lua_chon);

    if (lua_chon == 0) {
      printf("Ket thuc chuong trinh\n");
      break;
    }

    switch (lua_chon) {
    case 1:
        thuc_hien_phep_toan(1, 2, &cong);
        break;
    case 2:
        thuc_hien_phep_toan(1, 2, &tru);
        break;
    case 3:
        thuc_hien_phep_toan(1, 2, &nhan);
        break;
    case 4:
        thuc_hien_phep_toan(1, 2, &chia);
        break;
    default:
        printf("Lua chon cua ban khong hop le! Moi nhap lai\n");
        break;
    }

//     if (lua_chon == 1) {
//       thuc_hien_phep_toan(10,3,cong);
//     } else if (lua_chon == 2) {
//       thuc_hien_phep_toan(10,3,tru);
//     } else if (lua_chon == 3) {
//       thuc_hien_phep_toan(10,3,nhan);
//     }else if (lua_chon == 4) {
//       thuc_hien_phep_toan(10,3,chia);
//     } else if (lua_chon == 0) {
//       printf("Ket thuc chuong trinh\n");
//       break;
//     }else {
//       printf("Lua chon khong hop le!\n");
//     }
   }
  
  return 0;
}