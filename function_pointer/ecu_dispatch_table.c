#include <_string.h>
#include <stdio.h>
#include <string.h>


typedef void (*Handler_t)(float data);

typedef struct {
  int ma_lenh; // CAN message ID
  char ten[20];
  Handler_t xu_ly; // function pointer toi ham xu ly
}Lenh_t;

void xu_ly_nhiet_do(float data) {
  float nguong = 200.0f;
  
  if (data > nguong) {
    printf("CANH BAO NHIET DO VUOT NGUONG!\n");
  } else {
    printf("He thong binh thuong\n");
  }
};
void xu_ly_toc_do(float data){
  float nguong = 120.0f;
  
  if (data > nguong) {
    printf("CANH BAO TOC DO VUOT NGUONG!\n");
  } else {
    printf("He thong binh thuong\n");
  }
};
void xu_ly_dien_ap(float data){
  float nguong = 500.0f;
  
  if (data > nguong) {
    printf("CANH BAO DIEN AP VUOT NGUONG!\n");
  } else {
    printf("He thong binh thuong\n");
  }
};

void xu_ly_lenh(Lenh_t *bang, int n, int ma, float data) {
    int i = 0;

    for (i = 0; i < n; i++) {
        if(ma == bang[i].ma_lenh) {
            if (bang[i].xu_ly != NULL) {
            bang[i].xu_ly(data);
        }
        return;
    }
}
    printf("Khong tim thay lenh ma: %d\n", ma);
}

int main(void) {
  Lenh_t cam_bien_nhiet;
  stpcpy(cam_bien_nhiet.ten, "cb nhiet");
  cam_bien_nhiet.ma_lenh = 1;
  cam_bien_nhiet.xu_ly = xu_ly_nhiet_do;

  if (cam_bien_nhiet.xu_ly != NULL) {
    cam_bien_nhiet.xu_ly(300.0f);
  }
  
  Lenh_t cam_bien_toc_do;
  stpcpy(cam_bien_toc_do.ten, "cb toc do");
  cam_bien_toc_do.ma_lenh = 2;
  cam_bien_toc_do.xu_ly = xu_ly_toc_do;
  
  if(cam_bien_toc_do.xu_ly != NULL) {
    cam_bien_toc_do.xu_ly(220.0f);
  }
  
  Lenh_t cam_bien_dien_ap;
  stpcpy(cam_bien_dien_ap.ten, "cb dien ap");
  cam_bien_dien_ap.ma_lenh = 3;
  cam_bien_dien_ap.xu_ly = xu_ly_dien_ap;
  
 if (cam_bien_dien_ap.xu_ly != NULL) {
    cam_bien_dien_ap.xu_ly(400.0f);
 }


 Lenh_t bang_lenh[3] = {
     {1, "cb nhiet", xu_ly_nhiet_do},
     {2, "cb toc do", xu_ly_toc_do},
     {3, "cb dien ap", xu_ly_dien_ap},
 };

    xu_ly_lenh(bang_lenh, 3, 1, 100.0f);
    xu_ly_lenh(bang_lenh, 3, 2, 500.0f);
    xu_ly_lenh(bang_lenh, 3, 3, 100.0f);

  


  
    return 0;
}
    