#include <stdio.h>
#include <string.h>

int main(){

    char d, n[255];
    int index, findNoZeroIndex;

    while(1){
        char aux[255] = "\0", ans[255] = "\0";
        scanf(" %c %[^\n]", &d, n);
        if(d == '0' && (strlen(n) == 1 && strcmp(n, "0") == 0)) break;
        index = 0;
        for(int i = 0; i < strlen(n); i++){
            if(d != n[i]){
                aux[index] = n[i];
                index++;
            }
        }
        if(index == 0){
            ans[index] = '0';
            printf("%s\n", ans);
        } 
        else if(aux[0] == '0'){
            findNoZeroIndex = -1;
            for(int i = 0; i < strlen(aux); i++){
                if(aux[i] != '0') findNoZeroIndex = i;
            }
            if(findNoZeroIndex == -1) ans[0] = '0';
            else{
                index = 0;
                for(int i = findNoZeroIndex; i < strlen(aux); i++){
                    ans[index] = aux[i];
                    index++;
                }
            }
            printf("%s\n", ans);
        }else printf("%s\n", aux);
    }
    
    return 0;
}





