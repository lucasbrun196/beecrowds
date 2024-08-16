#include <iostream>
#include <stack>


using namespace std;

int main(){

    int vag_qtd, vags;
    while (true){
        scanf("%d", &vag_qtd);
        if(vag_qtd == 0) break;

        while(true){
            stack<int> vags_to;
            stack<int> est;
            stack<int> aux;
            stack<int> vags_from;
            scanf("%d", &vags);
            if(vags == 0) break;
            vags_to.push(vags);
            for(int i = 0; i < vag_qtd -1; ++i){
                scanf("%d", &vags);
                vags_to.push(vags);
            }
            while(!vags_to.empty()){
                aux.push(vags_to.top());
                vags_to.pop();
            }
            for(int i = vag_qtd; i >= 1; --i){
                vags_from.push(i);
            }
            while(!vags_from.empty()){
                if(aux.top() == vags_from.top()){
                    aux.pop();
                    vags_from.pop();
                }else{
                    if(!est.empty() && aux.top() == est.top()){
                        while(true){
                            if(aux.empty() || est.empty()) break;
                            if(aux.top() != est.top()){
                                break;
                            }else{
                                est.pop();
                                aux.pop();
                            }
                            
                        }
                    }else{
                        est.push(vags_from.top());
                        vags_from.pop();
                    }
                }
            }
            
            while(!est.empty()){
                if(est.top() == aux.top()){
                    aux.pop();
                    est.pop();
                }else{
                    break;
                }
            }
            if(est.empty()){
                cout << "Yes\n";
            }else{
                cout << "No\n";
            } 
        }
        cout << endl;
    }
    return 0;
}