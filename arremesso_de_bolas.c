#include <stdio.h>

int main(){

    int d, v, ac, copyv;
    while(1){
        
        scanf("%d %d", &d, &v);
        if(d == 0 && v == 0) break;
        ac = 0;
        copyv = v;
        while(1){
            for(int i = 0; i < v; i++){
                if(ac == d) break;
                ac += v;
            } 
            if(ac == d){
                printf("possivel\n");
                break;
            }
            if(ac > d){
                copyv--;
                v = copyv;
                ac = 0;
            }else{
                if(v == 0){
                    printf("impossivel\n");
                    break;
                }else v--;
                
            }
            
        }
    }
    return 0;
}