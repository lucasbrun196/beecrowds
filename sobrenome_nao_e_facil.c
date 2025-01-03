#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char aux[] = {"aeiou"};
    int n;
    scanf("%d", &n);
    while(n--){
        char lastname[43];
        scanf(" %[^\n]", lastname);
        int index = 0;
        while(lastname[index] != '\0'){
            lastname[index] = tolower(lastname[index]);
            index++;
        }
        int cont = 0;
        int isVog;
        for(int i = 0; i < strlen(lastname); i++){
            isVog = 0;
            for(int j = 0; j < strlen(aux); j++){
                if(lastname[i] == aux[j]){
                    isVog = 1;
                    break;
                }
            }
            if(isVog == 1) cont = 0;
            else cont ++;
            if(cont >= 3) break;
        }
        lastname[0] = toupper(lastname[0]);
        if(cont >= 3) printf("%s nao eh facil\n", lastname);
        else printf("%s eh facil\n", lastname);
    }
   
    
    
    return 0;
}