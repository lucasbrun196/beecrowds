#include <stdio.h>


int main(){

    int n, kg;
    scanf("%d", &n);
    double vetPrice[n], price, lower;

    for(int i = 0; i < n; i++){
        scanf("%lf %d", &price, &kg);
        vetPrice[i] = ((price * 1000) / kg);
    }

    
    lower = vetPrice[0];

    for(int i = 0; i < n; i++){
        if(vetPrice[i] < lower){
            lower = vetPrice[i];
        }
    }
    
    
    
      
    printf("%.2lf\n", lower);
    
    return 0;
}