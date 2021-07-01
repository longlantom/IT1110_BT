#include<stdio.h>
#include<math.h>

int snt(int x){
    if (x < 2) return 0;
    for (int i = 2; i <= sqrt(x); i++){
        if (x % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    if (n < 0){
        printf("ERROR");
        return 0;
    }
    int a[2] = {0};
    int p = 0, k = 0;
    while (a[0] + a[1] <= n){
        if (snt(k)){
            if (k + a[1-p] > n) break;
            a[p] = k;
            p = (p + 1) % 2;
        }
        k++;
    }
    if (a[0] == 0 || a[1] == 0){
        printf("ERROR");
    } else printf("%d", a[0] + a[1]);
}
