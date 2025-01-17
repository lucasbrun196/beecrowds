#include <stdio.h>


int main(){
    int at, def, isImp, aux;
    while (1){
        scanf("%d %d", &at, &def);
        if(at == 0 && def == 0) break;
        int vetAt[at], vetDef[def];
        for(int i = 0; i < at; i++) scanf("%d", &vetAt[i]);
        for(int i = 0; i < def; i++) scanf("%d", &vetDef[i]);
        for(int i = 0; i < def; i++){
            for(int j = i; j < def; j++)
                if(vetDef[i] < vetDef[j]){
                    aux = vetDef[i];
                    vetDef[i] = vetDef[j];
                    vetDef[j] = aux;
                }
        }
        def--;
        isImp = 0;
        for(int i = 0; i < at; i++)
            if(vetAt[i] < vetDef[def-1] || (vetAt[i] < vetDef[def] && vetAt[i] < vetDef[def-1])){
                isImp = 1;
                break;
            }
        if(isImp == 1) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}