#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getIntPos(char vet[]){
    char n[101] = {'\0'};
    int index = 0;
    int indexVet = 8;
    while(vet[indexVet] != '\0'){
        n[index] = vet[indexVet];
        indexVet++;
        index++;
    }
    return atoi(n);
}

int main(){

    int t, ni, pos, aux;
    char inst[10];
    
    scanf("%d", &t);
    while(t--){
        scanf("%d", &ni);
        pos = 0;
        int ivec[ni];
        for(int i = 0; i < ni; i++){
            scanf(" %[^\n]", inst);
            if(strcmp(inst, "LEFT") == 0){
                pos--;
                ivec[i] = -1;
            }else if(strcmp(inst, "RIGHT") == 0){
                pos++;
                ivec[i] = 1;
            }else{
                aux = getIntPos(inst);
                pos += ivec[aux-1];
                ivec[i] = ivec[aux-1];
            }
        }
        printf("%d\n", pos);
    }
    return 0;
}