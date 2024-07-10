#include <iostream>

using namespace std;

int main(){
    
    int n, aux;
    string a, b, newa;
    cin >> n;

    while(n--){
        newa = "";
        cin >> a >> b;
        aux = b.length();
        for(int i = a.length() -1; aux > 0; --i){
            newa = a[i] + newa;
            aux--;
        }
        if(newa == b){
            cout << "encaixa\n";
        }else{
            cout << "nao encaixa\n";
        }
    }


    return 0;
}