#include <stdio.h>

int main(){

    int n, a, tot = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        a = a / 3;
        a = a * 3;
        tot += a;
    }

    printf("%d\n", tot);
    

    return 0;
}