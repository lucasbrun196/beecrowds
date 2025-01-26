#include <stdio.h>

int main(){
    int a, b, auxA, auxB;
    int mul = 1;
    scanf("%d %d", &a, &b);
    auxA = a;
    auxB = b;
    while(1){
        if(auxB-auxA >= b){
            printf("%d\n", mul);
            break;
        }
        mul++;
        auxA = a * mul;
        auxB = b * mul;  
    }
    return 0;
}