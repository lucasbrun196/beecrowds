#include <stdio.h>

int main(){

    int fnum, h;
    float s, ans;
    scanf("%d", &fnum);
    scanf("%d", &h);
    scanf("%f", &s);
    ans = h*s;
    printf("NUMBER = %d\n", fnum);
    printf("SALARY = U$ %.2f\n", ans);

    return 0;
}

