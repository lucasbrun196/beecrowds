#include <iostream>
#include <map>
#include <stack>
#include <set>
#include <vector>

using namespace std;

map<char, vector<char> > graph;
set<char> visited;


vector<char> dfs(char src){
    vector<char> res;
    stack<char> s;
    s.push(src);
    res.push_back(src);
    visited.insert(src);
    while(!s.empty()){
        char u = s.top();
        if(u != src){
            res.push_back(u);
        }
        s.pop();
        for(char ch: graph[u]){
            if(visited.count(ch) == 0){
                visited.insert(ch);
                s.push(ch);
            }
        }
    }
    return res;
}


int main(){

    string vert = "abcdefghijklmnopqrstuvwxyz";

    int N, V, A;
    char S, D;
    cin >> N;
    int contCases = 1;
    while(N != 0){
        cin >> V >> A;
        for(int i = 0; i < V; ++i){
            graph[vert[i]];
        }
        for(int i = 0; i < A; ++i){
            cin >> S >> D;
            graph[S].push_back(D);
            graph[D].push_back(S);
        }
        cout << "Case #" << contCases << ":" << endl;
        int cont = 0;
        for(int i = 0; i < V; ++i){
            if(visited.count(vert[i]) == 0){
                cont++;
                vector<char> ans = dfs(vert[i]);
                sort(ans.begin(), ans.end());
                for(char ch: ans){
                    cout << ch << ",";
                }
                cout << endl;
            }
        }
        cout << cont << " connected components\n";
        cout << endl;
        graph.clear();
        visited.clear();
        N--;
        contCases++;
    }
    
    return 0;
}