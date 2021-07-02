#include<stdio.h>

int main(){
    int n, a[100];
    scanf("%d", &n);
    if (n <= 0 || n >= 100){
        printf("ERROR");
    } else {
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                if (a[i] < a[j]){
                    int tg = a[i];
                    a[i] = a[j];
                    a[j] = tg;
                }
            }
        }
        for (int i = 0; i < n; i++){
            int d = 1;
            while (a[i] == a[i+1]){
                d++;
                i++;
            }
            printf("%d %d\n", a[i], d);
        }
    }
}
