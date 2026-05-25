#include<stdio.h>

void bang_cuu_chuong(int n) {
    int i = 0;
    for(i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}
int main()
{
    bang_cuu_chuong(2);

    return 0;
}