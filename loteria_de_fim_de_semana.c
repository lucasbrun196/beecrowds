#include <stdio.h>

int main(){
    int n, c, k, num, m, auxIndex;

    while(1){
        scanf("%d%d%d", &n, &c, &k);
        if(n == 0 && c == 0 && k == 0) break;
        int xS[k];
        int mI[k];
        for(int i = 0; i < k; i++) xS[i] = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < c; j++){
                scanf("%d", &num);
                xS[num-1]++;
            }
        }
        for(int i = 0; i < k; i++){
            if(i == 0) m = xS[i];
            else if(xS[i] < m) m = xS[i];
        }
        auxIndex = 0;
        for(int i = 0; i < k; i++) if(xS[i] == m) mI[auxIndex++] = i+1;
        for(int i = 0; i < auxIndex; i++){
            printf("%d", mI[i]);
            if(i != auxIndex-1) printf(" ");
        } 
        printf("\n");
    }
    return 0;
}