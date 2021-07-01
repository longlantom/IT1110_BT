#include<stdio.h>

int main(){
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int d = 0;
    for (int i = 0; i < n; i++){
        if (a[i] < a[0]) d++;
    }
    printf("%d ", d);

    d = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == a[0]) d++;
    }
    printf("%d ", d);

    d = 0;
    for (int i = 0; i < n; i++){
        if (a[i] > a[0]) d++;
    }
    printf("%d ", d);
}
