#include <stdio.h>

int main(){

    int cases, indexExtraM, indexExtraL, totM, totL;
    int lastL, lastM, contM, contL;
    int mm[200], lm[200]; 
    while(1){
        scanf("%d", &cases);
        if(cases == 0) break;
        for(int i = 0; i < cases; i++) scanf("%d", &mm[i]);
        for(int i = 0; i < cases; i++) scanf("%d", &lm[i]);
        totL = 0;
        totM = 0;
        contL = 0;
        contM = 0;
        for(int i = 0; i < cases; i++){
            if(i == 0){
                lastM = mm[i];
                lastL = lm[i];
                indexExtraL = 0;
                indexExtraM = 0;
                contM++;
                contL++;
            }else{
                if(contL < 3 && contM < 3){
                    if(mm[i] == lastM) contM++;
                    else{
                        contM = 1;
                        indexExtraM = i;
                        lastM = mm[i];
                    }
                    if(lm[i] == lastL) contL++;
                    else{
                        contL = 1;
                        indexExtraL = i;
                        lastL = lm[i];
                    }
                }
            }
            totM += mm[i];
            totL += lm[i];
        }
        if(indexExtraL <= indexExtraM && contL == 3) totL += 30;
        if(indexExtraM <= indexExtraL && contM == 3) totM += 30; 
        if(totL > totM) printf("L\n");
        else if(totM > totL) printf("M\n");
        else printf("T\n");  
    }
    return 0;
}
