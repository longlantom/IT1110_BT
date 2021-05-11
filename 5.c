#include<stdio.h>

const double pi = 3.1416;

int main(){
    double r;
    scanf("%lf", &r);
    printf("Dien tich hinh tron = %.2lf\n", r*r*pi);
    printf("Chu vi duong tron = %.2lf", 2*r*pi);
}
