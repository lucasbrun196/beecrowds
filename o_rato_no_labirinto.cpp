#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <utility>

using namespace std;

#define INF 0x3F3F3F3F

map<string, vector<string> > g;

int dijkstra(string src, string dest){
    map<string, int> distances;
    for(auto e:g) distances[e.first] = INF;
    queue<pair<int, string> > pq;
    distances[src] = 0;
    pq.push(make_pair(0, src));
    while (!pq.empty()){
        string c = pq.front().second;
        if(c == dest) return distances[dest];
        pq.pop();
        for(string vert: g[c]){
            if(distances[vert] > distances[c] + 1){
                distances[vert] = distances[c] + 1;
                pq.push(make_pair(distances[vert], vert));
            }
        }
    }
    
}

int main(){

    int n, m, in, out, ans;
    string src, dest;
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        cin >> src >> dest;
        g[src].push_back(dest);
        g[dest].push_back(src);
    }
    in = dijkstra("Entrada", "*");
    out = dijkstra("*", "Saida");
    ans = in + out;
    cout << ans << endl;
    return 0;
}