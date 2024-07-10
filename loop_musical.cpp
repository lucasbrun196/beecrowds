#include <iostream>
#include <vector>

using namespace std;

bool statusChanged(int current, int next, bool status, bool show){
    if(current > next){
        return false;
    }else{
        return true;
    }
}

int main(){
    
    int n, notas_musicais, lim, cont_picos;
    
    while(n != 0){
        cont_picos = 0;
        cin >> n;
        vector<int> vec_loop;
        for(int i = 0; i < n; ++i){
            cin >> notas_musicais;
            vec_loop.push_back(notas_musicais);
        }
        lim = vec_loop.size()-1;
        
        bool initial = true;
        bool status, change, ant;
        for(int i = 0; i <= lim; ++i){
            change = false;
            if(initial){
                ant = statusChanged(vec_loop[i], vec_loop[i+1], status, true);
                initial = false;
            

            }else if(i == vec_loop.size()-1){
                if(ant != statusChanged(vec_loop[i], vec_loop[0], status, true)){
                    cont_picos++;
                    ant = statusChanged(vec_loop[i], vec_loop[0], status, false);
                }
                i = -1;
                lim = 0;
            }else{
                if(ant != statusChanged(vec_loop[i], vec_loop[i+1], status, true)){
                    ant = statusChanged(vec_loop[i], vec_loop[i+1], status, false);
                    cont_picos++;
                }
            }
        }
        if(cont_picos != 0){
            cout << cont_picos << endl;
        }
        

    }
    return 0;
}