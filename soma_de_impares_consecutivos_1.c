#include <stdio.h>

int main(){
    int ac = 0, x, y;
    scanf("%d%d", &x, &y);
    for(int i = y+1; i < x; i++) if(i % 2 != 0) ac += i;
    printf("%d\n", ac);
    return 0;
}