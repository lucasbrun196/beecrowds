#include <iostream>
#include <vector>
#include <set>
#include <stack>
#include <unordered_map>

using namespace std;


int dfs(int src, unordered_map<int, vector<int> > &g){
    stack<int> st;
    vector<int> ans;
    set<int> visited;
    visited.insert(src);
    st.push(src);
    while(!st.empty()){
        int u = st.top();
        st.pop();
        if(u != src){
            ans.push_back(u);
        }
        for(int v: g[u]){
            if(visited.count(v) == 0){
                visited.insert(v);
                st.push(v);
            }
        }
    }
    return ans.size();
}

int main(){

    int cases;
    cin >> cases;

    while(cases--){
        int initVert, v, a;
        cin >> initVert;
        cin >> v >> a;
        unordered_map<int, vector<int> > graph;

        for(int i = 0; i <= v; ++i){
            graph[i];
        }

        int from, to;
        for(int i = 0; i < a; ++i){
            cin >> from >> to;
            graph[from].push_back(to);
            graph[to].push_back(from);
        }

        int res = dfs(initVert, graph) * 2;
        cout << res << endl;
    }


    return 0;
}