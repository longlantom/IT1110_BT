#include<stdio.h>
#include<math.h>
#define pi 3.14

double root5(double n) {
    double i, prcs = 0.000000001;

    for (i = 1; (i*i*i*i*i) <= n; i++);

    for (--i; (i*i*i*i*i) < n; i += prcs);

    return i;
}

int main(){
    int x;
    scanf("%d", &x);
    double a = sqrt((1 << x) + M_PI);
    double b = log(exp((double)x + 1.23) + 1);
    //printf("%lf %lf\n", a, b);
    printf("%lf", (cos(3*a) + root5(2*x*x*x + x + 1))/(log(pow(3, x*x) + 2.14*b)/log(7)));
    return 0;
}
