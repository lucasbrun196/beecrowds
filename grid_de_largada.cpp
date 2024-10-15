#include <iostream>
#include <stack>

using namespace std; 

int main(){

    int pqt, pl, pc, tot;
    while (cin >> pqt){
        tot = 0;
        stack<int> largada, chegada, aux;
        for(int i = 0; i < pqt; ++i){
            cin >> pl;
            largada.push(pl);
        }
        for(int i = 0; i < pqt; ++i){
            cin >> pc;
            chegada.push(pc);
        }
        while(!largada.empty()){
            if(largada.top() == chegada.top()){
                largada.pop();
                chegada.pop();
                while (!aux.empty()){
                    chegada.push(aux.top());
                    aux.pop();
                }
            }else{
                aux.push(chegada.top());
                chegada.pop();
                tot++;
            }
        }
        cout << tot << endl;
    }
    
    return 0;
}