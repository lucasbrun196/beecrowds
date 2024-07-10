#include <iostream>

using namespace std;

string convertToBin(int num){
    string result = "";
    while(true){
        result = to_string(num % 2) + result;
        if(num < 2){
            break;
        }
        num = num / 2;
    }
    return result;
}

int main(){

    int inp, maior, tot;

    for(int i = 0; i < 4; ++i){
        tot = 0;
        for(int j = 0; j < 7; ++j){
            cin >> inp;
            tot += inp;
        }
        if(i == 0){
            maior = tot;
        }else if(tot > maior){
            maior = tot;
        }
    }

    cout << maior << " = " << convertToBin(maior) << endl;

    return 0;
}