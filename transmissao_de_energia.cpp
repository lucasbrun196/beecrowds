#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <stack>

using namespace std;

map<int, vector<int> > g;

vector<int> dfs(){
    set<int> visited;
    vector<int> ans;
    stack<int> st;
    st.push(1);
    while(!st.empty()){
        int u = st.top();
        st.pop();
        for(int const &p : g[u]){
            if(visited.count(p) == 0){
                visited.insert(p);
                ans.push_back(p);
                st.push(p);
            }
        }
    }
    return ans;
}

int main(){


    int e, l, x, y, cont = 1;

    while(true){
        cin >> e >> l;
        if(e == 0 && l == 0) break;
        for(int i = 0; i < l; ++i){
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }

        vector<int> ans = dfs();
        cout << "Teste " << cont << endl;
        if(ans.size() < e) cout << "falha\n";
        else cout << "normal\n";
        cout << endl;
        
        g.clear();
        cont++;

    }
    return 0;
}