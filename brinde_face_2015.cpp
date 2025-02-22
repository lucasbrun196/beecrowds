#include <iostream>
#include <stack>

using namespace std;

int main(){

    int n, ans = 0;
    stack<char> sc;
    stack<char> scAux;
    char l;
    char vet[4];
    cin >> n;
    while(n--){
        if(sc.empty()){
            sc.push('F');sc.push('A');sc.push('C');sc.push('E');
        } 
        for(int i = 0; i < 4; i++){
            cin >> l;
            vet[i]=l;
        }
        for(int i = 0; i < 4; i++){
            if(vet[i] == sc.top()){
                scAux.push(sc.top());
                sc.pop();
            }else break;
        }
        if(scAux.size() == 4){
            while(!scAux.empty()) scAux.pop();
            ans++;
        }else{
            while(!scAux.empty()){
                sc.push(scAux.top());
                scAux.pop();
            }
            for(int i = 0; i < 4; i++) sc.push(vet[i]);
        }
    }
    
    cout << ans << endl;

    return 0;
}