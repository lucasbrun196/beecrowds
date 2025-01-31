#include <stdio.h>

struct  InversionsPos{
    int s, e, dif;
};

int main(){

    int n, cg = 0, invC, ii, ij, dif, aux;
    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        int genes[n];
        scanf("%d", &invC);
        struct InversionsPos ip[invC];
        for(int i = 1; i <= n; i++) genes[i-1] = i;
        for(int i = 0; i < invC; i++){
            scanf(" %d%d", &ii, &ij);
            dif = (ij-ii)/2;
            ip[i].dif = dif;
            ii--;
            ij--;
            ip[i].s = ii;
            ip[i].e = ij;
        } 
        for(int i = invC-1; i >= 0; i--){
            for(int w = 0; w <= ip[i].dif; w++){
                aux = genes[ip[i].s];
                genes[ip[i].s++] = genes[ip[i].e];
                genes[ip[i].e--] = aux;
            }
        }        
        cg++;
        printf("Genome %d\n", cg);
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &aux);
            printf("%d\n", genes[aux-1]);
        }
    }


    return 0;
}