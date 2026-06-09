#include <stdio.h>
#include<string.h>

typedef struct {
  char ten[20]; // Ten cam bien
  float gia_tri; // Gia tri do duoc
  float nguong_max; // Nguong canh bao
  int don_vi; // 0 = C, 1 = V, 2 = RPM

} CamBien_t;

void kiem_tra_canh_bao(CamBien_t *s) {
  int i = 0;

  for (i = 0; i < 4; i++) {
    if (s[i].gia_tri > s[i].nguong_max) {
      printf("CANH BAO VUOT NGUONG!\n" );

    } else {
      printf("He thong binh thuong\n");
    }
  }
}

void in_dashboard(CamBien_t *arr, int n) {
  int j = 0;
  char * ten_don_vi[4]= {"C","V","RPM","atm"};

  printf("ECU DASHBOARD\n");

  for (j = 0; j < n; j++) {
    if(arr[j].gia_tri > arr[j].nguong_max) {
        printf("%d | %s | %.2f %s | CANH BAO QUA NGUONG!\n" ,j + 1, arr[j].ten,arr[j].gia_tri, ten_don_vi[arr[j].don_vi]); 
    } else {
       printf("%d | %s | %.2f %s | He thong binh thuong\n" ,j + 1, arr[j].ten,arr[j].gia_tri, ten_don_vi[arr[j].don_vi]);
    }
    }
  }

int main(void) {
  CamBien_t sensor[4];

  strcpy(sensor[0].ten, "Nhiet do");
  sensor[0].gia_tri = 90.0f;
  sensor[0].nguong_max = 80.0f;
  sensor[0].don_vi = 0;

  strcpy(sensor[1].ten, "Dien ap");
  sensor[1].gia_tri = 220.0f;
  sensor[1].nguong_max = 400.0f;
  sensor[1].don_vi = 1;

  strcpy(sensor[2].ten, "RPM");
  sensor[2].gia_tri = 3000.0f;
  sensor[2].nguong_max = 4000.0f;
  sensor[2].don_vi = 2;

  strcpy(sensor[3].ten, "atm");
  sensor[3].gia_tri = 8.0f;
  sensor[3].nguong_max = 2.0f;
  sensor[3].don_vi = 0;

  kiem_tra_canh_bao(sensor);

  in_dashboard(sensor, 4);
  
  return 0;
}