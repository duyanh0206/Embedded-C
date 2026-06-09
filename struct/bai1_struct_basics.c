#include <stdio.h>

typedef struct {
  float nhiet_do;
  float dien_ap;
  int rpm;
  int co_loi; /* 0 = ok, 1 = loi*/
} ECU_Sesor_t;

void in_trang_thai(ECU_Sesor_t *s) {

  printf("Nhiet do: %.2f\n", s->nhiet_do);
  printf("Dien ap: %.2f\n", s->dien_ap);
  printf("RPM: %d\n", s->rpm);
  printf("Co loi: %s\n", s->co_loi ? "LOI" : "OK");
  
}
int main(void) {
  ECU_Sesor_t sensor;

  sensor.nhiet_do = 86.4f;
  sensor.dien_ap = 12.4f;
  sensor.rpm = 3200;
  sensor.co_loi = 1;

  in_trang_thai(&sensor);

    return 0;
}