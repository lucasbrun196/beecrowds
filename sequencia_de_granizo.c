#include <stdio.h>

int main(){
    int h, ans;
    while(1){
        scanf("%d", &h);
        if(h == 0) break;
        ans = h;
        while(h != 1){
            if(h % 2 == 0) h = 0.5 * h;
            else h = (3 * h) + 1;
            if(h > ans) ans = h;
        }

        printf("%d\n", ans);
    }

    return 0;
}