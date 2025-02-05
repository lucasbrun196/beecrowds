#include <stdio.h>

int main(){

    int nps, npl, ans;
    while (1){
        scanf("%d %d", &nps, &npl);
        if(nps == 0  && npl == 0) break;
        int mat[nps][npl];
        ans = 0;
        for(int i = 0; i < nps; i++) for(int j = 0; j < npl; j++) scanf("%d", &mat[i][j]);
        int aux;
        for(int i = 0; i < nps; i++){
            aux = 0;
            for(int j = 0; j < npl; j++){
                if(mat[i][j] == 0) {
                    aux = 1;
                    break;
                }
            }
            if(aux == 0)break;
        }
        if(aux == 1) ans++;

        for(int i = 0; i < npl; i++){
            aux = 0;
            for(int j = 0; j < nps; j++){
                if(mat[j][i] == 1){
                    aux = 1;
                    break;
                }
            }
            if(aux == 0) break;
        }
        if(aux == 1) ans++;


        for(int i = 0; i < npl; i++){
            aux = 1;
            for(int j = 0; j < nps; j++){
                if(mat[j][i] == 0){
                    aux = 0;
                    break;
                }
            }
            if(aux == 1) break;
        }
        if(aux == 0) ans++;


        for(int i = 0; i < nps; i++){
            aux = 0;
            for(int j = 0; j < npl; j++){
                if(mat[i][j] == 1){
                    aux = 1;
                    break;
                }
            }
            if(aux == 0) break;
        }
        if(aux == 1) ans++;

        printf("%d\n", ans); 
    }
     
    return 0;
}