#include <stdio.h>

int main(){
    

    int distDif, nof, nog, aux;
    int ansL, ansG;
    while (scanf("%d%d%d", &distDif, &nof, &nog) != EOF){
        aux = 12 - distDif;
        ansG = 12 / nog;
        ansL = aux / nof;
        if(ansG == 0 && ansL == 0){
            if(nog >= nof) printf("S\n");
            else if(nog < nof)printf("N\n");
            
        }else{
            if(ansG < ansL) printf("S\n");
            else printf("N\n");
        }
    }
    


    return 0;
}