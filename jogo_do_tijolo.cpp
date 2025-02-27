#include <iostream>

using namespace std;

int main(){
    int n, p, x, cont = 0;

    cin >> n;
    while(cont < n){
        cin >> p;
        cont++;
        int vet[p];
        for(int i = 0; i < p; i++){
            cin >> x;
            vet[i] = x;
        }
        x = vet[p/2];
        cout << "Case " << cont << ": " << x << endl;
    }

    return 0;
}