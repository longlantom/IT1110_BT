#include<stdio.h>

const double pi = 3.1416;

int main(){
    double chuvi;
    scanf("%lf", &chuvi);
    printf("Dien tich hinh tron co chu vi vua nhap = %.2lf\n", chuvi*chuvi/(4*pi));
    printf("Dien tich hinh vuong co chu vi vua nhap = %.2lf\n", chuvi*chuvi/16);
    printf("Dien tich tam giac deu co chu vi vua nhap = %.2lf\n", (sqrt(3)*chuvi*chuvi)/36);
}
