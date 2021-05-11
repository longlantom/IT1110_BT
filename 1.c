#include<stdio.h>
#include<math.h>

int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double p = (a + b + c)/2;
    double s = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Dien tich tam giac = %.2lf\n", s);
    printf("Cac duong cao cua tam giac lan luot la %.2lf %.2lf %.2lf", s/a*2, s/b*2, s/c*2);
    return 0;
}
