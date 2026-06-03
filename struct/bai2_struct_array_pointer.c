#include <stdio.h>

/* Tim cam bien nhiet do cao nhat
Sensor 1: 30.0 °C
Sensor 2: 60.0 °C
Sensor 3: 90.0 °C
*/

typedef struct {
  float nhiet_do; // data

} ECU_Sensor_t;

ECU_Sensor_t *tim_sensor_nong_nhat(ECU_Sensor_t *arr, int n) {
  int i;
  ECU_Sensor_t *max = &arr[0];

  for (i = 1; i < n; i++) {
    if (arr[i].nhiet_do > max->nhiet_do) {
      max = &arr[i];
    }
  }
  return max;
}
int main() {
  ECU_Sensor_t sensor[3];

  sensor[0].nhiet_do = 30.0f;
  sensor[1].nhiet_do = 60.0f;
  sensor[2].nhiet_do = 90.0f;

  ECU_Sensor_t *ketqua = tim_sensor_nong_nhat(sensor, 3);
  printf("Nhiet do cao nhat: %.1f\n", ketqua->nhiet_do);
  
  return 0;
}