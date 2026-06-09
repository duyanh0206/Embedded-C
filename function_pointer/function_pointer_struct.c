#include <stdio.h>
#include <string.h>

typedef struct {
  char ten[20];
  float nguong;
  int(*kiem_tra)(float gia_tri, float nguong);
} CanhBao_t;

int kiem_tra_qua_nong(float gia_tri, float nguong) {
  if (gia_tri > nguong) {
    printf("CANH BAO VUOT NGUONG!\n");
    return 1;
  } else {
    printf("He thong binh thuong\n");
    return 0;
  }
}

int kiem_tra_qua_thap(float gia_tri, float nguong) {
  if(gia_tri < nguong) {
    printf("CANH BAO QUA NGUONG!\n");
    return 1;
  } else {
    printf("He thong binh thuong\n");
    return 0;
  }
}


int main(void) {
  CanhBao_t cam_bien_nhiet;
  strcpy(cam_bien_nhiet.ten, "cb nhiet");
  cam_bien_nhiet.nguong = 120.0f;
  cam_bien_nhiet.kiem_tra = kiem_tra_qua_nong;

  if(cam_bien_nhiet.kiem_tra != NULL) {
     cam_bien_nhiet.kiem_tra(80.0f, cam_bien_nhiet.nguong); 
  }

  CanhBao_t cam_bien_ap_suat;
  strcpy(cam_bien_ap_suat.ten, "cb ap suat");
  cam_bien_ap_suat.nguong = 5.0f;
  cam_bien_ap_suat.kiem_tra = kiem_tra_qua_thap;

  if (cam_bien_ap_suat.kiem_tra != NULL) {
    cam_bien_ap_suat.kiem_tra(4.0f,cam_bien_ap_suat.nguong);
  }
  
  

  return 0;
}