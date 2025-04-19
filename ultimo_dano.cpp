#include <iostream>

using namespace std;

int main(){

    int n, at, ad, bt, bd, mp, c1, c2;
    cin >> n;
    while(n--){
        cin >> at >> ad >> bt >> bd >> mp;
        c1=-1; c2=-1;
        while(true){
            if(c1 == ad || c1 == -1){
                mp -= at;
                c1 = 0;
            }
            if(mp <= 0){
                cout << "Andre\n";
                break;
            }
            if(c2 == bd || c2 == -1){
                mp -= bt;
                c2 = 0;
            }
            if(mp <= 0){
                cout << "Beto\n";
                break;
            } 
            c1++;c2++;
        }
    }
    return 0;
}