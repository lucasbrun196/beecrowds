#include <stdio.h>

int main(){

    double v;
    int ans = 0;
    for(int i = 0; i < 6; i++){
        scanf("%lf", &v);
        if(v > 0) ans++;
    }
    printf("%d valores positivos\n", ans);

    return 0;
}