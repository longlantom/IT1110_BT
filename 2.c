#include<stdio.h>
#include<math.h>

double do_dai_canh(double a, double b, double c, double d){
    return sqrt((a-c)*(a-c)+(b-d)*(b-d));
}

int main(){
    double ax, ay, bx, by, cx, cy;
    scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy);
    printf("Do dai canh AB = %.2lf\n", do_dai_canh(ax, ay, bx, by));
    printf("Do dai canh AC = %.2lf\n", do_dai_canh(ax, ay, cx, cy));
    printf("Do dai canh BC = %.2lf\n", do_dai_canh(bx, by, cx, cy));
    double dx = (bx + cx)/2;
    double dy = (by + cy)/2;
    printf("Do dai duong trung tuyen AM = %.2lf", do_dai_canh(ax, ay, dx, dy));
    return 0;
}
