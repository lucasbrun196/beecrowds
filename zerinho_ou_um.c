#include <stdio.h>

int main(){
    int a, b, c;
    while(scanf("%d%d%d", &a,&b,&c) != EOF){
        if(a == b && c != a) printf("C\n");
        else if(c == b && a != c) printf("A\n");
        else if(a == c && b != a) printf("B\n");
        else printf("*\n");
    }
    return 0;
}