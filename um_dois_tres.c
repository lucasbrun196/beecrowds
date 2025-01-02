#include <stdio.h>
#include <string.h>

int main(){

    int n;
    char one[] = "one", two[] = "two";
    scanf("%d", &n);
    char str[5];
    for(int i = 0; i < n; i++){
        int o=0, t=0;
        scanf(" %[^\n]", str);
        if(strlen(str) == 5) printf("3\n");
        else{
            for(int j = 0; j < 3; j++){
                if(str[j] == one[j]) o++;
                if(str[j] == two[j]) t++;
            }
            if(o > t) printf("1\n");
            else printf("2\n");
        }
    }
    return 0;
}