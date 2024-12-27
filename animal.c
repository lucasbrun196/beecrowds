#include <stdio.h>
#include <string.h>

int main(){

    char s1[30], s2[30], s3[30], ans[30];
    
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    fgets(s3, sizeof(s3), stdin);


    if(strcmp(s1, "vertebrado\n") == 0){
        if(strcmp(s2, "ave\n") == 0){
            if(strcmp(s3, "carnivoro\n") == 0) strcpy(ans, "aguia");
            else strcpy(ans, "pomba");
        }else{
            if(strcmp(s3, "onivoro\n") == 0) strcpy(ans, "homem");
            else strcpy(ans, "vaca");
        }
    }else{
        if(strcmp(s2, "inseto\n") == 0){
            if(strcmp(s3, "hematofago\n") == 0) strcpy(ans, "pulga");
            else strcpy(ans, "lagarta");
        }else{
            if(strcmp(s3, "hematofago\n") == 0) strcpy(ans, "sanguessuga");
            else strcpy(ans, "minhoca");
        }
    }

    printf("%s\n", ans);

    return 0;
}

