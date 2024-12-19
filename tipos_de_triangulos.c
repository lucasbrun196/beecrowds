#include <stdio.h>

int main(){

    float vet[3], aux, aQuad, bQuad, cQuad;

    for(int i = 0; i < 3; ++i) scanf("%f", &vet[i]);

    for(int i = 0; i < 3; i++){
        for(int j = i; j < 3; ++j){
            if(vet[j] > vet[i]){
                aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }
    if(vet[0] >= vet[1]+vet[2]) printf("NAO FORMA TRIANGULO\n");
    else{
        aQuad = vet[0]*vet[0];
        bQuad = vet[1]*vet[1];
        cQuad = vet[2]*vet[2];
        if(aQuad == (bQuad + cQuad)) printf("TRIANGULO RETANGULO\n");
        if(aQuad > (bQuad + cQuad)) printf("TRIANGULO OBTUSANGULO\n");
        else if(aQuad < (bQuad + cQuad))printf("TRIANGULO ACUTANGULO\n");
        
        if(vet[0] == vet[1] && vet[1] == vet[2]) printf("TRIANGULO EQUILATERO\n");
        else if((vet[0] == vet[1] && vet[2] != vet[1]) || (vet[1] == vet[2] && vet[0] != vet[1])) printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}