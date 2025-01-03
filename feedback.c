#include <stdio.h>

int main(){ 
    char vet[4][9] = {"Rolien", "Naej", "Elehcim", "Odranoel"};
    int n, k, kl;
    scanf("%d", &n);

    while (n--){
        scanf("%d", &k);
        while(k--){
            scanf("%d", &kl);
            printf("%s\n", vet[kl-1]);
        }
    }
    return 0;
}