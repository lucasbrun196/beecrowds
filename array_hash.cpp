#include <iostream>
#include <map>

using namespace std;

int main(){
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    map<char, int> hashAlpha;
    for(int i = 0; i < alpha.length(); ++i){
        hashAlpha[alpha[i]] = i;
    }
    string sentence;
    int n, l, tot;
    cin >> n;

    while(n--){
        tot = 0;
        cin >> l;
        string vet[l];
        for(int i = 0; i < l; ++i){
            cin >> sentence;
            vet[i] = sentence;
        }
        for(int i = 0; i < l; ++i){
            for(int j = 0; j < vet[i].length(); ++j){
                tot += i + j + hashAlpha[vet[i][j]];
            }
        }
        cout << tot << endl;
    }
    return 0;
}