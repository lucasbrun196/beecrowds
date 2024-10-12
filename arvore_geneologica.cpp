#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <queue>


using namespace std;

unordered_map<string, vector<string> > graph;
set<string> visited;

void bfs(string src){
    queue<string> qs;
    qs.push(src);
    while (!qs.empty()){
        string current = qs.front();
        qs.pop();
        for(string next: graph[current]){
            if(visited.count(next) == 0){
                qs.push(next);
                visited.insert(next);
            }
        }
    } 
}


int main(){

    int m, n, cont = 0;
    string n1, rel, n2;
    cin >> m >> n;
    for(int i = 0; i < n; ++i){
        cin >> n1 >> rel >> n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }
    for(auto pair: graph){
        if(visited.count(pair.first) == 0){
            bfs(pair.first);
            cont++;
        }
    }   
    cout << cont << endl;


    return 0;
}