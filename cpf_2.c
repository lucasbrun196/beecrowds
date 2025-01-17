#include <stdio.h>

int main(){
    char cpfn[10];
    int lastDigit, index;

    while(scanf("%s", cpfn) != EOF){
        char ansCpf[15] = {'\0'};
        char ans[12];
        lastDigit = 0;
        for(int i = 1; i <= 9; i++){
            ans[i-1] = cpfn[i-1];
            lastDigit += (cpfn[i-1] - '0') * i;
        }
        lastDigit = lastDigit % 11;
        if(lastDigit == 10) lastDigit = 0;
        ans[9] = lastDigit + '0';
        int aux = 9;
        lastDigit = 0;
        for(int i = 0; i < 9; i++){
            lastDigit += (cpfn[i] - '0') * aux;
            aux--;
        } 
        lastDigit = lastDigit % 11;
        if(lastDigit == 10) lastDigit = 0;
        ans[10] = lastDigit + '0';
        index = 0;
        for(int i = 0; i < 14; i++){
            if(i == 3 || i == 7) ansCpf[i] = '.';
            else if(i == 11) ansCpf[i] = '-';
            else ansCpf[i] = ans[index++];
        }
        printf("%s\n", ansCpf);
    }
    


    

    
    

    

    return 0;
}