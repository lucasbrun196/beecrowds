#include <stdio.h>

int main(){

    short int start, end, tot = 0;
    scanf("%hd %hd", &start, &end);

    if(start == end) tot = 24;
    else{
        for(int i = start; i != end; ++i){
            if(i == 24) i = -1;
            else tot++;
            
        }
    }

    printf("O JOGO DUROU %hd HORA(S)\n", tot);


    return 0;
}