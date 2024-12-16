#include <stdio.h>

int main(){

    int sec;
    short int h = 0, m = 0, s = 0;
    scanf("%d", &sec);

    m = sec / 60;
    s = sec % 60;
    if(m >= 60){
        h = m / 60;
        m = m % 60;
    }
    
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}