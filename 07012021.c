#include<stdio.h>

int main(){
    char s[100], b[100];
    gets(s);

    int i = 0, l = strlen(s) - 1;
    while (s[i] == ' '){
        i++;
    }
    while (s[l] == ' '){
        l--;
    }
    int d = 0;
    while (i <= l){
        while (s[i] != ' ' && i <= l){
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
            b[d] = s[i];
            d++;
            i++;
        }
        b[d] = ' ';
        d++;
        while (s[i] == ' ' && s[i+1] == ' ') i++;
        i++;
    }
    if (b[0] >= 'a' && b[0] <= 'z') b[0] -= 32;
    b[d - 1] = '.';
    b[d] = '\0';
    for (int i = 0; i < strlen(b); i++){
        printf("%c", b[i]);
    }
    printf("%d", d);
}
//hEELO World -> Hello world.12
//xin   cHao -> Xin chao.9
