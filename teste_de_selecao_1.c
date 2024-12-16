#include <stdio.h>

int main(){
    short int a, b, c, d;
    scanf("%hi%hi%hi%hi", &a, &b, &c, &d);
    if((b>c)&&(d>a)&&((c+d)>(a+b))&&(c>0)&&(d>0)&&(a%2==0)) printf("Valores aceitos\n");
    else printf("Valores nao aceitos\n");
    return 0;
}