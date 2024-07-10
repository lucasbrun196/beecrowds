#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int f1, f2, maior, menor, aux;
        cin >> f1; 
        cin >> f2;
        if(f1 >= f2){
            maior = f1;
            menor = f2;
        }else{
            maior = f2;
            menor = f1;
        }
        while(true){
            aux = maior % menor;
            maior = menor;
            menor = aux; 
            if(maior == 0){
                cout << menor << endl;
                break;
            }else if(menor == 0){
                cout << maior << endl;
                break;
            }
            
        }
    }
    return 0;
}