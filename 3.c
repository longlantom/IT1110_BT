#include<stdio.h>

double cube_root(double n) {
    double i, prcs = 0.000001;

    for (i = 1; (i*i*i) <= n; i++);

    for (--i; (i*i*i) < n; i += prcs);

    return i;
}

double f(double x){
    return pow(x, 7) + 5*cube_root(pow(x, 5) + 3*x*x*x + 2) + 12;
}

int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%.2lf", (double)(f(a)+f(b)+f(c))/3);
    return 0;
}
