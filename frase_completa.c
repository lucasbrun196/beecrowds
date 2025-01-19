#include <stdio.h>

int sizeStr(char vet[]){
    int size = 0;
    while(vet[size] != '\0') size++;
    return size;
}

int isInVec(char ch, char vet[], int size){
    size++;
    for(int i = 0; i < size; i++){
        if(vet[i] == ch) return 1;
    }
    return 0;
}

int main(){
    int n, size, alphabetIndex, ans;
    char f[1001];
    scanf("%d", &n);
    while (n--){
        char aux[27] = {'\0'};
        scanf(" %[^\n]", f);
        ans = 0;
        size = sizeStr(f);
        alphabetIndex = 0;
        for(int i = 0; i < size; i++){
            if(f[i] >= 97 && f[i] <= 122){
                if(isInVec(f[i], aux, alphabetIndex) == 0){
                    aux[alphabetIndex] = f[i];
                    alphabetIndex++;
                    ans++;
                }
            } 
        }
        if(ans == 26) printf("frase completa\n");
        else if(ans >= (26 / 2)) printf("frase quase completa\n");
        else printf("frase mal elaborada\n");
    }
    
    return 0;
}