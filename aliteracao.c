#include <stdio.h>
#include <string.h>
#include <ctype.h>
// He has four fanatic fantastic fans
int main(){
    char c[5001];
    char *tok, prev;
    int cont, status;
    while(scanf("%[^\n] ", c) != EOF){
        cont = 0;
        tok = strtok(c, " "); 
        prev = *tok; 
        status = 1;
        do{
            tok = strtok(NULL, " "); 
            if(tok != NULL){
                if(((tolower(prev) == tolower(*tok)) && (status == 1))){
                    //printf("%c\n%c\n\n", prev, *tok);
                    status = 0;
                    cont++;
                }else if(tolower(prev) != tolower(*tok)){
                    prev = *tok;
                    status = 1;
                }
            }
        } while(tok != NULL);

        printf("%d\n", cont);
    }
    return 0;
}

