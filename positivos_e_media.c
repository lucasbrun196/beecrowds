#include <stdio.h>

int main(){

    int pos = 0;
    float med, ac = 0.0;
    for(int i = 0; i < 6; i++){
        scanf("%f", &med);
        if(med > 0){
            ac += med;
            pos++;
        } 
    }
    printf("%d valores positivos\n%.1f\n", pos, ac/pos);
    return 0;
}