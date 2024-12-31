#include <stdio.h>

int main(){
    int ioN, pos=0, neg=0, imp=0, par=0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &ioN);
        if(ioN % 2 == 0) par++;
        else imp++;

        if(ioN > 0) pos++;
        else if(ioN < 0) neg++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, imp, pos, neg);
    return 0;
}