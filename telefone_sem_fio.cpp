#include <stdio.h>
#include <iostream>


using namespace std;

int main(){

    int n, size, ans1, ans2, inst = 1;
    int f1First, f2First;
    string f, f1, f2;
    scanf("%d ", &n);
    while(n--){
        ans1=0; ans2=0;
        getline(cin, f);
        getline(cin, f1);
        getline(cin, f2);
        size = f.size();
        
        for(int i = 0; i < size; i++){
            
            if(f1[i] == f[i]) ans1++;
            if(f2[i] == f[i]) ans2++;
        }

        printf("Instancia %d\n", inst);
        if(ans1 == ans2){
            f1First=0;f2First=0;
            for(int i = 0; i < size; i++){
                if(f1[i] == f[i]) f1First = 1;
                else f1First = 0;
                if(f2[i] == f[i]) f2First = 1;
                else f2First = 0;
                if(f1First != f2First) break; 
            }
            if(f1First == f2First) printf("empate");
            else if(f1First == 1) printf("time 1");
            else printf("time 2");
        }
        else if(ans1 > ans2) printf("time 1");
        else printf("time 2");
        printf("\n\n");

        inst++;

    }

    return 0;
}