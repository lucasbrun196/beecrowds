#include <stdio.h>

int lineSize(char line[]){
    int cont = 0;
    while (line[cont] != '\0') cont++;
    return cont;
}

int vetSize(char line[]){
    int cont = 1;
    int size = lineSize(line);
    for(int i = 0; i < size; i++) if(line[i] == ' ') cont++;
    return cont;
}

int main(){
    int cases, kgDay;
    float price, kgTot = 0.0, priceTot = 0.0;
    char fruitsLine[10000];
    scanf("%d", &cases);
    
    for(int i = 0; i < cases; i++){
        scanf("%f", &price);
        scanf(" %[^\n]", fruitsLine);
        priceTot += price;
        kgDay = vetSize(fruitsLine);
        kgTot += kgDay;
        printf("day %d: %d kg\n", i+1, kgDay);
    }
    kgTot = kgTot/cases;
    priceTot = priceTot/cases;
    printf("%.2f kg by day\nR$ %.2f by day\n",kgTot,priceTot);
    return 0;
}