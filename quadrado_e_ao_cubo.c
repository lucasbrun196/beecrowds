#include <stdio.h>

int main(){
    unsigned short int n;
    scanf("%hd", &n);
    for(int i = 1; i <= n; i++) printf("%d %d %d\n", i, i*i, i*i*i);
    return 0;
}