#include<stdio.h>
#include<math.h>

#define PI 3.14159

int main(){
    float x, y;
    scanf("%f%f", &x, &y);
    if (x*y == 0){
        printf("%f", PI/2);
        return 0;
    }
    if (x*y < 0){
        printf("%f", fabs(x*sin(y))/(x*x + y*y));
    } else {
        printf("%f", sqrt(x*x+1)-cbrt(2*y*y+2));
    }
}
