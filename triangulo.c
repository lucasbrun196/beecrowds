#include <stdio.h>

int main(){
    float a, b, c, ans;
    scanf("%f%f%f", &a, &b, &c);
    if((a+b>c)&&(a+c>b)&&(c+b>a)){
        ans = a+b+c;
        printf("Perimetro = %.1f\n", ans);
    } 
    else{
        ans = ((a+b)*c)/2;
        printf("Area = %.1f\n", ans);
    } 
    return 0;
}