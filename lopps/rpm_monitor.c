#include <stdio.h>

void xu_ly_rpm(float *rpm, int n)
{
    int i;
    int canhbao3000 = 0;
    int flag_rpm_cao = 0;
    float tong = 0.0f;
    float max = rpm[0];

    for(i = 0; i < n; i++)
    {
        printf("Chu ky %d: %.2f RPM\n", i + 1, rpm[i]);

        tong += rpm[i];

        if(rpm[i] > max)
            max = rpm[i];

        if(rpm[i] > 3000.0f)
            canhbao3000++;

        if(rpm[i] > 4000.0f && flag_rpm_cao == 0)
        {
            printf("-Canh bao: RPM qua cao! %.2f\n", rpm[i]);
            flag_rpm_cao = 1;
        }
    }

    printf("\nTong RPM: %.2f\n", tong);
    printf("RPM trung binh: %.2f\n", tong / 10);
    printf("RPM lon nhat: %.2f\n", max);
    printf("So lan vuot 3000: %d lan\n", canhbao3000);
}

int main(void)
{
    float rpm[10] = {
        800.0f, 1200.0f, 2500.0f, 2800.0f, 2000.0f,
        3500.0f, 4000.0f, 4200.0f, 8900.0f, 850.0f
    };

    xu_ly_rpm(rpm, 10);

    return 0;
}