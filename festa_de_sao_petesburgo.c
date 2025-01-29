#include <stdio.h>

int main(){


    int n, m, k, p1, p2, index, cont, isChanged;;

    while(scanf("%d %d %d", &n, &m, &k) != EOF){
        int rel[n][n];
        int ans[n];
        int conts[n];
        for(int i = 0; i < n; i++){
            conts[i] = 0;
            for(int j = 0; j < n; j++) rel[i][j] = 0; 
        }

        for(int i = 0; i < m; i++){
            scanf("%d %d", &p1, &p2);
            rel[p1-1][p2-1] = 1;
            rel[p2-1][p1-1] = 1;
            conts[p1-1]++;
            conts[p2-1]++;
        }

        while(1){
            isChanged = 0;
            for(int i = 0; i < n; i++){
                if(conts[i] < k){
                    for(int j = 0; j < n; j++){
                        if(rel[j][i] == 1){
                            rel[j][i] = 0;
                            rel[i][j] = 0;
                            conts[i]--;
                            conts[j]--;
                            isChanged = 1;
                        }
                    }
                }
            }
            if(isChanged == 0) break;
        }
        index = 0;
        for(int i = 0; i < n; i++){
            cont = 0;
            for(int j = 0; j < n; j++){
                if(rel[i][j] == 1) cont++;
                if(cont >= k){
                    ans[index] = i+1;
                    index++;
                    break;
                }
            }
        }
        if(index == 0) printf("0");
        else{
            for(int i = 0; i < index; i++){
                printf("%d", ans[i]);
                if(i != index-1) printf(" ");
            } 
        }
        printf("\n");
    }
    return 0;
}



