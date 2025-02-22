#include <iostream>

using namespace std;

int main(){
    int n, m, p;
    bool heCan = true;
    cin >> n >> m;
    int vet[n];
    for(int i = 0; i < n; i++){
        cin >> p;
        vet[i] = p;
    }
    vet[n] = 42195;
    for(int i = 0; i < n; i++){
        if(vet[i+1] - vet[i] > m){
            heCan = false;
            break;
        }
    }
    if(heCan) cout << "S\n";
    else cout << "N\n";


    return 0;
}