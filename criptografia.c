#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char w[1001], wc[1001];
    scanf("%d", &n);
    while(n--){
        scanf(" %[^\n]", w);
        for(int i = 0; i < strlen(w); i++){
            if((w[i] >= 65 && w[i] <= 90) || (w[i] >= 97 && w[i] <= 122)) w[i]+=3;
        }
        int size = strlen(w)-1;
        for(int i = 0; i < strlen(w); i++){
            wc[i] = w[size];
            size--;
        }
        size = strlen(w);
        wc[size] = '\0';
        for(int i = size / 2; i < size; i++) wc[i]-=1;
        printf("%s\n", wc);  
    }

    return 0;
}
