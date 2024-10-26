#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){

    int n, m, b, tot;

    while (true){
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        tot = 0;
        vector<int> vc;
        set<int> visited;
        for(int i = 0; i < m; ++i){
            cin >> b;
            vc.push_back(b);
        }

        for(int i = 0; i < m; ++i){
            if(visited.count(vc[i]) == 0){
                visited.insert(vc[i]);
                for(int j = i+1; j < m; ++j){
                    if(vc[i] == vc[j]){
                        tot++;
                        break;
                    }
                }
            }
        }
        cout << tot << endl;
    }
    
    return 0;
}