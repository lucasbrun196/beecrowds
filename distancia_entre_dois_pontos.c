#include <stdio.h>
#include <math.h>

int main(){
    double x1, x2, y1, y2, ans;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    ans = (x2 - x1) * (x2 - x1);
    ans += (y2 - y1) * (y2 - y1);
    ans = sqrt(ans);
    printf("%.4lf\n", ans);
    return 0;
}