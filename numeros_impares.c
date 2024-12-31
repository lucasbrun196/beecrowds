#include <stdio.h>

int main(){
    unsigned short int n;
    scanf("%hd", &n);
    for(int i = 1; i <= n; i+=2) printf("%d\n", i);
    return 0;
}