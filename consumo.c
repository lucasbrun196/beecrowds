#include <stdio.h>

int main(){


    int dist;
    float gas, ans;
    scanf("%d %f", &dist, &gas);
    ans = dist / gas;
    printf("%.3f km/l\n", ans);
    
    return 0;
}