#include <stdio.h>

int isValid(int vet1[], int vet2[]){
    for(int i = 0; i < 5; i++) if(vet1[i] == vet2[i]) return 0;
    return 1;
}

int main(){
    int t1[5], t2[5];
    for(int i = 0; i < 5; i++) scanf("%d", &t1[i]);
    for(int i = 0; i < 5; i++) scanf("%d", &t2[i]);
    if(isValid(t1, t2) == 1)printf("Y\n");
    else printf("N\n");
    return 0;
}