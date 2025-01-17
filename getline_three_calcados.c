#include <stdio.h>

int getSize(char vet[]){
    int cont = 0;
    while(vet[cont] != '\0') cont++;
    return cont;
}

int isEqual(char vet1[], char vet2[]){
    for(int i = 0; i < 2; i++) if(vet1[i] != vet2[i]) return 0;
    return 1;
}

int main(){
    int cases = 0, m, f;
    char n[3];
    char pairs[10000] = {'\0'};
    while(scanf("%s", n) != EOF){
        if(cases != 0) printf("\n");
        scanf(" %[^\n]", pairs);
        m = 0; f = 0;
        int size = getSize(pairs);
        for(int i = 0; i < size; i+=5){
            char aux[3] = {pairs[i], pairs[i+1], '\0'};
            if(isEqual(n, aux) == 1){
                if(pairs[i+3] == 'M') m++;
                else f++;
            }  
        }
        cases++;
        printf("Caso %d:\nPares Iguais: %d\nF: %d\nM: %d\n", cases,f+m,f,m);
    }

    return 0;
}