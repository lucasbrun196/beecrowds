#include <iostream>

using namespace std;

#define MAX 50

int vet[MAX];


int main(){
    int n, x, first;
    while(true){
        cin >> n;
        if(n == 0) break;
        for(int i = 0; i < n; i++){
            cin >> x;
            vet[i] = x;
        }
        cin >> first;
        while(vet[first-1] != first) first = vet[first-1];
        cout << first << endl;
    }

    return 0;
}