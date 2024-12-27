#include <stdio.h>

int main(){


    int a, b, c, d;
    scanf("%d%d%d%d", &a,&b,&c,&d);

    if((b-(d+c)-1) < a){
        if(c > d/2) printf("Caio, a culpa eh sua!\n");
        else printf("Igor bolado!\n");
    }else printf("Igor feliz!\n");


    return 0;
}